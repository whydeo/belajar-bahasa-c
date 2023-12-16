


#include <stdio.h>

int main() {
    int rows;

    printf("Masukkan tinggi segitiga: ");
    scanf("%d", &rows);

    // Mencetak segitiga terbalik bagian atas
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i*2-1; j++) {
            printf("*  ");
            if (j < i*2) {
                printf(" "); 
            }
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
         printf("\n");
    }
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i*2-1; j++) {
            printf("*  ");
            if (j < i*2) {
                printf(" "); 
            }
        }
        printf("\n");
    }

    return 0;
}




// #include <stdio.h>

// int main() {
//     int tinggi, i, j;

//     printf("Masukkan tinggi segitiga: ");
//     scanf("%d", &tinggi);
//     for(i = tinggi; i >= 1; i--) {
//         for(j = 1; j <= i*2-1; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     for(i = 2; i <= tinggi; i++) {
//         for(j = 1; j <= i*2-1; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }


    // #include <stdio.h>
// #include <conio.h>

// int main() {
//     int ulang;
//     do {
//         int banyak;
//         printf("Masukkan jumlah elemen array: ");
//         scanf("%d", &banyak);
//         int angka[banyak];
//         for (int i = 0; i < banyak; ++i) {
//             printf("Masukkan elemen ke-%d: ", i + 1);
//             scanf("%d", &angka[i]);
//         }
        
//         int totalb = 0;
//         for (int i = 0; i < banyak; ++i) {
//             totalb += angka[i];
//         }
//         int ratab = (int)totalb / banyak;

//         printf("Elemen array inputan:\n");
//         for (int i = 0; i < banyak; ++i) {
//             printf("Index \t[%d] = %d\n", i, angka[i]);
//         }
//         printf("-----------------------+\n");
//         printf("Total penjumlahan   = %d\n", totalb);
//         printf("Rata-rata\t= %d\n\n", ratab);
//         printf("Angka ganjil dari angka tersebut : ");
//         for (int i = 0; i < banyak; ++i) {
//             if (angka[i] % 2 != 0) {
//                 printf("%d ", angka[i]);
//             }
//         }
//         printf("\nAngka genap dari angka tersebut : ");
//         for (int i = 0; i < banyak; ++i) {
//             if (angka[i] % 2 == 0) {
//                 printf("%d ", angka[i]);
//             }
//         }

//         printf("\nLanjut? (y/n): ");
//         ulang = getch();
//         printf("%c\n", ulang);
//         system("cls");

//         if (ulang == 'y' || ulang == 'Y') {
//             int index;
//             printf("Masukkan indeks yang ingin diubah: ");
//             scanf("%d", &index);
//             if (index >= 0 && index < banyak) {
//                 int baru;
//                 printf("Masukkan nilai baru: ");
//                 scanf("%d", &baru);
//                 angka[index] = baru;
//                 printf("Elemen di index %d telah diubah menjadi %d.\n", index, baru);
//             } else {
//                 printf("Indeks tidak valid.\n");
//             }
//         }

//     } while (ulang == 'y' || ulang == 'Y');

//     return 0;
// }


// #include <stdio.h>
// #include <conio.h>

// int main() {
//     char ulang;
//     char hasil[3]; 

//     do {
//         printf("\nkembali ke menu utama? (y/n): ");
//         ulang = getch();
//         printf("%c\n", ulang);
//         system("cls");
//         if (ulang != 'y' && ulang != 'Y' && ulang != 'n' && ulang != 'N') {
//             while (ulang != 'y' && ulang != 'Y' && ulang != 'n' && ulang != 'N') {
//                 printf("dibilang y/n bukan yg lain!!\n");
//                 printf("\nkembali ke menu utama? (y/n): ");
//                 ulang = getch();
//                 printf("%c\n", ulang);
//                 system("cls");
//             }
//         }

//     } while (ulang == 'n' || ulang == 'N');

//     return 0;
// }
