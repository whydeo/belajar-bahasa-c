#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

#define MAX_PENGUNJUNG 100
#define MAX_BARANG 3



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

struct Barang daftar_barang[] = {{"", 0}, {"Kaos",  50000},{"Celana", 150000},{"Kemeja", 70000} ,{"Jaket" , 200000}
};

#define JUMLAH_BARANG (sizeof(daftar_barang) / sizeof(daftar_barang[0]))
struct Pengunjung daftar_pengunjung[MAX_PENGUNJUNG];
int jumlah_pengunjung = 0;
void pesanBarang(struct Pengunjung *pengunjung) {
    printf("\n\t\t\t\t\t\t\t===== PEMESANAN BARANG =====\n");
    printf("\t\t\t\t\t\t\tMasukkan nama pengunjung: ");
    scanf("%s", pengunjung->nama);

    printf("\t\t\t\t\t\t\t==Pilihan barang==\n");
    printf("\t\t\t\t\t\t\t1. Kaos   (Rp 50000)\n");
    printf("\t\t\t\t\t\t\t2. Celana (Rp 150000)\n");
    printf("\t\t\t\t\t\t\t3. Kemeja (Rp 70000)\n");
    printf("\t\t\t\t\t\t\t4. Jaket  (Rp 200000)\n");

    printf("\t\t\t\t\t\t\tPilih barang (1-%d): ", JUMLAH_BARANG - 1);
    scanf("%d", &(pengunjung->pilihan_barang));

    if (pengunjung->pilihan_barang < 1 || pengunjung->pilihan_barang >= JUMLAH_BARANG) {
        printf("Nomor barang tidak valid.\n");
        return;
    }
    printf("\t\t\t\t\t\t\tJumlah barang yang ingin dibeli: ");
    scanf("%d", &(pengunjung->jumlah_barang));
    pengunjung->status_pembayaran = 0;
    system("cls");
}

void tampilkanDataPengunjung(int index) {
    if (index >= 0 && index < jumlah_pengunjung) {
        printf("\n\t\t\t\t\t\t\t===== DATA PEMESAN =====\n");
        printf("\t\t\t\t\t\t\tNo.|\tNama\t\tPilihan Barang|\t\tJumlah Barang|\t\tStatus Pembayaran|\n");

        printf("\t\t\t\t\t\t\t%d.\t%s\t\t%s\t\t\t%d\t\t\t%s\n", index + 1, daftar_pengunjung[index].nama,
               daftar_barang[daftar_pengunjung[index].pilihan_barang].nama, daftar_pengunjung[index].jumlah_barang,
               daftar_pengunjung[index].status_pembayaran == 1 ? "Sudah dibayar" : "Belum dibayar");
    } else {
        printf("\t\t\t\t\t\t\tdata masih ksong.\n");

}

system ("pause");
system ("cls");

}

void tampilkanSemuaDataPengunjung() {
    printf("\n\t\t=============================== DATA SEMUA PEMESAN =======================================\n");
    printf("\t\t\tNo.|\tNama|\tPilihan Barang|\tJumlah Barang|\tTotal Harga|\tStatus Pembayaran|\n");

    for (int i = 0; i < jumlah_pengunjung; i++) {
        printf("\t\t\t%d.\t%s\t%s\t\t%d\t\t Rp.%d\t%s\n", i + 1, daftar_pengunjung[i].nama,
               daftar_barang[daftar_pengunjung[i].pilihan_barang].nama, daftar_pengunjung[i].jumlah_barang,
               daftar_barang[daftar_pengunjung[i].pilihan_barang].harga * daftar_pengunjung[i].jumlah_barang,
               (daftar_pengunjung[i].status_pembayaran == 1) ? "Lunas" : "Belum Lunas");

    }
system ("cls");
}

