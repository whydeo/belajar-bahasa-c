// // bagian bulan
// #include <stdio.h>

// int main() {
//     int bulan, tahun;

    
//     printf("Masukkan bulan (1..12): ");
//     scanf("%d", &bulan);

//     printf("Masukkan Tahunnya: ");
//     scanf("%d", &tahun);

  
//     if (bulan < 1 || bulan > 12) {
//         printf("Bulan yang dimasukkan tidak valid.\n");
//         return 1;
//     }

//     int jumlahHari;

    
//     if (bulan == 1 || bulan == 3 || bulan == 5 || bulan == 7 || bulan == 8 || bulan == 10 || bulan == 12) {
//         jumlahHari = 31;
//     }
    
//     else if (bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11) {
//         jumlahHari = 30;
//     }
   
//     else {
      
//         if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
//             jumlahHari = 29; 
//         } else {
//             jumlahHari = 28; 
//         }
//     }

  
//     printf("Jumlah hari di bulan %d, pada tahun %d adalah %d hari\n", bulan, tahun, jumlahHari);
    

//     return 0;
    
// }



//bagian prima
#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int number;
    printf("Masukkan suatu bilangan: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d adalah bilangan prima.\n", number);
    } else {
        printf("%d bukan bilangan prima.\n", number);
    }

    return 0;
}
 /// bagian rata

// #include <stdio.h>

// int main() {
//     int jumlahMurid;
//     printf("Masukkan Jumlah Murid: ");
//     scanf("%d", &jumlahMurid);
//     int totalNilai = 0;
//     for (int i = 1; i <= jumlahMurid; i++) {
//         int nilai;
//         printf("Nilai tes Murid ke-%d = ", i);
//         scanf("%d", &nilai);

//         totalNilai += nilai;
//     }

//     float rataRata = (float)totalNilai / jumlahMurid;

//   
//     printf("Nilai rata-rata = %.4f\n", rataRata);
//    

//     return 0;
// }



// #include <stdio.h>

// int main(){
//     int angka, i, j, k, l;

//     printf("Masukkan angka: ");
//     scanf("%d", &angka);

//     // Baris bilangan 1
//     printf("Baris bilangan 1\n");
//     int bilangan1 = 2;
//     for (i = 1; i <= angka; i++) {
//         printf("%d ", bilangan1);
//         bilangan1 = bilangan1 * 2 - 1;
//     }
//     printf("....\n");

//     // Baris bilangan 2
//     printf("Baris bilangan 2\n");
//     int bilangan2 = 2;
//     for (k = 1; k <= angka; ++k) {
//         printf("%d, ", bilangan2);
//         int isPrime = 0;
//         while (!isPrime) {
//             isPrime = 1;
//             bilangan2++;
//             for (int j = 2; j <= bilangan2 / 2; ++j) {
//                 if (bilangan2 % j == 0) {
//                     isPrime = 0;
//                     break;
//                 }
//             }
//         }
//     }
//     printf("....\n");

//     // Baris bilangan 3
//     printf("Baris bilangan 3\n");
//     int bilangan3_1 = 3;
//     int bilangan3_2 = 2;
//     for (j = 1; j <= angka; ++j) {
//        printf("%d",bilangan3_1);
//        bilangan3_1=bilangan3_1+2;
//        printf("%d",bilangan3_2);
//        bilangan3_2=bilangan3_1+4;
//     }
//     printf("...\n");

//     // Baris bilangan 4
//     printf("Baris bilangan 4\n");
//     int bilangan4_1 = 1;
//     int bilangan4_2 = 1;
//     for (l = 1; l < angka; ++l) {
//         printf("%d, ", bilangan4_1);
//         int u = bilangan4_1 + bilangan4_2;
//         bilangan4_1 = bilangan4_2;
//         bilangan4_2 = u;
//     }
//     printf("...\n");

//     return 0;
// }
