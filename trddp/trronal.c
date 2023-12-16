#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

#define MAX_PENGUNJUNG 100

//ronalll babi jan lupa bayar 100k yaaa asu

struct Barang {
    char nama[20];
    int harga;
};

struct Pengunjung {
    char nama[50];
    int pilihan_barang;
    int jumlah_barang;
    int status_pembayaran;  
};

struct Barang daftar_barang[] = {{"", 0}, {"Kaos", 5000},{"Celana", 15000},{"Kemeja", 7000} ,{"kulkas" ,2000}
};

#define JUMLAH_BARANG (sizeof(daftar_barang) / sizeof(daftar_barang[0]))
struct Pengunjung daftar_pengunjung[MAX_PENGUNJUNG];
int jumlah_pengunjung = 0;
void tampilkanDataBarang() {
    printf("\n===== DATA BARANG =====\n");
    printf("No.\tNama Barang\t\tHarga Barang\n");

    for (int i = 1; i < JUMLAH_BARANG; i++) {
        printf("%d.\t%s\t\t\tRp.%d\n", i, daftar_barang[i].nama, daftar_barang[i].harga);
    }
}
void pesanBarang(struct Pengunjung *pengunjung) {
    printf("\n===== PEMESANAN BARANG =====\n");
    printf("Masukkan nama pengunjung: ");
    scanf("%s", pengunjung->nama);

    printf("==Pilihan barang==\n");
    printf("Pilih nomor barang (1-%d): ", JUMLAH_BARANG - 1);
    scanf("%d", &(pengunjung->pilihan_barang));

    if (pengunjung->pilihan_barang < 1 || pengunjung->pilihan_barang >= JUMLAH_BARANG) {
        printf("Nomor barang tidak valid.\n");
        return;
    }
    printf("Jumlah barang yang ingin dibeli: ");
    scanf("%d", &(pengunjung->jumlah_barang));
    pengunjung->status_pembayaran = 0;
}

void tampilkanDataPengunjung(int index) {
    if (index >= 0 && index < jumlah_pengunjung) {
        printf("\n===== DATA PEMESAN =====\n");
        printf("No.\tNama\t\tPilihan Barang\t\tJumlah Barang\n");

        if (daftar_pengunjung[index].status_pembayaran == 1) {
            printf("%d.\t%s\t\t%s\t\t%d\n", index + 1, daftar_pengunjung[index].nama,
                   daftar_barang[daftar_pengunjung[index].pilihan_barang].nama, daftar_pengunjung[index].jumlah_barang);     //ronalll babi jan lupa bayar 100k yaaa asu
        } else {
            printf("Data belum tersedia. Pemesan belum membayar.\n");
        }
    } else {
        printf("Invalid index.\n");
    }
}

void tampilkanSemuaDataPengunjung() {
    printf("\n===== DATA SEMUA PEMESAN =====\n");
    printf("No.\tNama\t\tPilihan Barang\t\tJumlah Barang\t\tTotal Harga\t\tStatus Pembayaran\n");

    for (int i = 0; i < jumlah_pengunjung; i++) {
        printf("%d.\t%s\t\t%s\t\t\t    %d\t\t\t Rp.%d\t\t%s\n", i + 1, daftar_pengunjung[i].nama,
               daftar_barang[daftar_pengunjung[i].pilihan_barang].nama, daftar_pengunjung[i].jumlah_barang,
               daftar_barang[daftar_pengunjung[i].pilihan_barang].harga * daftar_pengunjung[i].jumlah_barang,
               (daftar_pengunjung[i].status_pembayaran == 1) ? "Lunas" : "Belum Lunas");
    }
}

void cetakStruk(int index) {
    if (index >= 0 && index < jumlah_pengunjung) {
        printf("\n===== CETAK STRUK PEMESAN =====\n");
        printf("Nama: %s\n", daftar_pengunjung[index].nama);
        printf("Pilihan Barang: %s\n", daftar_barang[daftar_pengunjung[index].pilihan_barang].nama);
        printf("Harga: Rp.%d\n", daftar_barang[daftar_pengunjung[index].pilihan_barang].harga);
        printf("Jumlah Barang: %d\n", daftar_pengunjung[index].jumlah_barang);
        int totalHarga = daftar_barang[daftar_pengunjung[index].pilihan_barang].harga * daftar_pengunjung[index].jumlah_barang;
        printf("Total Harga: Rp.%d\n", totalHarga);

    if (daftar_pengunjung[index].status_pembayaran == 1)
    {
        printf("anda sudah membayar");
    }
    else
    {
        int pembayaran;
        do {
            printf("Masukkan jumlah pembayaran: Rp.");
            scanf("%d", &pembayaran);
            if (pembayaran < totalHarga) {
                printf("Jumlah pembayaran kurang. Silakan masukkan jumlah yang cukup.\n");
            }
        } while (pembayaran < totalHarga);

        int kembalian = pembayaran - totalHarga;
        printf("Jumlah Pembayaran: Rp.%d\n", pembayaran);
        printf("Kembalian: Rp.%d\n", kembalian);

        daftar_pengunjung[index].status_pembayaran = 1;

        printf("========================\n");
    }
    
    
       
    } else {
        printf("Invalid index.\n");
    }
}

int main() {
    char username[20], password[20];
    printf("Username: ");
    scanf("%s", username);
    printf("Password: ");
     int i = 0;
    while (1) {
        char ch = getch();  
        if (ch == 13) { 
            password[i] = '\0';
            break;
        } else if (ch == 8) {  
            if (i > 0) {
                i--;
                printf("\b \b"); 
            }
        } else {
            password[i] = ch;
            i++;
            printf("*");  
        }
    }

    if (strcmp(username, "deo") == 0 && strcmp(password, "ganteng") == 0) {
        int pilihan;
        do {
            printf("\n===== MENU =====\n");
            printf("1. Tampilkan Data Barang\n");
            printf("2. Pemesanan Barang\n");
            printf("3. Tampilkan Data Pemesan\n");
            printf("4. Tampilkan Semua Data Pemesan\n");
            printf("5. Pembayaran dan Cetak Struk\n");
            printf("6. Kesan dan pesan buat asdos\n");
            printf("7. Keluar\n");
            printf("Pilihan Anda: ");
            scanf("%d", &pilihan);
            system("cls");
            switch (pilihan) {
                case 1:
                    tampilkanDataBarang();
                    break;
                case 2:
                    pesanBarang(&daftar_pengunjung[jumlah_pengunjung]);
                    jumlah_pengunjung++;
                    break;
                case 3:
                    printf("Masukkan nomor pemesan: ");
                    int nomorPemesan;
                    scanf("%d", &nomorPemesan);
                    tampilkanDataPengunjung(nomorPemesan - 1);
                    break;
                case 4:
                    tampilkanSemuaDataPengunjung();
                    break;
                case 5:
                    printf("Masukkan nomor pemesan untuk pembayaran: ");
                    int nomorPembayaran;
                    scanf("%d", &nomorPembayaran);
                    cetakStruk(nomorPembayaran - 1);
                    break;
                case 6:
                    printf("kesan dan pesan buat asdos\n");
                    break;
                case 7:
                    return 0;
                    break;
                default:
                    printf("Pilihan tidak valid\n");
            }
        } while (pilihan != 7);
    } else {
        printf("\nLogin Gagal\n");
    }

    return 0;
}




//ronalll babi jan lupa bayar 100k yaaa asu