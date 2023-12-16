#include <stdio.h>

int main() {
    float angka1, angka2, angka3, hasil;
    int menu,exit=1;
    while (exit)
    {
       
   
    
    printf("Masukkan 3 angka sekaligus: ");
    scanf("%f %f %f", &angka1, &angka2, &angka3);

    printf(" %.2f\t", angka1);
    printf(" %.2f\t", angka2);
    printf(" %.2f\n", angka3);

    printf("Menu aritmatika:\n");
    printf("1. Penjumlahan\n");
    printf("2. Perkalian\n");
    printf("3. Pengurangan\n");
    printf("4. Pembagian\n");
    printf("5. Exit\n");
    printf("Pilih menu: ");
    scanf("%d", &menu);

    switch (menu) {
        case 1:
            hasil = angka1 + angka2 + angka3;
            printf("Hasil penjumlahan: %.2f\n", hasil);
            break;

        case 2:
            hasil = angka1 * angka2 * angka3;
            printf("Hasil perkalian: %.2f\n", hasil);
            break;

        case 3:
            hasil = angka1 - angka2 - angka3;
            printf("Hasil pengurangan: %.2f\n", hasil);
            break;

        case 4:
            if (angka2 != 0 && angka3 != 0) {
                hasil = angka1 / angka2 / angka3;
                printf("Hasil pembagian: %.2f\n", hasil);
            } else {
                printf("Pembagian tidak valid (angka kedua atau ketiga adalah nol).\n");
            }
            break;

        case 5:
                exit = 0;
             break;

        default:
            printf("Pilihan tidak valid.\n");
            break;
    }
 }
    return 0;
}
