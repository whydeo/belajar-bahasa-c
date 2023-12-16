#include <stdio.h>

int main() {
    int i, j, k, rows;
    int num = 1; // Mulai dengan angka 1

    printf("Masukkan jumlah baris (bilangan ganjil): ");
    scanf("%d", &rows); // Membaca jumlah baris dari pengguna

    if (rows % 2 == 0) {
        printf("Masukkan jumla8h baris harus ganjil.");
        return 1;
    }

    // Loop untuk mengatur baris
    for (i = 1; i <= rows; ++i) {
        // Loop untuk spasi
        for (j = i; j < rows; ++j) {
            printf(" ");
        }

        // Loop untuk angka
        for (k = 1; k <= 2*i-1; ++k) {
            // Cetak angka ganjil jika baris ganjil, cetak angka genap jika baris genap
            printf("%d", num);
            num += 2; // Melangkah ke angka berikutnya (ganjil atau genap)
        }

        // Pindah ke baris berikutnya
        printf("\n");

        // Atur num kembali ke 1 (untuk baris ganjil) atau 2 (untuk baris genap)
        num = i % 2 == 0 ? 2 : 1;
    }

    return 0;
}
