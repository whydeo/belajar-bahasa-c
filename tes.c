#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Masukkan tinggi segitiga: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Mencetak spasi
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        // Mencetak bintang
        for (j = 1; j <= i; j++) {
            printf("  *");
        }

        // Pindah ke baris berikutnya
        printf("\n");
    }

    return 0;
}


// #include <stdio.h>
// #include <stdlib.h>
// #include <conio.h>

// int cariFPB(int A, int B){
//     int sisa;
//     while (B != 0) {
//         sisa = A % B;
//         A = B;
//         B = sisa;
//     }
//     return A;
// }

// void cetakPola(int tinggi) {
//     int i, j, k, angka = 1;
//      // Loop untuk setiap baris
//     for (i = 1; i <= tinggi; i++) {
//         // Loop untuk spasi di sebelah kiri segitiga
//         for (j = 1; j <= tinggi - i; j++) {
//             printf("        ");
//         }

//         // Loop untuk mencetak angka di sebelah kiri segitiga
//         for (k = 1; k <= i * 2 - 1; k++) {
//             printf("%8d", angka);
//             angka += 2;
//         }

//         // Pindah ke baris berikutnya
//         printf("\n");
//     }
// }

// int main(){
//   int menu;
//   int tinggi,bilangan1,bilangan2;
// do
// {
// printf("Choose Your Character\n");
// printf("1. FPB dua bilangan\n");
// printf("2.segitga angka\n");
// printf("3.exit\n");
// printf("Silahkan pilih menu: ");
// scanf("%d",&menu);

// switch (menu){
// case 1:
// printf("Masukkan bilangan 1: ");
// scanf("%d", &bilangan1);
// printf("Masukkan bilangan 2: ");
// scanf("%d",&bilangan2);

// int fpb=cariFPB(bilangan1,bilangan2);
// printf("hasil fpb dari bilangan1 dan bilangan2 adalah:%d",fpb);

// break;

// case 2:
    
//     printf("Masukkan tinggi segitiga: ");
//     scanf("%d", &tinggi);
//     cetakPola(tinggi);


// break;

// case 3:
// return 0;
// default:
//     printf ("salah");
// }
// }while(1);
// }







// #include <stdio.h>
// #include <stdlib.h>
// #include <conio.h>

// int hitungFPB(int a, int b) {
//     while (b != 0) {
//         int sisa = a % b;
//         a = b;
//         b = sisa;
//     }
//     return a;
// }

// #include <stdio.h>

// int main() {
//     int bilangan;
//     unsigned long long faktorial = 1;

//     printf("Masukkan bilangan: ");
//     scanf("%d", &bilangan);

  
//     for (int i = 1; i <= bilangan; i++) {
//         faktorial *= i;
//     }

//     printf("Faktorial dari %d adalah %llu\n", bilangan, faktorial);

//     return 0;
// }












// int main() {
//     int menu;
    
//     do {
//         printf("Tentukan Pilihanmu\n");
//         printf("1. Bilangan FPB\n");
//         printf("2. Segitiga Angka\n");
//         printf("3. Exit\n");
//         printf("Masukan menu: "); 
//         scanf("%d", &menu);
//         system("cls");
//         if (menu == 1) {
//             int m, n;
//             printf("Masukkan bilangan pertama : ");
//             scanf("%d", &m);
//             printf("Masukkan bilangan kedua : ");
//             scanf("%d", &n);
//             int fpb = hitungFPB(m, n);
//             printf("Faktor persekutuan terbesarnya adalah : %d\n", fpb);
//             printf("pencet y/n untuk ulang");
//             getch();
//             system("cls");
//         } else if (menu == 2) {
        
//     int tinggi;
//     printf("Masukkan tinggi segitiga: ");
//     scanf("%d", &tinggi);
//     int i, j, k, angka = 1;

//     for (i = 1; i <= tinggi; i++) {
//         for (j = 1; j <= tinggi - i; j++) {
//             printf("        ");
//         }

//         for (k = 1; k <= i * 2 - 1; k++) {
//             printf("%8d", angka);
//             angka += 2;
//         }

//         printf("\n");
//     }
//     printf("pencet y/n untuk ulang");
//     getch();
//     system("cls");

            
//         } else if (menu == 3) {
//             exit(0);  // Keluar dari program
//         }
//     } while (1);

//     return 0;
// }










// #include <stdio.h> 
// int main() {
//     int i = 1, p, j;

//     for (p = 1; p <= 5; p++) {
//         for (int a = 1; a <= 10; a++) {
//             printf(" ");
//         }
//         for (j = 5; j >= p + 1; j--) {
//             printf(" ");
//         }
//         for (int a = 1; a <= p; a++) {
//             printf("%d", i);
//         }
//         for (int a = 1; a <= p - 1; a++) {
//             printf("%d", i);
//         }
//         printf("\n");
//         i++;
//     }
    
