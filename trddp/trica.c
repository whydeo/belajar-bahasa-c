#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main() {
    int tinggi;
    char bahan;

    printf("\nMasukkan Tinggi Rumah : ");
    scanf("%d", &tinggi);

    printf("\nMasukkan bahan Rumah : ");
    scanf(" %c", &bahan);

    for(int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= tinggi; j++) {
            Sleep(30);
            printf(" ");
        }
        for (int j = 1; j <= tinggi; j++) {
            Sleep(30);
            printf("%c", bahan);
        }
        printf("\n");
    }

    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= tinggi - i; j++) {
            Sleep(30);
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            Sleep(30);
            printf("%c", bahan);
        }
        for(int k = 1; k <= 4 * tinggi; k++) {
            Sleep(30);
            printf("%c", bahan);
        }
        printf("\n");
    }

    for (int i = 1; i <= tinggi; i++) {
        for(int m = 1; m <= 2 * tinggi; m++) {
            Sleep(30);
            printf("%c", bahan);
        }
        for(int k = 1; k <= 4 * tinggi; k++) {
            Sleep(30);
            printf("%c", bahan);
        }
        printf("\n");
    }

    return 0;
}
