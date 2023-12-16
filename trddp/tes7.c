#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

#define MAX_BOOKINGS 100
#define MAX_ROOM_TYPES 4

int p;
char cust[MAX_BOOKINGS][300];
char kamar[MAX_BOOKINGS][50];
char alamat[MAX_BOOKINGS][100];
char menginap[MAX_BOOKINGS][100];
int no_kamar[MAX_BOOKINGS];
int jml_psn[MAX_BOOKINGS], total[MAX_BOOKINGS];
int no_tlp[MAX_BOOKINGS];
char pmb[20];
char pesan;
int i = 0;
int jumlahPemesanan = 0;
char typee[MAX_ROOM_TYPES][50] = {"VVIP", "VIP", "DoubleBed", "SingleBed"};
int harga[MAX_ROOM_TYPES] = {5000000, 3000000, 1500000, 1000000};

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void login()
{
    char username[20];
    char password[20];
    int ulang = 3;
    char user[] = "admin";
    char pass[] = "admin123";

    while (ulang > 0)
    {
        gotoxy(55, 2);
        printf("============== Login Program ==============\n");
        gotoxy(55, 3);
        printf("masukkan username: ");
        scanf("%s", username);
        gotoxy(55, 4);
        printf("masukkan password: ");
        int i = 0;
        while (1)
        {
            password[i] = getch();
            if (password[i] == '\r')
            {
                password[i] = '\0';
                break;
            }
            else if (password[i] == 8 && i > 0)
            {
                i--;
                printf("\b \b");
            }
            else
            {
                printf("*");
                i++;
            }
        }
        if (strcmp(username, user) == 0 && strcmp(password, pass) == 0)
        {
            gotoxy(56, 6);
            printf("\n");
            gotoxy(56, 6);
            printf("Welcome!!!");
            getch();
            break;
        }
        else
        {
            ulang--;
            gotoxy(42, 6);
            printf("maaf username atau password yang anda masukkan salah,");
            gotoxy(42, 7);
            printf("silahkan coba lagi nanti %d", ulang);
            getch();
            system("cls");
            awal();
        }
    }

    if (ulang == 0)
    {
        gotoxy(42, 6);
        printf("terlalu banyak percobaan!!");
        gotoxy(42, 7);
        printf("coba lagi nanti");
    }
}

void awal()
{
    system("cls");
    gotoxy(51, 0);
    printf("\t==========================================\n");
    gotoxy(51, 1);
    printf("\t|     -----------------------------      |\n");
    gotoxy(51, 2);
    printf("\t|            SELAMAT DATANG              |\n");
    gotoxy(51, 3);
    printf("\t|                  DI                    |\n");
    gotoxy(51, 4);
    printf("\t|           HOTEL SUKA SUKA!!            |\n");
    gotoxy(51, 5);
    printf("\t|     ------------------------------     |\n");
    gotoxy(51, 6);
    printf("\t==========================================\n");

    time_t t;
    time(&t);
    gotoxy(51, 7);
    printf("\n date : %s", ctime(&t));
    gotoxy(51, 8);
    printf(" \n Press any key to continue:");

    getch();
    system("cls");
}

void daftarkamar()
{
    system("cls");
    gotoxy(38, 0);
    printf("==============================================================================");
    gotoxy(38, 1);
    printf("               ---------------------------------------------                  ");
    gotoxy(38, 2);
    printf("                                DAFTAR KAMAR                                  ");
    gotoxy(38, 3);
    printf("               ---------------------------------------------                  ");
    gotoxy(38, 4);
    printf("==============================================================================");

    for (int j = 0; j < MAX_ROOM_TYPES; j++)
    {
        gotoxy(38, 5 + j);
        printf("| %d. %s................................................. Rp. %d/malam|", j + 1, typee[j], harga[j]);
    }

    gotoxy(38, 5 + MAX_ROOM_TYPES);
    printf("==============================================================================");

    int y;
    gotoxy(40, 10);
    printf("\napakah anda ingin memesan kamar?? y/n : ");
    scanf(" %c", &pesan);
    if (pesan == 'y' || pesan == 'Y')
    {
        printf("Terima kasih sekarang lanjut menu pemesanan!");
        getch();
        system("cls");
        menuutama();
    }
    else if (pesan == 'n' || pesan == 'N')
    {
        printf("sampaii jumpaaa!!!......");
        getch();
        system("cls");
        main();
    }
    else
    {
        exit(0);
    }
}
void struk(int idx) {
    printf("\n========= Struk Pembayaran =========\n");
    printf("Nama Customer  : %s\n", cust[idx]);
    printf("Nomor Kamar    : %d\n", no_kamar[idx]);
    printf("Jenis Kamar    : %s\n", kamar[idx]);
    printf("Jumlah Pesanan : %d\n", jml_psn[idx]);
    printf("Lama Menginap  : %s\n", menginap[idx]);
    printf("Total Biaya    : Rp. %d\n", total[idx]);
}

