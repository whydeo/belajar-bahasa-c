#include <stdio.h>
int pangkatdua(int n)
{
    if (n == 0)
    {
        return 0;
    }
    while (n % 2 == 0)
    {
        n /= 2;
    }
    return n == 1;
}

int main(){
    int n;
    printf("masukan anggka :");
                scanf("%d", &n);
                if (pangkatdua(n))
                {
                    printf("ya\n");
                }
                else
                {
                    printf("tidak\n");
                }
    return 0;
}