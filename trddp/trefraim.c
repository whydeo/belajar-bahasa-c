#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#define MAX_USERS 100
#define MAX_BOOKINGS 100
struct User {
    char nama[100];
    char username[100];
    char password[100];
};

char namaPemesanan[MAX_BOOKINGS][50];
char noTeleponPemesanan[MAX_BOOKINGS][15];
int nomorKamarPemesanan[MAX_BOOKINGS];
int durasiHariPemesanan[MAX_BOOKINGS];
double totalHargaPemesanan[MAX_BOOKINGS];
int jumlahPemesanan = 0;

int nomorKamar[6] = {101, 102, 103, 104, 105, 106};
double hargaKamar[6] = {1000000, 2000000, 3000000, 1000000, 2000000, 3000000};
char tipeKamar[6][50] = {"biasa", "vip", "vvip", "biasa", "vip", "vvip"};
char namaPemesan[50];
double totalHarga;

void kamarr() {
    printf("\n\n\t\t\t\t\tNo Kamar\tHarga\t\t\tTipe Kamar\n");
    for (int i = 0; i < 6; i++) {
        printf("\t\t\t\t\t%d\t\t%.2f\t\t\t%s\n", nomorKamar[i], hargaKamar[i], tipeKamar[i]);
    }
}
void pesanKamar(int *nokmr, char noTelp[15], int *durasiHari) {
    do {
        printf("\t\tMasukkan nomor kamar yang ingin dipesan: ");
        scanf("%d", nokmr);

        if (*nokmr >= 101 && *nokmr <= 301) {
            printf("\n\t\tMasukkan nama Anda: ");
            scanf("%s", namaPemesan);
            printf("\n\t\tMasukkan nomor telepon Anda: ");
            scanf("%s", noTelp);
            printf("\n\t\tMasukkan berapa hari Anda akan menginap: ");
            scanf("%d", durasiHari);
            totalHarga = hargaKamar[*nokmr - 101] * (*durasiHari);
            strcpy(namaPemesanan[jumlahPemesanan], namaPemesan);
            strcpy(noTeleponPemesanan[jumlahPemesanan], noTelp);
            nomorKamarPemesanan[jumlahPemesanan] = *nokmr;
            durasiHariPemesanan[jumlahPemesanan] = *durasiHari;
            totalHargaPemesanan[jumlahPemesanan] = totalHarga;
            jumlahPemesanan++;
            printf("\t\tPemesanan berhasil! Terima kasih, %s, atas pesanan Anda.\n", namaPemesan);
            printf("\t\tNomor Telepon: %s\n", noTelp);
            printf("\t\tTotal Harga: %2.f\n", totalHarga);
        } else {
            printf("\t\tNomor kamar tidak valid. Silakan masukkan nomor kamar yang valid.\n");
        }
    } while (*nokmr < 101 || *nokmr > 301);
}

void simpanDataPemesanan() {
   if (jumlahPemesanan < 1)
   {
    printf("\t\t\tJumlah pemesanan belum ada. \n\n");
   }else if (jumlahPemesanan >=1)
   {
    printf("\t\t\tData Pemesan Kamar:\n");
    printf("\t\t\tNo\tNama\t\tNo. Telepon\tNo. Kamar\tDurasi\tTotal Harga\n");
    for (int i = 0; i < jumlahPemesanan; i++) {
        printf("\t\t\t%d\t%s\t\t%s\t\t%d\t\t%d\t%.2f\n", i + 1, namaPemesanan[i], noTeleponPemesanan[i],
               nomorKamarPemesanan[i], durasiHariPemesanan[i], totalHargaPemesanan[i]);
    }
   }
}
void namapemesankpital() {
    printf("\n\n\t\t\t\t\tNama Pemesan (Huruf Kapital):\n");
    for (int i = 0; i < jumlahPemesanan; i++) {
        printf("\t\t\t\t\t%d. ", i + 1);
        for (int j = 0; namaPemesanan[i][j] != '\0'; j++) {
            printf("%c", toupper(namaPemesanan[i][j]));
        }

        printf("\n");
    }
}
void bayar(double *jumlahPembayaran, double *kembalian) {
    do
    {
    printf("\t\tMasukkan jumlah pembayaran: ");
    scanf("%lf", jumlahPembayaran);
    *kembalian = *jumlahPembayaran - totalHarga;
    if (*jumlahPembayaran < totalHarga)
    {
       printf(" \n\n\n\t\tduit anda kurangg!! \n\n\n");
    }
    } while (*kembalian < totalHarga);
    printf("\t\tKembalian: %2.f\n", *kembalian);
}
void struk(double jumlahPembayaran, double kembalian) {
    printf("\n\n\t\t\t\t\tStruk Pembayaran\n");
    printf("\t\t\t\t\t-----------------\n");
    printf("\t\t\t\t\tTotal Harga: %2.f\n", totalHarga);
    printf("\t\t\t\t\tPembayaran : %2.f\n", jumlahPembayaran);
    printf("\t\t\t\t\tKembalian  : %2.f\n", kembalian);
    printf("\t\t\t\t\tTerima kasih atas kunjungan Anda!\n");
}
void menu1RegistrasiAkun(struct User users[], int *jumlah) {
    if (*jumlah < MAX_USERS) {
        printf("\033[1;33m");
        printf("\n\n\n\t\t\t\t=============================================\n");
        printf("\t\t\t\t==== Registrasi Akun Hotel King The Land ====\n");
        printf("\t\t\t\t=============================================\n");
        printf("\t\t\t\tNama                : ");
        scanf("%s", users[*jumlah].nama);
        printf("\t\t\t\tUsername            : ");
        scanf("%s", users[*jumlah].username);

        printf("\t\t\t\tPassword            : ");
        int i = 0;
        char ch;
        while (1) {
            ch = getch();  
            if (ch == '\r' || ch == '\n') {
                users[*jumlah].password[i] = '\0';
                break;
            } else if (ch == 8 && i > 0) { // Handle backspace
                printf("\b \b");
                i--;
            } else {
                users[*jumlah].password[i++] = ch;
                printf("*");
            }
        }
        printf("\n\n\n\n\t\t\t\t\t");
        printf("Loading ");
        (*jumlah)++;

        for(char i=0;i<23;i++){
            for(char j=0;j<23;j++){
            }
            printf("%c", 178);
            Sleep(100);
        }
        printf("\033[1;32m");
        printf("\n\n\t\t\t\t\tSelamat registrasi anda berhasil!\n");
    } else {
        printf("\t\t\t\tMaaf, kapasitas pengguna sudah penuh!\n");
    }
    printf("\033[0m");
}

