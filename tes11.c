#include <stdio.h>

int main()
{
    int baris, kolom, semua = 0;
    printf("Masukkan jumlah baris: ");
    scanf("%d", &baris);
    printf("Masukkan jumlah kolom: ");
    scanf("%d", &kolom);
    int matriks[baris][kolom];
    printf("Masukkan elemen-elemen matriks:\n");
    for (int k = 0; k < baris; ++k)
    {
        for (int l = 0; l < kolom; ++l)
        {
            printf("Matriks[%d][%d]: ", k, l);
            scanf("%d", &matriks[k][l]);
            semua += matriks[k][l];
        }
    }
    printf("\nMatriks yang dimasukkan:\n");
    for (int k = 0; k < baris; ++k)
    {
        for (int l = 0; l < kolom; ++l)
        {
            printf("%d\t", matriks[k][l]);
        }
        printf("\n");
    }
    float rata_rata = (float)semua / (baris * kolom);
    printf("\nJumlah semua elemen matriks: %d\n", semua);
    printf("Rata-rata elemen matriks: %.2f\n", rata_rata);

    printf("\nMatriks genap diganti x:\n");
    for (int k = 0; k < baris; ++k)
    {
        for (int l = 0; l < kolom; ++l)
        {
            if (matriks[k][l] % 2 == 0)
            {
                printf("x\t");
            }
            else if (matriks[k][l] % 2 != 0)
            {
                printf("%d\t", matriks[k][l]);
            }
        }
        printf("\n");
    }

    printf("\nMatriks kelipatan 3 diganti t:\n");
    for (int k = 0; k < baris; ++k)
    {
        for (int l = 0; l < kolom; ++l)
        {
            if (matriks[k][l] % 3 == 0)
            {
                printf("t\t");
            }
            else if (matriks[k][l] % 3 != 0)
            {
                printf("%d\t", matriks[k][l]);
            }
        }
        printf("\n");
    }

    printf("\nMatriks transpose \n");
    for (int k = 0; k < kolom; ++k)
    {
        for (int l = 0; l < baris; ++l)
        {
            printf("%d\t", matriks[l][k]);
        }
        printf("\n");
    }

    return 0;
}
