#include <stdio.h>

void statistika(int c)
{
    // printf("tes:%d",c);
    int  gede, d;
    // printf("masukan angka sebanyak %d kali:");
        gede = c;
    for (int i = 1; i <= c; i++)
    {
        printf("angka ke -%d:",i);
        scanf("%d", &d);
       
        if (d > gede)
        {
            gede = d;
        }
    }
    // printf("angka terkecil :%d \n", kecil);
    printf("angka terbesar :%d \n", gede);
}
int main()
{
    int c;
    printf("masukan satu angka:");
    scanf("%d", &c);
    statistika(c);
    return 0;
}