void menu2LoginAkun(struct User users[], int jumlah, int *status, char *usernameLogin) {
    char username[100];
    char password[100];
    printf("\033[1;33m");
    printf("\n\n\n\t\t\t\t\t======================================");
    printf("\n\t\t\t\t\t=== Login Akun Hotel King The Land ===\n");
    printf("\t\t\t\t\t======================================\n");
    printf("\t\t\t\t\tUsername: ");
    scanf("%s", username);

    printf("\t\t\t\t\tPassword: ");
    int i = 0;
    char ch;
    while (1) {
        ch = getch();
        if (ch == '\r' || ch == '\n') {
            password[i] = '\0';
            break;
        } else if (ch == 8 && i > 0) {
            printf("\b \b");
            i--;
        } else {
            password[i++] = ch;
            printf("*");
        }
    }
        printf("\n\n\n\n\t\t\t\t\t");
        printf("Wait A Minute ");

    for(char i=0;i<26;i++){
            for(char j=0;j<26;j++){
            }
            printf("%c", 178);
            Sleep(100);
    }
    for (int i = 0; i < jumlah; i++) {
        if (strcmp(username, users[i].username) == 0 && strcmp(password, users[i].password) == 0) {
            printf("\033[1;32m");
            printf("\n\n\t\t\t\t\tSelamat datang di Hotel King The Land, %s.\n", username);
            *status = 1;
            strcpy(usernameLogin, username);
            return;
        }
    }
    printf("\033[1;31m");
    printf("\n\n\t\t\t\t\tLogin gagal. Periksa lagi username atau password anda.\n");

}

