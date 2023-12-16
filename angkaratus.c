#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    char angka [3];
    char hasil [3];
    char h [3];
    char j [3];
    char b;
    int pilihan;

    printf("MASUKKAN 3 ANGKA RATUSAN : \n");
    for(int i = 0; i < 3;i++){
          printf("Masukkan Angka %d: ",i + 1 );
          char a[3];
             scanf("%s", &a);
             angka[i] = a[1];
             h[i]=a[0];
             j[i]=a[2];
            
            
    }
            // printf("%s",a);
    hasil [0]= angka[2];
    hasil [1]= angka[1];
    hasil [2]= angka[0];
   
    do{
    printf("===============================\n");
    printf("|       Pilih Angka Mana ?    |\n");
    printf("| 1. Depan                    |\n");
    printf("| 2. Tengah                   |\n");
    printf("| 3. Belakang                 |\n");
    printf("| 4. Keluar                   |\n");
    printf("===============================\n");

    printf("Masukkan pilihan: ");

    scanf("%d", &pilihan);
    switch (pilihan) {
        case 1:
            printf("Angka Depan    : %c %c %c\n", h[0],h[1],h[2]);
            getch();
            system("cls");
            break;
        case 2:
            printf("Angka tengah   : %c %c %c\n", hasil[0],hasil[1],hasil[2]);
             getch();
            system("cls");
            break;
        case 3:
            printf("Angka belakang: %c %c %c\n", j[2],j[1],j[0]);
             getch();
            system("cls");
            break;
        case 4:
            printf("Program selesai.\n");
            break;
        default:
            printf("Pilihan tidak valid.\n");
    }
    }while(pilihan != 4);

    return 0;
}