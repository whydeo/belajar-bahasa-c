#include <stdio.h>
#include <stdlib.h>
int main()
{
    int kecil,besar,hasil = 0;

    
    printf("Masukkan bilangan kecil = ");
    scanf("%d", &kecil);
    printf ("Masukkan bilangan besar =");
    scanf("%d", &besar);
    printf("hasil: ");
        if (kecil % 2 !=0){
            kecil++;
        }
        int a = kecil;
        do{
        if (a !=kecil){
            printf(" + ");
        }
        printf ("%d", a);
        hasil+= a;
        a +=2;
    }while (a <=besar);
    printf(" hasilnya adalah %d\n", hasil);
return 0;

}