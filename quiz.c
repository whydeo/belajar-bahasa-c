#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <conio.h>

void gg(int a){
    
        int angka=a;
        if (angka % 2 == 0)
            {
                printf("angka anda genap\n");
            }else
            {
                printf("angka anda ganjil \n");
            }

}

void buzz(int buzz){
    int n= buzz;
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("buz lightyear\n"); 
        } else if (i % 3 == 0) {
            printf("buzz\n");
        } else if (i % 5 == 0) { 
            printf("lightyear\n"); 
        } else {
            printf("%d\n", i); 
        }
    }

}

int main(){
    int menu,a,n,segitiga,i,j,k;

    char nama[30],nim[20],kembali;
    printf("masukan nama:");
    scanf("%s",&nama);
     printf("masukan nim:");
    scanf("%s",&nim);
   
    printf("\nTekan tombol apa pun untuk melanjutkan...");
    getch();
    system("cls");
     do
    {
    printf ("***  SELAMAT DATANG, %s-%s ***\n",nama,nim);
// system("pause");
// setring(nama,nim);
    printf("1.ganjil genap\n");
    printf("2.buzz lightyear\n");
    printf("3.diamon kematian\n");
    printf("4.exit\n");
    printf("masukan menu:",menu);
    scanf("%d",&menu);
    system("cls");
    switch (menu)
    {
    case 1:
        printf("masukan angka ");
        scanf("%d",&a);
      gg(a);
      
    printf("Tekan tombol apa pun untuk melanjutkan...");
    getch();
    system("cls");
        break;

    case 2:
     printf("Masukkan angka maksimal: ");
    scanf("%d", &n); 
    buzz(n);
    printf("\nTekan tombol apa pun untuk melanjutkan...");
    getch();
    system("cls");
   break;

   case 3:
    printf("Masukkan jumlah baris : ");
    scanf("%d", &segitiga); 
    for (i = 1; i <= segitiga; ++i) {
    for (j = i; j <= segitiga; ++j) {
            printf(" ");
        }
    for (k = 1; k <= 2*i-1; ++k) {
            if (i == segitiga || k == 1 || k == 2*i-1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    } 
    printf("\nTekan tombol apa pun untuk melanjutkan...");
    getch();
    system("cls");
    break;
    case 4:
     printf("selesai\n");
    return 0;
    default:
    printf("salah memasukan input!!!");
    printf("\nTekan tombol apapun untuk kembali...");
    getch();
    system("cls");
    }
     
    } while (menu != 4);
   
}