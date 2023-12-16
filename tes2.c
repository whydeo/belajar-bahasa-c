#include <stdio.h>
#include <stdlib.h>

int main(){
    const char nama[]={"SOLI DEO GLORIA TOTO"};
   const int nim=672023314;
   printf("%s",nama);
   printf("%d",nim);
}
// #include <stdio.h>

// int main() {
//     int i, j, rows;

//     printf("Masukkan angka yang Anda kehendaki: ");
//     scanf("%d", &rows);
    
//     for(i = rows; i >= 1; i--) {
//         for(j = 1; j <= i*2-1; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
       
//     for (int i = 1; i <= rows; i++) {
//     for (int j = 1; j <= i*2-1; j++) {
//       printf("* ");
//     }
//     printf("\n");
//   }

//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int A, B, X = 0;
//     printf("Masukkan batas awal dan akhir nomor kamar (pisahkan dengan spasi): ");
//     scanf("%d %d", &A, &B);
//     for (int i = A; i <= B; ++i) {
//         if (i % 10 == 5 || i % 10 == 6 || i == 15 || i == 6) {
//             X++;
//         }
//     }
//     printf("Jumlah kamar yang harus dihindari: %d\n", X);

//     return 0;
// }

// #include <stdio.h>

// void spellNumber(int n) {
//     char *angka[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
//     char *belasan[] = {"sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};

//     if (n >= 0 && n < 10) {
//         printf("%s", angka[n]);
//     } else if (n >= 10 && n < 20) {
//         printf("%s", belasan[n - 10]);
//     } else if (n >= 20 && n < 100) {
//         printf("%s puluh", angka[n / 10]);
//         if (n % 10 != 0) {
//             printf(" %s", angka[n % 10]);
//         }
//     } else if (n >= 100 && n < 1000) {
//         printf("%s ratus", angka[n / 100]);
//         if (n % 100 >= 10) {
//             printf(" %s puluh", angka[(n % 100) / 10]);
//         }
//         if (n % 10 != 0) {
//             if (n % 100 >= 10 && n % 100 < 20) {
//                 printf(" %s", belasan[n % 10]);
//             } else {
//                 printf(" %s", angka[n % 10]);
//             }
//         }
//     } else if (n == 1000) {
//         printf("seribu");
//     } else if (n >= 1000 && n < 2000) {
//         printf("seribu");
//         if (n % 1000 != 0) {
//             printf(" %s", angka[(n % 1000) / 100]);
//             if ((n % 1000) % 100 >= 10) {
//                 printf(" %s puluh", angka[((n % 1000) % 100) / 10]);
//             }
//             if ((n % 1000) % 10 != 0) {
//                 if ((n % 1000) % 100 >= 10 && (n % 1000) % 100 < 20) {
//                     printf(" %s", belasan[(n % 1000) % 10]);
//                 } else {
//                     printf(" %s", angka[(n % 1000) % 10]);
//                 }
//             }
//         }
//     } else {
//         printf("Angka diluar batas.");
//     }
// }

// int main() {
//     int n;
//     printf("Masukkan angka (0-2000): ");
//     scanf("%d", &n);

//     if (n >= 0 && n <= 2000) {
//         spellNumber(n);
//     } else {
//         printf("Angka diluar batas.");
//     }

//     printf("\n");

//     return 0;
// }












// #include <stdio.h>

// int main() {
//     int banyak;

//     printf("Masukkan panjang array:");
//     scanf("%d", &banyak);
//     int angka[banyak];
//     for (int i = 0; i < banyak; ++i) {
//         printf("Masukkan elemen ke-%d: ", i + 1);
//         scanf("%d", &angka[i]);
//     }
    
//     printf("Elemen-elemen array yang dimasukkan:\n");
//     for (int i = 0; i < banyak; ++i) {
//         printf("Index \t        [%d] = %d\n", i, angka[i]);
//     }

//     int indeks;
//     printf("Masukkan indeks yang ingin diubah: ");
//     scanf("%d", &indeks);

//     if (indeks >= 0 && indeks < banyak) {
//         int nilaiBaru;
//         printf("Masukkan nilai baru: ");
//         scanf("%d", &nilaiBaru);

//         angka[indeks] = nilaiBaru;

//         printf("Elemen di indeks %d telah diubah menjadi %d.\n", indeks, nilaiBaru);

//         printf("Elemen-elemen array setelah perubahan:\n");
//         for (int i = 0; i < banyak; ++i) {
//             printf("Index \t        [%d] = %d\n", i, angka[i]);
//         }
//     } else {
//         printf("Indeks tidak valid.\n");
//     }

//     return 0;
// }