//     i = 1;
//     for (p = 1; p <= 5; p++) {
//         for (int a = 1; a <= p; a++) {
//             printf(" ");
//         }
//         for (j = 5; j >= p + 1; j--) {
//             printf("%d", i);
//         }
//         for (int a = 1; a <= 20; a++) {
//             printf("%d", i);
//         }
//         for (j = 5; j >= p + 1; j--) {
//             printf("%d", i);
//         }
//         printf("\n");
//         i++;
//     }

//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int tinggi, i, j, angka = 2;
    
//     printf("Masukkan tinggi segitiga: ");
//     scanf("%d", &tinggi);
    
//     for (i = 1; i <= tinggi; i++) {
//         for (j = 1; j <= tinggi - i; j++) {
//             printf("  ");
//         }
//         for (j = 1; j <= 2 * i - 1; j++) {
//             printf("%d ", angka);
//             angka++;
//         }
//         for (j = 1; j <= i - 1; j++) {
//             printf("%d ", angka);
//             angka++;
//         }
//         printf("\n");
//     }
    
//     return 0;
// }




// #include <stdio.h>

// int tambah(int angka1, int angka2){
//     printf("hasil angka 1 + angka 2 :%d\n", angka1+angka2);

// }
// int kurang(int angka1, int angka2){
//     printf("hasil angka 1 - angka 2:%d\n",angka1-angka2);
// }
// int bagi(int angka1, int angka2){
//     printf("hasil angka 1 - angka 2:%d\n",angka1/angka2);
// }
// int kali(int angka1 , int angka2){
//     return angka1*angka2;
// }

// void main(){
//     int angka1,angka2;
//     int tambahh,kurangg,bagii,kalii;

//     printf("masukan angka1:");
//     scanf("%d",&angka1);
//     printf("masukan angka2:");
//     scanf("%d",&angka2);
//     tambahh=tambah(angka1,angka2);
//     kurangg=kurang(angka1,angka2);
//     bagii=bagi(angka1,angka2);
//     kalii=kali(angka1,angka2);

//     printf("hasil angka1 * angka 2: %d",kalii);
        
// }




// #include <stdio.h>

// int cariFPB(int a, int b) {
//     int r;
//     while (b != 0) {
//         r = a % b;
//         a = b;
//         b = r;
//     }
//     return a;
// }
// int cariKPK (int a, int b){
//   int FPB=cariFPB(a,b);//sama disini 
// return (a*b)/FPB;
// }
// int main(){
//   int bilangan1,bilangan2,input;
// 	printf("------------\n");
// 	printf("    MENU    \n");
// 	printf("------------\n");
// 	printf("1. FPB\n");
// 	printf("2. KPK\n");
// 	printf("3. keluar\n");
// 	printf("pilih menu: ");
// 	scanf("%d",&input);

// 	switch (input){
// 	case 1:
//         printf("Masukan bilangan pertama : ");
//         scanf(" %d", &bilangan1);
//         printf("Masukna bilangan kedua : ");
//         scanf(" %d", &bilangan2);
//         int FPB,a,b;
//         FPB=cariFPB(bilangan1,bilangan2);
//         printf("FPB dari %d dan %d adalah %d\n",bilangan1,bilangan2,FPB);
//         break;
//     case 2:
//         printf("Masukan bilangan pertama : ");
//         scanf(" %d", &bilangan1);
//         printf("Masukna bilangan kedua : ");
//         scanf(" %d", &bilangan2);
//         int KPK;//tadi kau salah disini 
//         KPK=cariKPK(bilangan1,bilangan2);
//         printf("KPK dari %d dan %d adalah %d\n",bilangan1,bilangan2,KPK);
//         break;

//         default:
//             printf("Pilihan Tidak Sesuai\n");
// 	}
// }




















// #include <stdio.h>

// int main() {
//   int a=10;
//   int b=a+(a/=2);
//   printf("%d",b);
//     return 0;
// }












// #include <stdio.h>

// int main() {
//     int i, j, k, rows;

//     printf("Masukkan jumlah baris : ");
//     scanf("%d", &rows); 
 

//     return 0;
// }





// #include <stdio.h>

// int main() {
//     int n;

//     printf("Masukkan angka maksimal: ");
//     scanf("%d", &n); 
//     for (int i = 1; i <= n; ++i) {
//         if (i % 3 == 0 && i % 5 == 0) {
//             printf("buz lightyear\n"); 
//         } else if (i % 3 == 0) {
//             printf("buzz\n");
//         } else if (i % 5 == 0) {
//             printf("lightyear\n"); 
//         } else {
//             printf("%d\n", i); 
//         }
//     }

//     return 0;
// }
