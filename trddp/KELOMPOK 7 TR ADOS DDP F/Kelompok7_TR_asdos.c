#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
void arroww(int nomorMenu, int nomorpnah)
{
    if (nomorMenu == nomorpnah)
    {
        gotoxy(21, nomorMenu);
        printf("--> ");
    }
    else
    {
        gotoxy(21, nomorMenu);
        printf("   ");
    }
}
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_RESET "\x1b[0m"

void yey()
{
    gotoxy(50, 6);
    printf(ANSI_COLOR_RED "SOLI DEO GLORIA TOTO - 672023314\n" ANSI_COLOR_RESET);
    gotoxy(50, 7);
    printf(ANSI_COLOR_GREEN "ARTHUR PRAMANAVARTIKA ONGKOSAPUTRA - 672023212 \n" ANSI_COLOR_RESET);
    gotoxy(50, 8);
    printf(ANSI_COLOR_BLUE "GOLDA ADEL SELANNO - 672023705 \n" ANSI_COLOR_RESET);

    return 0;
}
void border1()
{
    gotoxy(40, 0);
    printf("===========================================");

    gotoxy(40, 1);
    printf("|");
    gotoxy(82, 1);
    printf("|");
    gotoxy(54, 1);
    printf("CAFETAMUSASWA");
    gotoxy(40, 2);
    printf("|");
    gotoxy(82, 2);
    printf("|");
    gotoxy(41, 2);
    printf("----------------------------------------");
    gotoxy(40, 3);
    printf("|");
    gotoxy(82, 3);
    printf("|");
    gotoxy(40, 4);
    printf("|");
    gotoxy(82, 4);
    printf("|");
    gotoxy(40, 5);
    printf("|");
    gotoxy(82, 5);
    printf("|");
    gotoxy(41, 5);
    printf("----------------------------------------");
    gotoxy(40, 6);
    printf("|");
    gotoxy(82, 6);
    printf("|");
    gotoxy(40, 7);
    printf("|");
    gotoxy(82, 7);
    printf("|");
    gotoxy(40, 8);
    printf("===========================================");
}
void border()
{
    gotoxy(20, 0);
    printf("================================================================================================");

    gotoxy(20, 1);
    printf("|");
    gotoxy(41, 1);
    printf("|");
    gotoxy(115, 1);
    printf("|");
    gotoxy(20, 2);
    printf("|");
    gotoxy(41, 2);
    printf("|");
    gotoxy(115, 2);
    printf("|");
    gotoxy(20, 3);
    printf("|");
    gotoxy(41, 3);
    printf("|");
    gotoxy(115, 3);
    printf("|");
    gotoxy(20, 4);
    printf("|");
    gotoxy(41, 4);
    printf("|");
    gotoxy(115, 4);
    printf("|");
    gotoxy(20, 5);
    printf("|");
    gotoxy(41, 5);
    printf("|");
    gotoxy(115, 5);
    printf("|");
    gotoxy(20, 6);
    printf("|");
    gotoxy(41, 6);
    printf("|");
    gotoxy(115, 6);
    printf("|");
    gotoxy(20, 7);
    printf("|");
    gotoxy(41, 7);
    printf("|");
    gotoxy(115, 7);
    printf("|");
    gotoxy(20, 8);
    printf("|");
    gotoxy(41, 8);
    printf("|");
    gotoxy(115, 8);
    printf("|");
    gotoxy(20, 9);
    printf("|");
    gotoxy(41, 9);
    printf("|");
    gotoxy(115, 9);
    printf("|");
    gotoxy(20, 10);
    printf("|");
    gotoxy(41, 10);
    printf("|");
    gotoxy(115, 10);
    printf("|");
    gotoxy(20, 11);
    printf("|");
    gotoxy(41, 11);
    printf("|");
    gotoxy(115, 11);
    printf("|");
    gotoxy(20, 12);
    printf("|");
    gotoxy(41, 12);
    printf("|");
    gotoxy(115, 12);
    printf("|");
    gotoxy(20, 13);
    printf("|");
    gotoxy(41, 13);
    printf("|");
    gotoxy(115, 13);
    printf("|");
    gotoxy(20, 14);
    printf("|");
    gotoxy(41, 14);
    printf("|");
    gotoxy(115, 14);
    printf("|");
    gotoxy(20, 15);
    printf("|");
    gotoxy(41, 15);
    printf("|");
    gotoxy(115, 15);
    printf("|");
    gotoxy(25, 0);
    printf("SILAHKAN PILIH");
    gotoxy(38, 15);
    printf("");
    gotoxy(98, 15);
    printf("");
    gotoxy(20, 16);
    printf("================================================================================================");
}

