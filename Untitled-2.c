#include <stdio.h>
int penjumlahan (int angka1, int angka2){
    return angka1+angka2;
}

int pengurangan (int angka1, int angka2){
    return angka1-angka2;
}
int perkalian (int angka1, int angka2){
    return angka1*angka2;
}
int pembagian (int angka1, int angka2){
    return angka1/angka2; 
}

void main(){
    int angka1, angka2;
    int kali,bagi,tambah,kurang;
    printf("Masukkan angka 1: ");
    scanf("%d", &angka1);
    printf("Masukkan angka2: ");
    scanf("%d", &angka2);
    kali=perkalian(angka1, angka2);
    bagi= pembagian(angka1, angka2);
    kurang =pengurangan(angka1, angka2);
    tambah = penjumlahan(angka1, angka2);

    printf("Hasil angka1+angka2 = %d", tambah);
    printf("\nHasil angka1-angka2 = %d", kurang);
    printf("\nHasil angka1*angka2 = %d", kali);
    printf("\nHasil angka1/angka2 = %d", bagi);
    
}