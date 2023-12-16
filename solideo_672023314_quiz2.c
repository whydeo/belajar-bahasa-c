#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void segitiga(int angka) {
  int i, j, k, l = 2;
    for (i = 1; i <= angka; i++) {
        for (j = 1; j <= angka - i; j++) {
            printf("        ");
        }
        for (k = 1; k <= i * 2 - 1; k++) {
            printf("%8d", l);
            l++;
        }

        printf("\n");
    }
}
int fpb(int j, int k) {
    int l;
    while (k != 0) {
        l = j % k;
        j = k;
        k = l;
    }
    return j;
}

int main() {
    int angka,angka2, angka3, menu;
    char ulang;

    do {
        system("cls");
        printf("========== LIST MENU ==========\n");
        printf("1. FPB\n");
        printf("2. SEGITIGA ANGKA\n");
        printf("3. KELUAR\n");
        printf("=================================\n");
        printf("masukan menu: ");
        scanf("%d", &menu);
        system("cls");

        switch (menu) {
            case 1:
                do {
                    printf("masukan angka 1: ");
                    scanf("%d", &angka2);
                    printf("masukan angka 2: ");
                    scanf("%d", &angka3);
                    int fpbs = fpb(angka2, angka3);
                    printf("bilangan pertama adalah: %d\n", angka2);
                    printf("bilangan kedua adalah: %d\n", angka3);
                    printf("FPB dari %d dan %d adalah %d\n", angka2, angka3, fpbs);
                    printf("\nApakah Anda ingin melanjutkan? (y/n): ");
                    ulang = getch();
                    printf("%c\n", ulang);
                    // scanf("%c",&ulang);
                    system("cls");
                    if (ulang != 'y' && ulang != 'Y' && ulang != 'n' && ulang != 'N') {
                        while (ulang != 'y' && ulang != 'Y' && ulang != 'n' && ulang != 'N')
                        {
                        system("cls");
                        printf("dibilang y/n bukan yg lain!!\n\n");
                        printf("Press any key to continue");
                        getch();
                        system("cls");
                        printf("Apakah Anda ingin melanjutkan? (y/n):");
                        ulang = getch();
                        printf("%c\n", ulang);
                        system("cls");
                        }
                        }
                        
                    
                } while (ulang == 'y' || ulang == 'Y');
                break;
            case 2:
                printf("masukan angka: ");
                scanf("%d", &angka);
                segitiga(angka);
                printf("press any key to kontinued....");
                getch();
                break;
            case 3:
                break;
            default:
                break;
        }
    } while (menu != 3);

    return 0;
}