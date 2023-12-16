#include <stdio.h>

int main() {
    int angka;
    int a;
    float totalb = 0;
    float persen[100];
    printf("Masukkan Angka : ");
    scanf("%d", &angka);

    for (int i = 0; i < angka; i++) {
        printf("\n");
        scanf("%d", &a);
        int b[a];

        for (int j = 0; j < a; j++) {
            printf("");
            scanf("%d", &b[j]);
            totalb += b[j];
         persen[j]= ((float)b[j] / totalb) * 100;
        }
    }
    for (int i = 0; i < angka; i++)
    {
    printf(" %2.2f%%\n",persen[i]);
    }
    
    

    return 0;
}