void pembayaran(int idx) {
    system("cls");
    printf("========= Pembayaran =========\n");
    printf("Nama Customer  : %s\n", cust[idx]);
    printf("Nomor Kamar    : %d\n", no_kamar[idx]);
    printf("Jenis Kamar    : %s\n", kamar[idx]);
    printf("Jumlah Pesanan : %d\n", jml_psn[idx]);
    printf("Lama Menginap  : %s\n", menginap[idx]);
    printf("Total Biaya    : Rp. %d\n", total[idx]);

    int bayar;
    printf("\nMasukkan jumlah pembayaran: Rp. ");
    scanf("%d", &bayar);

    if (bayar >= total[idx]) {
        printf("Pembayaran berhasil! Terima kasih telah melakukan pembayaran.\n");
        printReceipt(idx);
    } else {
        printf("Pembayaran tidak mencukupi. Silahkan lakukan pembayaran ulang.\n");
        pembayaran(idx);
    }
}

void pemesanan()
{
    time_t t;
    time(&t);

    system("cls");
    gotoxy(50, 2);
    printf("================ Pemesanan kamar ================");

    printf("\nnama customer  : ");
    scanf("%s", cust[i]);
    printf("Alamat         : ");
    scanf("%s", alamat[i]);
    printf("no Telephon    : ");
    scanf("%d", &no_tlp[i]);
    printf("Nomor kamar    : ");
    scanf("%d", &no_kamar[i]);
    printf("Jenis Kamar    : ");
    scanf("%s", kamar[i]);
    printf("Jumlah Pesanan : ");
    scanf("%d", &jml_psn[i]);
    printf("Lama menginap  : ");
    scanf("%s", menginap[i]);

    printf("\nTanggal pesan  : %s", ctime(&t));
    total[i] = jml_psn[i] * harga[no_kamar[i] - 1];

    printf("\nTotal Biaya    : Rp. %d", total[i]);

    printf("\nkamar sudah dipesan!!!!");

    printf("\napakah ingin melakukan pemesanan lagi?? y/n: ");
    scanf(" %c", &pesan);

    jumlahPemesanan++;
    if (pesan == 'y' || pesan == 'Y')
    {
        i++;
        system("cls");
        pemesanan();
        getch();
    }
    else
    {
        printf("Terima kasih sudah memesan!!!");

        // Payment process
        pembayaran(i);

        getch();
        system("cls");
        menuutama();
    }
}
void pembayaran(int idx)
{
    system("cls");
    printf("========= Pembayaran =========\n");
    printf("Nama Customer  : %s\n", cust[idx]);
    printf("Nomor Kamar    : %d\n", no_kamar[idx]);
    printf("Jenis Kamar    : %s\n", kamar[idx]);
    printf("Jumlah Pesanan : %d\n", jml_psn[idx]);
    printf("Lama Menginap  : %s\n", menginap[idx]);
    printf("Total Biaya    : Rp. %d\n", total[idx]);

    int bayar;
    printf("\nMasukkan jumlah pembayaran: Rp. ");
    scanf("%d", &bayar);

    if (bayar >= total[idx])
    {
        printf("Pembayaran berhasil! Terima kasih telah melakukan pembayaran.\n");

        // Print receipt
        printf("\n========= Struk Pembayaran =========\n");
        printf("Nama Customer  : %s\n", cust[idx]);
        printf("Nomor Kamar    : %d\n", no_kamar[idx]);
        printf("Jenis Kamar    : %s\n", kamar[idx]);
        printf("Jumlah Pesanan : %d\n", jml_psn[idx]);
        printf("Lama Menginap  : %s\n", menginap[idx]);
        printf("Total Biaya    : Rp. %d\n", total[idx]);
        printf("Jumlah Bayar   : Rp. %d\n", bayar);
        printf("Kembalian      : Rp. %d\n", bayar - total[idx]);
    }
    else
    {
        printf("Pembayaran tidak mencukupi. Silahkan lakukan pembayaran ulang.\n");
        pembayaran(idx);
    }
}

