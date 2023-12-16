#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void midleman() {
      char ratus[3];
      char hasil[3];
        for (int i = 0; i < 3; ++i) {
            printf("Masukkan angka ratusan %d: ", i + 1);
            char angka[4];
            scanf("%s", angka);
            ratus[i] = angka[1];
        }
            hasil[0] = ratus[2];
            hasil[1] = ratus[1];
            hasil[2] = ratus[0];

        printf("Digit kedua yang diurutkan: %c%c%c\n", hasil[0], hasil[1], hasil[2]);
}
void array(int banyak){
    int ulang;
    int angka[banyak];
    for (int i = 0; i < banyak; ++i)
    {
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%d", &angka[i]);
    }
    int total = 0;
    for (int i = 0; i < banyak; ++i)
    {
        total += angka[i];
    }
    int rata = (int)total / banyak;
    printf("elemen array inputan:\n");
    for (int i = 0; i < banyak; ++i)
    {
        printf("Index \t        [%d] = %d\n", i, angka[i]);
    }
    printf("-----------------------+\n");
    printf("Total penjumlahan   = %d\n", total);
    printf("Rata-rata\t    = %d\n\n", rata);
    printf("angka ganjil dari angka angka tersebut :     ");
    for (int i = 0; i < banyak; ++i)
    {
        if (angka[i] % 2 != 0)
        {
            printf(" %d ", angka[i]);
        }
    }
        printf("\nangka genap dari angka-angka tersebut   :     ");
        for (int i = 0; i < banyak; ++i){
        if (angka[i] % 2 == 0)
        {
            printf(" %d ", angka[i]);
        }
        }
       do { 
        printf("\nlanjut? (y/n): ");
        ulang = getch();
        printf("%c\n", ulang);
        system("cls");
        if (ulang == 'y' || ulang == 'Y') {   
        
        int index;
        printf("Masukkan indeks yang ingin diubah: ");
        scanf("%d", &index);
        if (index >= 0 && index < banyak) {
            int baru;
            printf("Masukkan nilai baru: ");
            scanf("%d", &baru);
            angka[index] = baru;
            printf("Elemen di index %d telah diubah menjadi %d.\n", index, baru);
            printf("Elemen-elemen array setelah perubahan:\n");
            int totalb = 0;
            for (int i = 0; i < banyak; ++i)
            {
                totalb += angka[i];
            }
            int ratab = (int)totalb / banyak;
            for (int i = 0; i < banyak; ++i) {
            printf("Index \t        [%d] = %d\n", i, angka[i]);
            }
            printf("-----------------------+\n");
            printf("Total penjumlahan   = %d\n", totalb);
            printf("Rata-rata\t    = %d\n\n", ratab);
            printf("angka ganjil dari angka angka tersebut :     ");
            for (int i = 0; i < banyak; ++i)
            {
                if (angka[i] % 2 != 0)
                {
                    printf(" %d ", angka[i]);
                }
            }
            printf("\nangka genap dari angka-angka tersebut   :     ");
            for (int i = 0; i < banyak; ++i)
            {
                if (angka[i] % 2 == 0)
                {
                    printf(" %d ", angka[i]);
                }
        } }

       }else if (ulang != 'y' && ulang != 'Y' && ulang != 'n' && ulang != 'n')
       {
         while (ulang != 'y' && ulang != 'Y' && ulang != 'n' && ulang != 'N') {
                printf("dibilang y/n bukan yg lain!!\n");
                printf("\nlanjut? (y/n): ");
                ulang = getch();
                printf("%c\n", ulang);
                system("cls");
            }
       }
       
       }while (ulang == 'y' || ulang == 'Y');
    
}

void segitiga(){
int tinggi, i, j,ulang;
 do
    {
    printf("Masukkan tinggi segitiga: ");
    scanf("%d", &tinggi);
    for(i = tinggi; i >= 1; i--) {
        for(j = 1; j <= i*2-1; j++) {
            printf("*   ");
        }
        printf("\n");
    }
    for(i = 2; i <= tinggi; i++) {
        for(j = 1; j <= i*2-1; j++) {
            printf("*   ");
        }
        printf("\n");
    }
        printf("\nkembali ke menu utama? (y/n): ");
        ulang = getch();
        printf("%c\n", ulang);
        system("cls");
     if (ulang != 'y' && ulang != 'Y' && ulang != 'n' && ulang != 'N') {
            while (ulang != 'y' && ulang != 'Y' && ulang != 'n' && ulang != 'N') {
                printf("dibilang y/n bukan yg lain!!\n");
                printf("\nkembali ke menu utama? (y/n): ");
                ulang = getch();
                printf("%c\n", ulang);
                system("cls");
            }
        }
    } while (ulang == 'n' || ulang == 'N');

}
int main()
{
    int menu, banyak, ulang;
    do
    {
        printf("=====================================\n");
        printf("\tMenu Program\n");
        printf("=====================================\n");
        printf("1. Midle man\n");
        printf("2. Array\n");
        printf("3. Segitiga\n");
        printf("4. Exit\n");
        printf("=====================================\n");
        printf("Pilihan anda : ");
        scanf("%d", &menu);
        system("cls");
        switch (menu)
        {
        case 1:
          do {
        midleman();  
        printf("\nkembali ke menu utama? (y/n): ");
        ulang = getch();
        printf("%c\n", ulang);
        system("cls");
        if (ulang != 'y' && ulang != 'Y' && ulang != 'n' && ulang != 'N') {
            while (ulang != 'y' && ulang != 'Y' && ulang != 'n' && ulang != 'N') {
                printf("dibilang y/n bukan yg lain!!\n");
                printf("\nkembali ke menu utama? (y/n): ");
                ulang = getch();
                printf("%c\n", ulang);
                system("cls");
            }
        }

    } while (ulang == 'n' || ulang == 'N');
            break;
        case 2:
            printf("Masukkan panjang array:");
            scanf("%d", &banyak);
            array(banyak);
            break;
        case 3: 
            segitiga();
            //segitiganyab gini doang kak, udahh bingunggg mikirin tts matdis (^_^)
            break;
        default:
            printf("pilihan tidak adaa");
        }
    } while (menu != 4);
}