void cetakStruk(int index) {
    if (index >= 0 && index < jumlah_pengunjung) {
        printf("\n\t\t\t\t\t\t\t===== CETAK STRUK PEMESAN =====\n");
        printf("\n\t\t\t\t\t\t---------------------------------------------------------\n");
        printf("\t\t\t\t\t\t|Nama                              =      %s\n", daftar_pengunjung[index].nama);
        printf("\t\t\t\t\t\t|Pilihan Barang                    =      %s\n", daftar_barang[daftar_pengunjung[index].pilihan_barang].nama);
        printf("\t\t\t\t\t\t|Harga                             =      Rp.%d\n", daftar_barang[daftar_pengunjung[index].pilihan_barang].harga);
        printf("\t\t\t\t\t\t|Jumlah Barang                     =      %d\n", daftar_pengunjung[index].jumlah_barang);
        int totalHarga = daftar_barang[daftar_pengunjung[index].pilihan_barang].harga * daftar_pengunjung[index].jumlah_barang;
        printf("\t\t\t\t\t\t|Total Harga                       =      Rp.%d\n", totalHarga);

    if (daftar_pengunjung[index].status_pembayaran == 1)
    {
        printf("\t\t\t\t\t\t|tanda sudah membayar");
    }
    else
    {
        int pembayaran;
        do {
            printf("\t\t\t\t\t\t|Masukkan jumlah pembayaran        =      Rp.");
            scanf("%d", &pembayaran);
            if (pembayaran < totalHarga) {
                printf("\t\t\t\t\t\t|Jumlah pembayaran kurang. Silakan masukkan jumlah yang cukup.\n");
            }
        } while (pembayaran < totalHarga);

        int kembalian = pembayaran - totalHarga;
        printf("\t\t\t\t\t\t|Jumlah Pembayaran                 =      Rp.%d\n", pembayaran);
        printf("\t\t\t\t\t\t|Kembalian                         =      Rp.%d\n", kembalian);

        daftar_pengunjung[index].status_pembayaran = 1;

        printf("\t\t\t\t\t\t=========================================================\n");

    }


  } else {
        printf("\t\t\t\t\t\t\tInvalid index.\n");
    }
    system ("cls");
}

int main() {
    char username[20], password[20];
    printf("\t\t\t\t\t\t\tUsername: ");
    scanf("%s", username);
    printf("\t\t\t\t\t\t\tPassword: ");

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

    if (strcmp(username, "Rio") == 0 && strcmp(password, "123456") == 0) {
            system("cls");
        int pilihan;
        do {
            printf("\n\t\t\t\t\t\t\t===== MENU =====\n");

            printf("\t\t\t\t\t\t\t1. Menu Input\n");
            printf("\t\t\t\t\t\t\t2. Tampilkan Data Pemesan\n");
            printf("\t\t\t\t\t\t\t3. Tampilkan Semua Data Pemesan\n");
            printf("\t\t\t\t\t\t\t4. Pembayaran dan Cetak Struk\n");
            printf("\t\t\t\t\t\t\t5. Kesan dan pesan buat asdos\n");
            printf("\t\t\t\t\t\t\t6. Exit\n");
            printf("\t\t\t\t\t\t\tPilihan Anda: ");
            scanf("%d", &pilihan);
            system("cls");
            switch (pilihan) {
                case 1:
                    pesanBarang(&daftar_pengunjung[jumlah_pengunjung]);
                    jumlah_pengunjung++;
                    break;
                case 2:
                    printf("\t\t\t\t\t\t\tMasukkan nomor pemesan: ");
                    int nomorPemesan;
                    scanf("%d", &nomorPemesan);
                    tampilkanDataPengunjung(nomorPemesan - 1);
                    break;
                case 3:
                    tampilkanSemuaDataPengunjung();
                    break;
                case 4:
                    printf("\t\t\t\t\t\t\tMasukkan nomor pemesan untuk pembayaran: ");
                    int nomorPembayaran;
                    scanf("%d", &nomorPembayaran);
                    cetakStruk(nomorPembayaran - 1);
                    break;
                case 5:
                    printf("Kesan Pesan buat Asdos : Teruntuk kaka asdos,terimakasih atas ilmu yang sudah diberikan kepada kami, and see u later we love u kak ");
                    system("pause");
                    system("cls");
                    break;
                case 6:
                    printf("Ronalriyes Tefa         (672023293)\n");
                    printf("Fellisca Novelia        (672023132)\n");
                    printf("Grethicha sanda toding  (672023287)\n");
                    return 0;
                    break;
                default:
                    printf("\t\t\t\t\t\t\tPilihan tidak valid\n");
            }
        } while (pilihan != 6);
    } else {
        printf("\n\t\t\t\t\t\t\tLogin Gagal\n");
    }
}
