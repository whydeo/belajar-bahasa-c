#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct MenuItem {
    char nama[255];
    int harga;
    char kategori[20];
};

struct Pesanan {
    char namaPelanggan[255];
    char namaMenu[255];
    int jumlah;
    int totalHarga;
};

struct Transaksi {
    char namaPelanggan[255];
    struct Pesanan pesanan[30];
    int jumlahPesanan;
    int totalPembayaran;
};

struct Transaksi transaksi[30];
int jumlahTransaksi = 0;

void simpanMenu(FILE *file, struct MenuItem menu[], int mulai, int slesei) {
    file = fopen("menu.txt", "w");

    if (file != NULL) {
        for (int i = 0; i < slesei; i++) {
            fprintf(file, "%s %d %s\n", menu[i].nama, menu[i].harga, menu[i].kategori);
        }
        fclose(file);
    } else {
        printf("Error membuka file untuk penulisan.\n");
    }
}

void bacaMenu(FILE *file, struct MenuItem menu[], int *jumlahmenu) {
    file = fopen("menu.txt", "r");

    if (file != NULL) {
        *jumlahmenu = 0;
        while (fscanf(file, " %[^0-9]%d %[^\n]", menu[*jumlahmenu].nama, &menu[*jumlahmenu].harga, menu[*jumlahmenu].kategori) == 3) {
            (*jumlahmenu)++;
        }
        fclose(file);
    } else {
        printf("Error membuka file untuk pembacaan.\n");
    }
}

void tampilkanMenu(struct MenuItem menu[], int jumlahmenu) {
    if (jumlahmenu > 0) {
        for (int i = 0; i < jumlahmenu; i++) {
            printf("%d. Nama: %s\n   Harga: Rp %d\n   Kategori: %s\n\n", i + 1, menu[i].nama, menu[i].harga, menu[i].kategori);
        }
    } else {
        printf("Menu kosong.\n");
    }
}

void panah(int nomorMenu, int nomorPanah) {
    if (nomorMenu == nomorPanah)
        printf("--> ");
    else
        printf("   ");
}

void pesanMenu(struct MenuItem menu[], int jumlahmenu) {
    int nomorPesanan;
    int jumlahPesan;
    char tambah;

    
    printf("Masukkan nama Anda: ");
    scanf(" %[^\n]s", transaksi[jumlahTransaksi].namaPelanggan);
    do{
    printf("\nPilih nomor menu yang ingin dipesan: ");
    scanf("%d", &nomorPesanan);
    if (nomorPesanan > 0 && nomorPesanan <= jumlahmenu) {
        printf("Masukkan jumlah pesanan: ");
        scanf("%d", &jumlahPesan);
        strcpy(transaksi[jumlahTransaksi].pesanan[transaksi[jumlahTransaksi].jumlahPesanan].namaMenu, menu[nomorPesanan - 1].nama);
        transaksi[jumlahTransaksi].pesanan[transaksi[jumlahTransaksi].jumlahPesanan].jumlah = jumlahPesan;
        transaksi[jumlahTransaksi].pesanan[transaksi[jumlahTransaksi].jumlahPesanan].totalHarga = jumlahPesan * menu[nomorPesanan - 1].harga;

        printf("%s memesan %d x %s\n", transaksi[jumlahTransaksi].namaPelanggan, jumlahPesan, menu[nomorPesanan - 1].nama);
        printf("Total Harga: Rp %d\n", transaksi[jumlahTransaksi].pesanan[transaksi[jumlahTransaksi].jumlahPesanan].totalHarga);

        transaksi[jumlahTransaksi].jumlahPesanan++;
    } else {
        printf("Nomor menu tidak valid.\n");
    }
        printf("tambah pesanan (y/n)");
        tambah=getch();
        
    } while (tambah == 'y' || tambah == 'Y');
    
   
}

void tampilkanPesanan(struct Transaksi *t) {
    printf("===== Pesanan %s =====\n", t->namaPelanggan);
    for (int i = 0; i < t->jumlahPesanan; i++) {
        printf("%s memesan %d x %s - %d x Rp %d = Rp %d\n", t->namaPelanggan, t->pesanan[i].jumlah, t->pesanan[i].namaMenu, t->pesanan[i].jumlah, t->pesanan[i].totalHarga / t->pesanan[i].jumlah, t->pesanan[i].totalHarga);
    }
}

