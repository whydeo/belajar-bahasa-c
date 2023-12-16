#include <stdio.h>
#include <string.h>

int main() {
    char warnaBuah[5][20] = {"merah", "kuning", "hijau", "biru", "ungu"};
    char warnaUser[20];
    char lanjut;

    do {
        int warnaAda = 0;
        printf("Masukkan warna buah: ");
        scanf("%s", warnaUser);

        for (int i = 0; i < 5; i++) {
            if (strcmp(warnaUser, warnaBuah[i]) == 0) {
                warnaAda = 1;
                break;
            }
        }

        if (warnaAda) {
            printf("Warna ada!\n");
        } else {
            printf("Warna tidak ada. Apakah Anda ingin memasukkan warna baru? (y/n): ");
            scanf(" %c", &lanjut); 
            if (lanjut == 'y' || lanjut == 'Y') {
                continue;
            } else {
                break;
            }
        }

        printf("cari warna lain? (y/n): ");
        scanf(" %c", &lanjut); 
    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}





























// #include <stdio.h>
// #include <string.h>

// struct Buah {
//     char nama[50];
//     char warna[20];
// };

// int main() {
//     struct Buah buah[100]; // Mendeklarasikan array struktur Buah
//     int jumlahBuah = 0;
//     char lanjut;

//     do {
//         printf("Masukkan nama buah: ");
//         scanf("%s", buah[jumlahBuah].nama);
//         printf("Masukkan warna buah: ");
//         scanf("%s", buah[jumlahBuah].warna);
//         jumlahBuah++;

//         printf("Apakah Anda ingin memasukkan data buah lagi? (y/n): ");
//         scanf(" %c", &lanjut); 
        
//     } while (lanjut == 'y' || lanjut == 'Y');

//     // Menampilkan data buah
//     printf("\nData Buah:\n");
//     printf("No\tNama\tWarna\n");
//     for (int i = 0; i < jumlahBuah; i++) {
//         printf("%d\t%s\t%s\n", i + 1, buah[i].nama, buah[i].warna);
//     }

//     return 0;
// }
