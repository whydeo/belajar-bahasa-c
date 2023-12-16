#include <stdio.h>

int main() {
    int menu;
    printf("Menu:\n");
    printf("1. Something\n");
    printf("2. Print odd/even for all positions\n");
    printf("Enter menu choice: ");
    scanf("%d", &menu);

    if (menu == 2) {
        int tinggi;
        printf("Masukkan tinggi segitiga: ");
        scanf("%d", &tinggi);

        int i, j, k;
        int angka = 1;

        for (i = 1; i <= tinggi; i++) {
            for (j = 1; j <= tinggi - i; j++) {
                printf("        ");
            }

            for (k = 1; k <= i * 2 - 1; k++) {
                printf("%8d", angka);
                angka += 2; 
            }

            printf("\n");
        }

        angka = tinggi * 2 - 3; 

        // Lower part of the triangle
        for (i = tinggi - 1; i >= 1; i--) {
            for (j = 1; j <= tinggi - i; j++) {
                printf("        ");
            }

            for (k = 1; k <= i * 2 - 1; k++) {
                printf("%8d", angka);
                angka -= 2;
            }

            printf("\n");
        }
    }

}
