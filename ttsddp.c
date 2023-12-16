#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void angkasial(int a, int b)
{
    // int a,b;
    // printf("Angka a %d",a);
    // printf("Angka b %d",b);
    int X = 0;
    for (int i = a; i <= b; ++i)
    {
        if (i % 10 == 5 || i % 10 == 6 || i == 15 || i == 6)
        {
            X++;
        }
    }
    printf("Jumlah kamar yang harus dihindari: %d\n", X);
}
int pangkatdua(int n)
{
    if (n == 0)
    {
        return 0;
    }
    while (n % 2 == 0)
    {
        n /= 2;
    }
    return n == 1;
}
void statistika(int c)
{
    // printf("tes:%d",c);
    int kecil, gede, d;
    printf("masukan angka sebanyak %d :", c);
    kecil = gede = c;
    for (int i = 0; i < c; i++)
    {
        scanf("%d", &d);
        if (d < kecil)
        {
            kecil = d;
        }
        if (d > gede)
        {
            gede = d;
        }
    }
    printf("angka terkecil :%d \n", kecil);
    printf("angka terbesar :%d \n", gede);
}
void anakadal(int angka)
{
    const char *satuan[] = {"noll", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
    const char *belasan[] = {"sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};
    const char *puluhan[] = {"", "", "dua puluh", "tigapuluh", "empat puluh", "lima puluh", "enam puluh", "tujuh pulu", "delapan puluh", "sembillan puluh"};
    if (angka == 0)
    {
        printf("%s\angka", satuan[angka]);
        return;
    }
    if (angka >= 1000 && angka < 2000)
    {
        printf("seribu ");
        angka %= 1000;
    }
    if (angka >= 100 && angka < 200)
    {
        printf("seratuss ");
        angka %= 100;
    }
    if (angka >= 200)
    {
        printf("%s ratus ", satuan[angka / 100]);
        angka %= 100;
    }
    if (angka >= 20)
    {
        printf("%s ", puluhan[angka / 10]);
        angka %= 10;
    }
    else if (angka >= 10)
    {
        printf("%s ", belasan[angka - 10]);
        angka = 0;
    }
    if (angka > 0)
    {
        printf("%s ", satuan[angka]);
    }
    printf("\n");
}
void segitiga(int h)
{
    int i, j, anka = 1;
    if (h > 0 && h <= 10)
    {
        for (i = 1; i <= h; i++)
        {
            for (j = 1; j <= h - i; j++)
            {
                printf("\t");
            }
            for (j = 1; j <= i * 2 - 1; j++)
            {
                printf("%d\t", anka);
                anka += i - 1;
                // printf("aku%d",i-1);
            }
            printf("\n");
            anka = i + 1;
            // printf("saya%d",i);
        }
    }
    else
    {
        printf("Input tidak validd. Masukkan jumlah baris segitiga antara 1 sampai 10.\n");
    }
}
int main()
{
    int menu, a, b, n, c, d, angka, h;
    char ulang;
    const char nama[] = {"SOLI DEO GLORIA TOTO"};
    const int nim = 672023314;
    do
    {
        printf("TTS ASDOS DDP F %s - %d ", nama, nim);
        printf("\n\npilih menu");
        printf("\n1. Angka sial");
        printf("\n2. pangkat dua");
        printf("\n3. statistika");
        printf("\n4. anak kadal belajar hitung");
        printf("\n5. segitiga aritmetika");
        printf("\n6. exit");
        printf("\nPilihan anda : ");
        scanf("%d", &menu);
        system("cls");
        switch (menu)
        {
        case 1:
            do
            {
                printf("Masukkan bilangan pertama : ");
                scanf("%d", &a);
                printf("Masukkan bilangan kedua : ");
                scanf("%d", &b);
                angkasial(a, b);
                printf("\nulang y/n ?? plis pencet y/n aja ya kak (^_^)");
                ulang = getch();
                system("cls");
            } while (ulang == 'y' || ulang == 'Y');
            break;
        case 2:
            do
            {
                printf("masukan anggka :");
                scanf("%d", &n);
                if (pangkatdua(n))
                {
                    printf("ya\n");
                }
                else
                {
                    printf("tidak\n");
                }
                printf("\nulang y/n ?? plis pencet y/n aja ya kak (^_^)");
                ulang = getch();
                system("cls");
            } while (ulang == 'y' || ulang == 'Y');
            break;
        case 3:
            do
            {
                printf("masukan satu angka:");
                scanf("%d", &c);
                statistika(c);
                printf("\nulang y/n ?? plis pencet y/n aja ya kak (^_^)");
                ulang = getch();
                system("cls");
            } while (ulang == 'y' || ulang == 'Y');

            break;
        case 4:
            do
            {
                printf("Masukkan angka maksimal 1999: ");
                scanf("%d", &angka);
                if (angka >= 0 && angka < 2000)
                {
                    anakadal(angka);
                }
                else
                {
                    printf("Angka tidak valid.");
                }
                printf("\nulang y/n ?? plis pencet y/n aja ya kak (^_^)");
                ulang = getch();
                system("cls");
            } while (ulang == 'y' || ulang == 'Y');

            break;
        case 5:
            do
            {
                printf("Masukkan jumlah baris segitiga 1-10 aja: ");
                scanf("%d", &h);
                segitiga(h);
                printf("\nulang y/n ?? plis pencet y/n aja ya kak (^_^)");
                ulang = getch();
                system("cls");
            } while (ulang == 'y' || ulang == 'Y');
            break;
        case 6:
            printf("program selesai kak!!");
            return 0;
            break;
        default:
            printf("\a gadaa pilihan");
            break;
        }
    } while (menu != 6);
    return 0;
}