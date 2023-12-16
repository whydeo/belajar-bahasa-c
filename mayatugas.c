#include <stdio.h>

int main() {
    int n = 5; // Jumlah bilangan yang akan dimasukkan
    double bilangan, total = 0.0;

    printf("Masukkan 5 bilangan positif:\n");

    for (int i = 0; i < n; i++) {
        printf("Masukkan bilangan ke-%d: ", i + 1);
        scanf("%lf", &bilangan);

        // Memastikan bilangan yang dimasukkan adalah positif
        if (bilangan < 0) {
            printf("Bilangan harus positif. Coba lagi.\n");
            i--; // Mengulangi input untuk bilangan yang tidak valid
            continue;
        }

        total += bilangan;
    }

    double rata_rata = total / n;

    printf("Jumlah dari %d bilangan adalah: %.2lf\n", n, total);
    printf("Rata-ratanya adalah: %.2lf\n", rata_rata);

}
