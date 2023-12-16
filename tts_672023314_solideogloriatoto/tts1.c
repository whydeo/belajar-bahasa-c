#include <stdio.h>

void angkasial(int a, int b)
{
    // int a,b;
    // printf("Angka a %d",a);
    // printf("Angka b %d",b);
    int X = 0;
    for (int i = a; i <= b; ++i)
    {
        if (i % 10 == 3 || i % 10 == 4 || i == 4 || i == 13)
        {
            X++;
        }
    }
    printf("Jumlah kamar yang harus dihindari: %d\n", X);
}
int main(){
    int a,b;
        printf("Masukkan bilangan pertama : ");
                scanf("%d", &a);
                printf("Masukkan bilangan kedua : ");
                scanf("%d", &b);
                angkasial(a, b);
    return 0;
}