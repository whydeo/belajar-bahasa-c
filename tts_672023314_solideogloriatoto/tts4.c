#include <stdio.h>

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
int main(){
    int angka;
 printf("Masukkan angka maksimal seribu sembilan ratus sembilan puluh smbilan: ");
                scanf("%d", &angka);
                if (angka >= 0 && angka < 2000)
                {
                    anakadal(angka);
                }
                else
                {
                    printf("Angka tidak valid.");
                }
    return 0;
}