void datapemesan()
{
    system("cls");
    gotoxy(55, 0);
    printf("============== Data Pemesan ==============\n");
    if (jumlahPemesanan < 1)
    {
        printf("Data tidak ditemukan!\n");
    }
    else
    {
        printf("\tNo\tNama\tAlamat\tNo. Telepon\tNo. Kamar\tJenis Kamar\tJumlah Pemesanan\tLama Inap\n");
        for (int j = 0; j < jumlahPemesanan; j++)
        {
            printf("\t%d\t%s\t%s\t%d\t\t  %d\t\t  %s\t\t%d\t\t\t%s\n", j + 1, cust[j], alamat[j], no_tlp[j], no_kamar[j], kamar[j], jml_psn[j], menginap[j]);
        }
    }

    gotoxy(55, 1);
}

void pesankesan()
{
    system("cls");
    printf("DEAR ASDOS DDP I");
    printf("\n");
    printf("makasih sudah mau menemani dan mengajari ilmu ddp selama 1 semester ini ;) ");
    printf("untuk kesannya yaa cukup seru sih belajar sama kakak asdos ddp ini ");
    printf("cuman yaa tugasnya ya begitulah sampai bisa bikin nangis gara gara tugas yang kalian berikan hehehe (curhat dikit)");
    printf("untuk pesannya next klo jadi asdos lagi kalau bisa jangan sering sering ngasih tugas kak, kasian yang kebetulan tugasnya lagi numpuk");
    printf("jadi bingung mau ngerjain mana dulu soalnya deadline pada mepet,");
    printf("keknya itu aja sih kak ga banyak banyak hehehe");
    printf("makasih untuk semuanya.....");
    getch();
}

void keluar()
{
    system("cls");
    printf("ini lah kita kelompok 18 yang membuat program hotel sederhana karena klo kreatif ga mampu..");
    printf("Titus Ismaya Wati (672023248) & Ananta Widya Dwi Pranata (672023327)");
    Sleep(100);
}

void menuutama()
{
    int k = 0, p = 1;

    while (k != 13)
    {
        gotoxy(55, 0);
        printf("=====================================\n");
        gotoxy(55, 1);
        printf("|             MENU HOTEL            |\n");
        gotoxy(55, 2);
        printf("=====================================\n");
        gotoxy(55, 3);
        printf("|   1. Daftar Kamar                 |\n");
        gotoxy(55, 4);
        printf("|   2. Pemesanan                    |\n");
        gotoxy(55, 5);
        printf("|   3. Data Pemesan                 |\n");
        gotoxy(55, 6);
        printf("|   4. Riwayat Pemesanan            |\n");
        gotoxy(55, 7);
        printf("|   5. Struck                       |\n");
        gotoxy(55, 8);
        printf("|   6. Pesan dan Kesan              |\n");
        gotoxy(55, 9);
        printf("|   7. Exit                         |\n");
        gotoxy(55, 10);
        printf("=====================================\n");

        gotoxy(55, p + 2);
        printf("----> ");

        k = getch();
        if (k == 80)
        {
            p++;
            if (p > 7)
                p = 1;
        }
        else if (k == 72)
        {
            p--;
            if (p < 1)
                p = 7;
        }
    }
    switch (p)
    {
    case 1:
        daftarkamar();
        getch();
        break;
    case 2:
        pemesanan();
        system("pause");
        break;
    case 3:
        datapemesan();
        gotoxy(40, 15);
        system("pause");
        break;
    case 4:
        
        break;
    case 5:
        struk();
        break;
    case 6:
        pesankesan();
        system("pause");
        break;
    case 7:
        break;
    }
}

int main()
{
    system("cls");
    awal();
    system("cls");
    login();
    system("cls");
    menuutama();
    system("cls");
    datapemesan();
    system("cls");
    keluar();
}
