#include <stdio.h>

void segitiga(int h)
{
    int i, j, anka = 1;
    if (h > 0 && h <= 10)
    {
        for (i = 1; i <= h; i++)
        {
            for (j = 1; j <= h - i; j++)
            {
                printf("\t");
            }
            for (j = 1; j <= i * 2 - 1; j++)
            {
                printf("%d\t", anka);
                anka += i - 1;
                // printf("aku%d",i-1);
            }
            printf("\n");
            anka = i + 1;
            // printf("saya%d",i);
        }
    }
    else
    {
        printf("Input tidak validd. Masukkan jumlah baris segitiga antara 1 sampai 10.\n");
    }
}
int main(){
    int h;
      printf("Masukkan jumlah baris segitiga 1-10 aja: ");
                scanf("%d", &h);
                segitiga(h);
    return 0;
}