struct MenuItem
{
    char nama[255];
    int harga;
    char kategori[20];
};

struct Pesanan
{
    char namaPelanggan[255];
    char namaMenu[255];
    int jumlah;
    int totalHarga;
};

struct Transaksi
{
    char namaPelanggan[255];
    struct Pesanan pesanan[30];
    int jumlahPesanan;
    int totalPembayaran;
    char tanggalJam[30];
};

struct Transaksi transaksi[30];
int jumlahTransaksi = 0;

void getCurrentDateTime(char tanggalJam[])
{
    time_t t;
    struct tm *now;
    time(&t);
    now = localtime(&t);
    strftime(tanggalJam, 30, "%Y-%m-%d %H:%M:%S", now);
}

void byee(int x, int y)
{
    system("COLOR 9");
    gotoxy(x, y);
    printf("  ______  ");
    gotoxy(x, y + 1);
    printf(" /      \\");
    gotoxy(x, y + 2);
    printf("|  O   O |");
    gotoxy(x, y + 3);
    printf("|    /    |");
    gotoxy(x, y + 4);
    printf(" \\______/");
    gotoxy(x, y + 5);
    printf("  Goodbye!");
}

void clearScreen()
{
    system("cls");
}

void thx()
{
    int mulai = 43;
    int selesai = 110;
    int y = 10;
    int x;
    for (x = mulai; x <= selesai; x += 2)
    {
        clearScreen();
        byee(x, y);
        Sleep(100);
    }

    return 0;
}

int main()
{
    system("cls");
    system("color B0");

    border1();
    login();
    return 0;
}

