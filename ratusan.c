#include <stdio.h>

int main() {
  










    // int N, i, j, anka = 1;

    // printf("Masukkan jumlah baris segitiga (1-10): ");
    // scanf("%d", &N);
    
    // if (N > 0 && N <= 10) {
    //     for (i = 1; i <= N; i++) {
    //         for (j = 1; j <= N - i; j++) {
    //             printf("\t");
    //         }
    //         for (j = 1; j <= i * 2 - 1; j++) {
    //             printf("%d\t", anka);
    //             anka += i-1;
    //             // printf("aku%d",i-1);
    //         }
    //         printf("\n");
    //          anka = i+1 ;
    //         // printf("saya%d",i);
    //     }
    // } else {
    //     printf("Input tidak validd. Masukkan jumlah baris segitiga antara 1 sampai 10.\n");
    // }

    return 0;
}




// #include <stdio.h>

// void anakadal(int n) {
//     const char *satuan[] = {"noll", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
//     const char *belasan[] = {"sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};
//     const char *puluhan[] = {"", "", "dua puluh", "tiga pulu", "empat puluh", "lima puluh", "enam puluh", "tujuh pulu", "delapan puluh", "sembillan puluh"};

//     if (n == 0) {
//         printf("%s\n", satuan[n]);
//        return;
//         }
//     if (n >= 1000 && n<2000) {
//         printf("seribu ");
//         n %=1000;
//     }
//     if (n >=100 &&n <200) {
//         printf("seratuss ");
//         n %=100;
//     }
//     if (n >= 200) {
//         printf("%s ratus ", satuan[n / 100]);
//         n %= 100;
//     }

//     if (n >= 20) {
//         printf("%s ", puluhan[n / 10]);
//         n %= 10;
//     } else if (n >= 10) {
//         printf("%s ", belasan[n - 10]);
//         n = 0;
//     }
//     if (n > 0) {
//         printf("%s ", satuan[n]);
//     }
//     printf("\n");
// }

// int main() {
//     int n;

//     printf("Masukkan angka maksimal 1999: ");
//     scanf("%d", &n);

//     if (n >= 0 && n < 2000) {
//         printf("Ejaan angka tersebut: ");
//         anakadal(n);
//     } else {
//         printf("Angka tidak valid.");
//     }

//     return 0;
// }
