#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    char nama[30];
    char nim[12];
int menu,angka,n,j,segitiga;
    printf("Masukkan Nama: ");
    scanf("%s",&nama);
    printf("Masukkan NIM: ");
    scanf("%s",&nim);
    system("cls");
do
{
printf("selamat datang %s- %s", nama,nim);
printf("NIM: %s\n", nim);
printf ("1. ganjil genap\n");
printf ("2.buzz lightyear\n");
printf ("3.segitga\n");
printf ("4.exit\n");
printf ("Silahkan pilih menu: ");
scanf ("%d",&menu);

switch (menu){
case 1:
 printf("Masukkan sebuah angka: ");
    scanf("%d", &angka);

    if (angka % 2 == 0) {
        printf("%d adalah bilangan genap. \n", angka);
    }  else {
        printf("%d adalah bilangan ganjil. \n", angka);
    }
    system("cls");  
break;
case 2:
 printf ("Masukkan angka apapun: ");
 scanf ("%d",&n);
 for(int b = 1;b <= n; ++b){
 if (b % 3 == 0 && b % 5 == 0 ){printf("buzz lightyear\n");
        } else if (b % 3 == 0) {
            printf("buzz\n");
        } else if (b % 5 == 0) {
            printf("lightyear\n");
        } else {
            printf("%d\n",b);
             }} 

             system("cls");  
break;
case 3:
 printf("Masukkan jumlah baris : ");
    scanf("%d", &segitiga);
    for (int i = 1; i <= segitiga; ++i) {
    for (j = i; j <= segitiga; ++j) {
            printf(" ");
        }
    for (int k = 1; k <= 2*i-1; ++k) {
            if (i == segitiga || k == 1 || k == 2*i-1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
}
system("cls");  
break;
case 4:
    printf ("exit");
return 0;
default:
    printf ("salah");
}
} while (1);
}



































// #include <stdio.h>


// void positip(){
//     double angka;
//   printf("Program Menentukan Bilangan Positif, Nol, atau Negatif.\n");
//   printf("=======================================================\n");

//   printf("Masukan suatu bilangan : ");
//   scanf("%lf", &angka);

//   if ( angka <= 0.0 ){ 
//     if ( angka == 0.0 ){
//       printf("Anda memasukan bilangan 0\n");
//     } else {
//       printf("Anda memasukan bilangan negatif.\n");
//     }
//   } else {
//     printf("Anda memasukan bilangan positif.\n");
//   }
  
//   printf("\n\n");

// }
// int main(){
//   positip();
//   positip();
//   positip();
//   positip();
//   positip();


//   return 0;
// }