void login()
{
    char username[20];
    char password[20];
    int ulang = 3;
    char user[] = "deoo";
    char pass[] = "ganteng";

    while (ulang > 0)
    {
        gotoxy(42, 3);
        printf("masukkan username: ");
        scanf("%s", username);
        gotoxy(42, 4);
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
        system("Color D");
        if (strcmp(username, user) == 0 && strcmp(password, pass) == 0)
        {
            gotoxy(56, 6);
            printf("Welcome,");
            gotoxy(43, 7);
            printf("kasir baik hati & tamfan %s", user);
            getch();
            system("color F5");
            //    border();
            mennu();
            break;
        }
        else
        {
            ulang--;
            gotoxy(42, 6);
            printf("username atau password salah,");
            gotoxy(42, 7);
            printf("coba lagi nanti %d", ulang);
            getch();
            system("cls");
            border1();
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

void pemesanan(struct MenuItem menu[], int jumlahmenu)
{
    int nomorPesanan;
    int jumlahPesan;
    char tambah;

    int startX = 42;
    int startY = 1;
    int i = 0;
    gotoxy(startX, startY);
    printf("Masukkan nama Anda: ");
    scanf(" %[^\n]s", transaksi[jumlahTransaksi].namaPelanggan);
    do{
        gotoxy(startX, startY + i * 4 + 1);
        printf("Pilih nomor menu yang ingin dipesan: ");
        scanf("%d", &nomorPesanan);
        if (nomorPesanan > 0 && nomorPesanan <= jumlahmenu)
        {
            gotoxy(startX, startY + i * 4 + 2);
            printf("Masukkan jumlah pesanan: ");
            scanf("%d", &jumlahPesan);
            strcpy(transaksi[jumlahTransaksi].pesanan[transaksi[jumlahTransaksi].jumlahPesanan].namaMenu, menu[nomorPesanan - 1].nama);
            transaksi[jumlahTransaksi].pesanan[transaksi[jumlahTransaksi].jumlahPesanan].jumlah = jumlahPesan;
            transaksi[jumlahTransaksi].pesanan[transaksi[jumlahTransaksi].jumlahPesanan].totalHarga = jumlahPesan * menu[nomorPesanan - 1].harga;

            gotoxy(startX, startY + i * 4 + 3);
            printf("%s memesan %d x %s", transaksi[jumlahTransaksi].namaPelanggan, jumlahPesan, menu[nomorPesanan - 1].nama);
            gotoxy(startX, startY + i * 4 + 4);
            printf("Total Harga: Rp %d", transaksi[jumlahTransaksi].pesanan[transaksi[jumlahTransaksi].jumlahPesanan].totalHarga);

            transaksi[jumlahTransaksi].jumlahPesanan++;
        }
        else
        {
            gotoxy(startX, startY + i * 4 + 1);
            printf("Nomor menu tidak valid.\n");
        }
        gotoxy(startX, startY + i * 4 + 5);
        printf("tambah pesanan (y/n)");
        tambah = getch();
        i++;
    } while (tambah == 'y' || tambah == 'Y');
}

void pesanan(struct Transaksi *t)
{
    int startX = 42;
    int startY = 1;
    gotoxy(startX, startY);
    printf("===== Pesanan %s =====\n", t->namaPelanggan);
    for (int i = 0; i < t->jumlahPesanan; i++)
    {
        gotoxy(startX, startY + i * 3 + 1);
        printf("%s memesan %d x %s - %d x Rp %d = Rp %d", t->namaPelanggan, t->pesanan[i].jumlah, t->pesanan[i].namaMenu, t->pesanan[i].jumlah, t->pesanan[i].totalHarga / t->pesanan[i].jumlah, t->pesanan[i].totalHarga);
    }
}

void aturPembayaran()
{
    border();
    if (transaksi[jumlahTransaksi].jumlahPesanan > 0)
    {
        pesanan(&transaksi[jumlahTransaksi]);

        int totalPembayaran = 0;
        for (int i = 0; i < transaksi[jumlahTransaksi].jumlahPesanan; i++)
        {
            totalPembayaran += transaksi[jumlahTransaksi].pesanan[i].totalHarga;
        }

        gotoxy(42, 8);
        printf("Total Pembayaran: Rp %d\n", totalPembayaran);
        gotoxy(42, 9);
        printf("Masukkan jumlah pembayaran: ");

        int pembayaran;
        scanf("%d", &pembayaran);
        if (pembayaran >= totalPembayaran)
        {
            gotoxy(42, 9);
            printf("Terima kasih atas pembayaran Anda! Kembalian: Rp %d\n", pembayaran - totalPembayaran);
            transaksi[jumlahTransaksi].totalPembayaran = totalPembayaran;
            getCurrentDateTime(transaksi[jumlahTransaksi].tanggalJam);
            jumlahTransaksi++;

            FILE *transaksiFile;
            transaksiFile = fopen("transaksi.txt", "a");

            if (transaksiFile != NULL)
            {
                fprintf(transaksiFile, "%s %d %s\n", transaksi[jumlahTransaksi - 1].namaPelanggan, transaksi[jumlahTransaksi - 1].totalPembayaran, transaksi[jumlahTransaksi - 1].tanggalJam);
                fclose(transaksiFile);
            }
            else
            {
                printf("Error membuka file untuk penulisan transaksi.\n");
            }
        }
        else
        {
            gotoxy(42, 10);
            printf("Jumlah pembayaran kurang. Pembayaran tidak diterima.\n");
        }
    }
    else
    {
        gotoxy(42, 1);
        printf("Belum ada pesanan yang dapat dibayar.\n");
    }
}
void history()
{
    int startX = 42;
    int startY = 1;
    int i = 0;
    gotoxy(startX, startY);
    printf("===== History Transaksi =====\n");
    FILE *transaksiFile;
    transaksiFile = fopen("transaksi.txt", "r");

    if (transaksiFile != NULL)
    {
        char namaPelanggan[255];
        int totalPembayaran;
        char tanggalJam[30];

        while (fscanf(transaksiFile, " %[^0-9] %d %[^\n]", namaPelanggan, &totalPembayaran, tanggalJam) == 3)
        {
            gotoxy(startX, startY + i * 2 + 1);
            printf("%s - Total Pembayaran: Rp %d - Tanggal/Jam: %s\n", namaPelanggan, totalPembayaran, tanggalJam);
            i++;
        }

        fclose(transaksiFile);
    }
    else
    {
        printf("Error membuka file untuk membaca history transaksi.\n");
    }
}

void tampilkanMenu(struct MenuItem menu[], int jumlahmenu)
{
    border();
    if (jumlahmenu > 0)
    {
        int startX = 42;
        int startY = 1;

        for (int i = 0; i < jumlahmenu; i++)
        {
            gotoxy(startX, startY + i * 3);
            printf("%d. Nama: %s", i + 1, menu[i].nama);
            gotoxy(startX, startY + i * 3 + 1);
            printf("   Harga: Rp %d", menu[i].harga);
            gotoxy(startX, startY + i * 3 + 2);
            printf("   Kategori: %s", menu[i].kategori);
        }
    }
    else
    {
        gotoxy(42, 1);
        printf("Menu kosong.");
    }
    gotoxy(42, 14);
    system("pause");
}

void mennu()
{
    FILE *fptr;
    struct MenuItem menu[30];
    int jumlahmenu = 0;

    fptr = fopen("menu.txt", "r");
    if (fptr != NULL)
    {
        bacaMenu(fptr, menu, &jumlahmenu);
        fclose(fptr);
    }
    int nomorpnah;
    int keyy;
    keyy = 1;
    nomorpnah = 1;
    system("cls");
    while (keyy != 13)
    {

        system("cls");
        border();
        gotoxy(25, 1);
        arroww(1, nomorpnah);
        gotoxy(25, 1);
        printf("1. Atur Menu\n");
        gotoxy(25, 2);
        arroww(2, nomorpnah);
        gotoxy(25, 2);
        printf("2. Pemesanan\n");
        gotoxy(25, 3);
        arroww(3, nomorpnah);
        gotoxy(25, 3);
        printf("3. pembayaran\n");
        gotoxy(25, 4);
        arroww(4, nomorpnah);
        gotoxy(25, 4);
        printf("4. history\n");
        gotoxy(25, 5);
        arroww(5, nomorpnah);
        gotoxy(25, 5);
        printf("5. keluar \n");
        keyy = getch();
        if (keyy == 80)
        {
            nomorpnah++;
            if (nomorpnah > 5)
                nomorpnah = 1;
        }
        else if (keyy == 72)
        {
            nomorpnah--;
            if (nomorpnah < 1)
                nomorpnah = 5;
        }
    }

    switch (nomorpnah)
    {
    case 1:
        aturmennu();
        system("pause");
        break;
    case 2:

        gotoxy(41, 1);
        pemesanan(menu, jumlahmenu);
        gotoxy(42, 15);
        system("pause");
        mennu();
        break;
    case 3:
        aturPembayaran();
        gotoxy(42, 15);
        system("pause");
        mennu();
        break;
    case 4:
        border();
        history();
        gotoxy(42, 14);
        system("pause");
        mennu();
        break;
    case 5:

        gotoxy(50, 1);
        printf("terimakasih");
        gotoxy(42, 6);
        thx();
        break;
    default:
        break;
    }
}

void simpanMenu(FILE *file, struct MenuItem menu[], int mulai, int slesei)
{
    file = fopen("menu.txt", "w");

    if (file != NULL)
    {
        for (int i = mulai; i < slesei; i++)
        {
            fprintf(file, "%s %d %s\n", menu[i].nama, menu[i].harga, menu[i].kategori);
        }
        fclose(file);
    }
    else
    {
        printf("Error membuka file untuk dimasukan.\n");
    }
}

void bacaMenu(FILE *file, struct MenuItem menu[], int *jumlahmenu)
{
    file = fopen("menu.txt", "r");

    if (file != NULL)
    {
        *jumlahmenu = 0;
        while (fscanf(file, " %[^0-9]%d %[^\n]", menu[*jumlahmenu].nama, &menu[*jumlahmenu].harga, menu[*jumlahmenu].kategori) == 3)
        {
            (*jumlahmenu)++;
        }
        fclose(file);
    }
    else
    {
        printf("Error membuka file untuk membaca.\n");
    }
}

void aturmennu()
{
    FILE *fptr;
    struct MenuItem menu[30];
    int jumlahmenu = 0;

    fptr = fopen("menu.txt", "r");
    if (fptr != NULL)
    {
        bacaMenu(fptr, menu, &jumlahmenu);
        fclose(fptr);
    }

    int nomorPanah = 1;
    int key, tambah, ubahh;

    system("cls");
    while (1)
    {
        system("cls");
        border();
        gotoxy(25, 1);
        arroww(1, nomorPanah);
        gotoxy(25, 1);
        printf("1. Tambah Menu\n");
        gotoxy(25, 2);
        arroww(2, nomorPanah);
        gotoxy(25, 2);
        printf("2. Lihat Menu\n");
        gotoxy(25, 3);
        arroww(3, nomorPanah);
        gotoxy(25, 3);
        printf("3. Hapus Menu \n");
        gotoxy(25, 4);
        arroww(4, nomorPanah);
        gotoxy(25, 4);
        printf("4. owner \n");
        gotoxy(25, 5);
        arroww(5, nomorPanah);
        gotoxy(25, 5);
        printf("5. Keluar Menu\n");

        key = getch();

        if (key == 80)
        {
            nomorPanah++;
            if (nomorPanah > 5)
                nomorPanah = 1;
        }
        else if (key == 72)
        {
            nomorPanah--;
            if (nomorPanah < 1)
                nomorPanah = 5;
        }
        else if (key == 13)
        {
            break;
        }
    }
    switch (nomorPanah)
    {
    case 1:
        border();
        gotoxy(42, 1);
        printf("Mau tambah berapa menu: ");
        scanf("%d", &tambah);
        for (int i = 0; i < tambah; i++)
        {
            gotoxy(42, 2);
            printf("Nama menu: ");
            fflush(stdin);
            fgets(menu[jumlahmenu].nama, sizeof(menu[jumlahmenu].nama), stdin);
            menu[jumlahmenu].nama[strcspn(menu[jumlahmenu].nama, "\n")] = '\0';

            gotoxy(42, 3);
            printf("Harga menu: ");
            scanf("%d", &menu[jumlahmenu].harga);

            gotoxy(42, 4);
            printf("Kategori menu (food/drink): ");
            scanf("%s", menu[jumlahmenu].kategori);

            jumlahmenu++;
            system("cls");
            border();
        }
        simpanMenu(fptr, menu, 0, jumlahmenu);
        gotoxy(42, 10);
        system("pause");
        aturmennu();
        break;
    case 2:
        tampilkanMenu(menu, jumlahmenu);
        aturmennu();
        break;
    case 3:
        border();
        gotoxy(42, 1);
        printf("Pilih nomor menu yang ingin dihapus: ");
        scanf("%d", &ubahh);
        if (ubahh > 0 && ubahh <= jumlahmenu)
        {
            for (int i = ubahh - 1; i < jumlahmenu - 1; i++)
            {
                menu[i] = menu[i + 1];
            }
            jumlahmenu--;
            simpanMenu(fptr, menu, 0, jumlahmenu);
            gotoxy(42, 1);
            printf("Menu berhasil dihapus.");
        }
        else
        {
            gotoxy(42, 1);
            printf("Nomor menu tidak valid.");
        }
        gotoxy(42, 2);
        system("pause");
        aturmennu();
        break;
    case 4:
        border();
        gotoxy(42, 6);
        yey();
        gotoxy(50, 14);
        system("pause");
        aturmennu();
        break;
    case 5:
        border();
        gotoxy(42, 1);
        printf("Terima kasih!");
        gotoxy(42, 2);
        system("pause");
        mennu();
        break;
    default:
        printf("Pilihan tidak valid. Silakan coba lagi.\n");
        break;
    }
}
