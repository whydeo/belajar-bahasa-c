#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int a, i, n, p;
    int o = 2;
    int b, c = 2;
    int q = 3;
    int r = 2;
    printf("masukan angka:");
    scanf("%d", &a);
    printf("baris bilangan 1\n");
    for (i = 1; i <= a; i++)
    {
        // printf("anka: %d\n %d",i,c);
        printf("%d,", c);
        c = c * 2 - 1;
    }
    printf("....\n");
    // printf("%d",a);
    printf("Baris bilangan %d\n", r);
    for (n = 1; n <= a; ++n)
    {
        printf("%d, ", o);
        int m = 0;
        while (!m)
        {
            m = 1;
            o++;
            for (int j = 2; j <= o / 2; ++j)
            {
                if (o % j == 0)
                {
                    m = 0;
                    break;
                }
            }
        }
    }
    printf("....\n");

    printf("Baris bilangan 3\n");

    printf("%d, ", q);
    // printf("%d, ", r);
    // printf("%d",a);
    // int z=(a/2);
    int bru;
    // printf("saya %d\n",z);
    if(a %2==0){
      bru=a/2;
    //   bru=a/2-2;
    //   printf("%d",r);
    }else{
        bru=a/2;
    }
    // printf("saya %d\n",bru);
    for (int i = 1; i <= bru; i++)
    {
        printf("%d,",r);
        q = q + 2;
        printf("%d,",q);
        r = r + 4;
        // printf("%d,%d,", q, r);
    }
    printf("...\n");

    int s = 1, t = 1, u;
    printf("Baris bilangan 4\n");
    for (i = 1; i < n; ++i)
    {
        printf("%d, ", s);
        u = s + t;
        s = t;
        t = u;
    }
    printf("...\n");

    getch();
    system("cls");
    main();
}

// for (int i = 1; i <= a ; i++)
// {
//   printf("%d",d);
//   a += -1;
// if (i <=1)
// {
//     d=i;
// }else
// {
//     d=b+d;
//     b=c;
//     c=d;

// }