int main() {
    struct User users[MAX_USERS];
    int jumlah = 0;
    int pilihan;
    int status = 0;
    char usernameLogin[100] = "";
    int nokmr;
    char noTelp[15];
    int durasiHari;

    double jumlahPembayaran;
    double kembalian;

   do
   {
     system("color 87");
        printf("\n\n\n\n\t\t\t\t\t=============================\n");
        printf("\t\t\t\t\t==== HOTEL KING THE LAND ====\n");
        printf("\t\t\t\t\t=============================\n");
        printf("\t\t\t\t\t1. Registrasi Akun\n");
        printf("\t\t\t\t\t2. Login\n");
        printf("\t\t\t\t\t3. Keluar\n");
        printf("\t\t\t\t\t=============================\n");
        int pilihan;
        printf("\n\t\t\t\t\tPilihan Anda: ");
        scanf("%d", &pilihan);
        system("cls");

        switch (pilihan) {
            case 1:
                menu1RegistrasiAkun(users, &jumlah);
                getch();
                system("cls");
                break;
            case 2:
            menu2LoginAkun(users, jumlah, &status, usernameLogin);
            getch();
            system("cls");

            if (status) {

     int submenuPilihan;
     do {
        printf("\n\n\t\t\t\t\t=============================================\n");
        printf("\t\t\t\t\t=====   Menu Setelah Login Hotel King   =====\n");
        printf("\t\t\t\t\t===========================================\n");
        printf("\t\t\t\t\t1. Pesan Kamar\n");
        printf("\t\t\t\t\t2. Data Kamar\n");
        printf("\t\t\t\t\t3. Data Pemesan Kamar\n");
        printf("\t\t\t\t\t4. Struk Hotel\n");
        printf("\t\t\t\t\t5. Pesan dan Kesan untuk Asdos\n");
        printf("\t\t\t\t\t6. nama pemesan kapital\n");
        printf("\t\t\t\t\t7. Nama Kelompok dan Exit\n");
        printf("\t\t\t\t\t=============================================\n");
        printf("\n\n\t\t\t\t\tMasukkan Pilihan Anda: ");
        scanf("%d", &submenuPilihan);
        system("cls");

        switch (submenuPilihan) {
            case 1:
                    pesanKamar(&nokmr, noTelp, &durasiHari);
                    bayar(&jumlahPembayaran, &kembalian);
                    getch();
                    system("pause");
                    system("cls");
                    break;
                    getch();
                case 2:
                    kamarr();
                    getch();
                    system("pause");
                    system("cls");
                    break;
            case 3:
                simpanDataPemesanan();
                system("pause");
                system("cls");
                break;
             case 4:
                    struk(jumlahPembayaran, kembalian);
                    break;
                    getch();
                case 5:
                     printf("\n\t\t\t\t\tYang pertama itu kesan. Kesan saya dan Efraim\n");
                     printf("\t\t\t\t\titu kadang senang sama kakak\n");
                     printf("\t\t\t\t\tkadang juga kesel kak hehe maap\n");
                     printf("\t\t\t\t\tkarena tugasnya terlalu banyak kak huhu\n");
                     printf("\t\t\t\t\tTapi kami tau kami di kasih tugas banyak\n");
                     printf("\t\t\t\t\tsupaya makin bisa dalam codingan\n");
                     printf("\t\t\t\t\tmungkin untuk sebagian orang mulai bisa kak\n");
                     printf("\t\t\t\t\ttapi kalau di saya(fio)tetap susah kak.\n");
                     printf("\t\t\t\t\tTapi kak saya sudah lumayan bisa hehe\n");
                     printf("\t\t\t\t\tmungkin dari 100 persen, 10 persen kak HEHE\n\n");
                     printf("\t\t\t\t\tYang kedua pesan. Pesan saya dan Efraim semoga\n");
                     printf("\t\t\t\t\tkak Christo dan kak Bima\n");
                     printf("\t\t\t\t\tbisa jadi orang yang sukses dan bisa\n");
                     printf("\t\t\t\t\tmembanggakan orang tua AMEN\n");
                     printf("\t\t\t\t\tItu aja sih kak, soalnya kami\n");
                     printf("\t\t\t\t\tsusah berkata-kata HAHAHA\n");
                     printf("\t\t\t\t\tSUKSES TERUS KAK THANK U\n");
                     printf("\t\t\t\t\tSUDAH MEMAKLUMI KAMI YG SEBAGIAN GABISA CODING\n\n");


                     printf("\t\t\t\t\t******************\n");
                     printf("\t\t\t\t\t******************\n");
                     printf("\t\t\t\t\t******************\n");
                     printf("\t\t\t\t\t****             ***            ****\n");
                     printf("\t\t\t\t\t***                **               ****\n");
                     printf("\t\t\t\t\t***                  **                 ****\n");
                     printf("\t\t\t\t\t***                    *                   ***\n");
                     printf("\t\t\t\t\t**                                          **\n");
                     printf("\t\t\t\t\t**                                          **\n");
                     printf("\t\t\t\t\t**                                          **\n");
                     printf("\t\t\t\t\t***                                        ***\n");
                     printf("\t\t\t\t\t***                                      ***\n");
                     printf("\t\t\t\t\t****                                  ****\n");
                     printf("\t\t\t\t\t****                                ****\n");
                     printf("\t\t\t\t\t****                              ****\n");
                     printf("\t\t\t\t\t*****                            *****\n");
                     printf("\t\t\t\t\t*****                        *****\n");
                     printf("\t\t\t\t\t******                    ******\n");
                     printf("\t\t\t\t\t*******                *******\n");
                     printf("\t\t\t\t\t*******             ********\n");
                     printf("\t\t\t\t\t********         *********\n");
                     printf("\t\t\t\t\t*********     ********\n");
                     printf("\t\t\t\t\t*********   **********\n");
                     printf("\t\t\t\t\t******************\n");
                     printf("\t\t\t\t\t******************\n");
                     printf("\t\t\t\t\t******************\n");
                    break;
                    getch();
                    system("pause");
                case 6:
                   namapemesankpital();
                    break;
                case 7:
                    printf("\t\t\t\t\tTerimakasih!!\n\n");
                    printf("\t\t\t\t\tFiona Evelyne Luther (672023195)\n");
                    printf("\t\t\t\t\tEfraim Menda' (672023247");
                    break;
                default:
                    printf("\t\t\t\t\tPilihan tidak valid.\n");
            }

        } while (submenuPilihan != 7);
     }
    break;

            case 3:
                printf("\n\n\n\n\t\t\t\tTerima kasih. Sampai jumpa kembali di Hotel King The Land!\n");
                getch();
                system("cls");
                break;
            default:
                printf("Pilihan tidak valid.\n");
        }
   } while (pilihan !=4);


}