void aturPembayaran() {
    if (transaksi[jumlahTransaksi].jumlahPesanan > 0) {
        tampilkanPesanan(&transaksi[jumlahTransaksi]);

        int totalPembayaran = 0;
        for (int i = 0; i < transaksi[jumlahTransaksi].jumlahPesanan; i++) {
            totalPembayaran += transaksi[jumlahTransaksi].pesanan[i].totalHarga;
        }

        printf("Total Pembayaran: Rp %d\n", totalPembayaran);
        printf("Masukkan jumlah pembayaran: ");

        int pembayaran;
        scanf("%d", &pembayaran);

        if (pembayaran >= totalPembayaran) {
            printf("Terima kasih atas pembayaran Anda! Kembalian: Rp %d\n", pembayaran - totalPembayaran);
            transaksi[jumlahTransaksi].totalPembayaran = totalPembayaran;
            jumlahTransaksi++;
            transaksi[jumlahTransaksi].jumlahPesanan = 0;

            // Menyimpan history transaksi ke dalam file
            FILE *transaksiFile;
            transaksiFile = fopen("transaksi.txt", "a");

            if (transaksiFile != NULL) {
                fprintf(transaksiFile, "%s %d\n", transaksi[jumlahTransaksi - 1].namaPelanggan, transaksi[jumlahTransaksi - 1].totalPembayaran);
                fclose(transaksiFile);
            } else {
                printf("Error membuka file untuk penulisan transaksi.\n");
            }
        } else {
            printf("Jumlah pembayaran kurang. Pembayaran tidak diterima.\n");
        }
    } else {
        printf("Belum ada pesanan yang dapat dibayar.\n");
    }
}

void tampilkanHistoryTransaksi() {
    printf("===== History Transaksi =====\n");
    FILE *transaksiFile;
    transaksiFile = fopen("transaksi.txt", "r");

    if (transaksiFile != NULL) {
        char namaPelanggan[255];
        int totalPembayaran;

        while (fscanf(transaksiFile, " %[^0-9]%d", namaPelanggan, &totalPembayaran) == 2) {
            printf("%s - Total Pembayaran: Rp %d\n", namaPelanggan, totalPembayaran);
        }

        fclose(transaksiFile);
    } else {
        printf("Error membuka file untuk membaca history transaksi.\n");
    }
}

void main() {
    FILE *fptr;
    struct MenuItem menu[30];
    int jumlahmenu = 0;

    fptr = fopen("menu.txt", "r");
    if (fptr != NULL) {
        bacaMenu(fptr, menu, &jumlahmenu);
        fclose(fptr);
    }

    int nomorPanah = 1;
    int key, tambah, ubah, ubahh;

    while (1) {
        system("cls");
        panah(1, nomorPanah);
        printf("1. Tambah Menu\n");
        panah(2, nomorPanah);
        printf("2. Lihat Menu\n");
        panah(3, nomorPanah);
        printf("3. Pesan Menu\n");
        panah(4, nomorPanah);
        printf("4. Atur Pembayaran\n");
        panah(5, nomorPanah);
        printf("5. Tampilkan History Transaksi\n");
        panah(6, nomorPanah);
        printf("6. Keluar\n");

        key = getch();

        if (key == 80) {
            nomorPanah++;
            if (nomorPanah > 6)
                nomorPanah = 1;
        } else if (key == 72) {
            nomorPanah--;
            if (nomorPanah < 1)
                nomorPanah = 6;
        } else if (key == 13) {
            break;
        }
    }
    system("cls");
    switch (nomorPanah) {
    case 1:
        printf("Mau tambah berapa menu: ");
        scanf("%d", &tambah);
        for (int i = 0; i < tambah; i++) {
            printf("\nNama menu: ");
            fflush(stdin);
            fgets(menu[jumlahmenu].nama, sizeof(menu[jumlahmenu].nama), stdin);
            menu[jumlahmenu].nama[strcspn(menu[jumlahmenu].nama, "\n")] = '\0';

            printf("\nHarga menu: ");
            scanf("%d", &menu[jumlahmenu].harga);

            printf("\nKategori menu (food/drink): ");
            scanf("%s", menu[jumlahmenu].kategori);

            jumlahmenu++;
        }
        simpanMenu(fptr, menu, 0, jumlahmenu);
        system("pause");
        main();
        break;
    case 2:
        if (jumlahmenu > 0) {
            tampilkanMenu(menu, jumlahmenu);
        } else {
            printf("Menu kosong.\n");
        }
        system("pause");
        main();
        break;
    case 3:
     if (jumlahmenu > 0) {
            tampilkanMenu(menu, jumlahmenu);
        } else {
            printf("Menu kosong.\n");
        }
        pesanMenu(menu, jumlahmenu);
        system("pause");
        main();
        break;
    case 4:
        aturPembayaran();
        system("pause");
        main();
        break;
    case 5:
        tampilkanHistoryTransaksi();
        system("pause");
        main();
        break;
    case 6:
        printf("Terima kasih!\n");
        system("pause");
        break;
    default:
        printf("Pilihan tidak valid. Silakan coba lagi.\n");
        break;
    }
    return 0;
}
