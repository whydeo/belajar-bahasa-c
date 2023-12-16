#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
void kapall(int kapal)
{
    int i = 1, j, k;

    for (k = 1; k <= 5; k++)
    {
        for (int a = 1; a <= 10; a++)
        {
            printf(" ");
        }
        for (j = 5; j >= k + 1; j--)
        {
            printf(" ");
        }
        for (int a = 1; a <= k; a++)
        {
            printf("%d", i);
        }
        for (int a = 1; a <= k - 1; a++)
        {
            printf("%d", i);
        }
        printf("\n");
        i++;
    }
    i = 1;
    for (k = 1; k <= 5; k++)
    {
        for (int a = 1; a <= k; a++)
        {
            printf(" ");
        }
        for (j = 5; j >= k + 1; j--)
        {
            printf("%d", i);
        }
        for (int a = 1; a <= 20; a++)
        {
            printf("%d", i);
        }
        for (j = 5; j >= k + 1; j--)
        {
            printf("%d", i);
        }
        printf("\n");
        i++;
    }
}
void nimm(int nim)
{
    int mhs=nim;
    int  j=1;
    int i,brp;
    int n[20] = {672023};
    
    for ( i = 1; i <= mhs  ; i++)
    {
        printf("%d. %d%d\n",j++,n[0],i);
    }

        
    if (brp >=1 )
    {
        
    }
    

}
void datadir(char dd)
{
    char nama[] = "SOLI DEO GLORIA TOTO";
    int nim[] = {672023314};
    printf("%s\n", nama);
    printf("%d\n", nim[0]);
}
int cariKPK (int a, int b){
  int FPB=cariFPB(a,b);//sama disini 
return (a*b)/FPB;
}

int main()
{
    int menu, kapal,mhs,gnti,brp,dd;
    int bilangan1,bilangan2;
    do
    {
        printf("pilih menu\n");
        printf("1.kapal\n");
        printf("2.NIM\n");
        printf("3.faktorial\n");
        printf("4.data diri\n");
        printf("5.exit\n");
        printf("masukan menu: ", menu);
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            kapall(kapal);
            printf("\ntekan tombol apapun untuk lanjut");
            getch();
            system("cls");
            break;
        case 2:
            printf("masukan jumblah mahasiswa :");
            scanf("%d",&mhs);
            nimm(mhs);
            printf("\ntekan tombol apapun untuk lanjut");
            getch();
            system("cls");
            break;
        case 3:
        printf("Masukan bilangan pertama : ");
        scanf(" %d", &bilangan1);
        printf("Masukna bilangan kedua : ");
        scanf(" %d", &bilangan2);
        int KPK;
        KPK=cariKPK(bilangan1,bilangan2);
        printf("KPK dari %d dan %d adalah %d\n",bilangan1,bilangan2,KPK);
        break;
            break;
        case 4:
            datadir(dd);
            printf("\ntekan tombol apapun untuk lanjut");
            getch();
            system("cls");
            break;
        case 5:
            break;
        default:
            break;
        }

    } while (menu != 5);

    return 0;
}