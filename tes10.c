#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void rata()
{
    int i, j;
    float rata, total;
    printf("Masukkan jumlah murid : ");
    scanf("%d", &i);
    total = 0;
    for (j = 1; j <= i; j++)
    {
        printf("\nNilai ke-%d: ", j);
        scanf("%f", &rata);
        total += rata;
    }
    rata = (float)total / i;
    // printf("%2.f \n",total);
    printf(" rata rata nilai di kelas itu adalah: %2.f \n", rata);
}

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }

    return 1; 
}

void hari()
{
    int bulan, tahun;
    printf("masukin bulan :");
    scanf("%d", &bulan);
    printf("masukin tahun :");
    scanf("%d", &tahun);
    if (bulan < 1 || bulan > 12)
    {
        printf("slaah bulan : ");
        return 1;
    }
    int jumlahhari;
    if (bulan == 1 || bulan == 3 || bulan == 5 || bulan == 7 || bulan == 8 || bulan == 10 || bulan == 12)
    {
        jumlahhari = 31;
    }
    else if (bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11)
    {
        jumlahhari = 30;
    }
    else if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0))
    {
        jumlahhari = 29;
    }
    else
    {
        jumlahhari = 28;
    }
    printf("Jumlah hari di bulan %d, pada tahun %d adalah %d hari\n", bulan, tahun, jumlahhari);
}

int main()
{
    int menu;
     int num,ulang;

     do
     {
    printf(" menu \n");
    printf(" 1. rata rata nilai siswa \n");
    printf(" 2. bilangan prima \n");
    printf(" 3. jumlah hari perbulan \n");
    printf("masukan menu : ");
    scanf("%d", &menu);
    system("cls");
    switch (menu)
    {
    case 1:
       do
       {
        rata();
        printf("\nulanggg ? (y/n): ");
        ulang = getch();
        printf("%c\n", ulang);
        system("cls");
        if (ulang != 'y' && ulang != 'Y' && ulang != 'n' && ulang != 'N') {
            while (ulang != 'y' && ulang != 'Y' && ulang != 'n' && ulang != 'N') {
                printf("dibilang y/n bukan yg lain!!\n");
                printf("\nulang kah? (y/n): ");
                ulang = getch();
                printf("%c\n", ulang);
                system("cls");
            }
        }

    } while (ulang == 'Y' || ulang == 'y');
       
    
        break;
    case 2:
      do
      {
          printf("Masukkan Bilangan Bulat: ");
        scanf("%d", &num);
        printf("Bilangan Prima sampai %d adalah:\n", num);
        for (int i = 2; i < num; i++) {
            if (isPrime(i)) {
                printf("%d\t", i);
            }
        }
        printf("\n \n");
        printf("\nulanggg ? (y/n): ");
        ulang = getch();
        printf("%c\n", ulang);
        system("cls");
        if (ulang != 'y' && ulang != 'Y' && ulang != 'n' && ulang != 'N') {
            while (ulang != 'y' && ulang != 'Y' && ulang != 'n' && ulang != 'N') {
                printf("dibilang y/n bukan yg lain!!\n");
                printf("\nulang kah? (y/n): ");
                ulang = getch();
                printf("%c\n", ulang);
                system("cls");
            }
        }
      } while (ulang == 'Y' || ulang == 'y');
      
        break;
    case 3:
       do
       {
         hari();
        printf("\n \n");
        printf("\nulanggg ? (y/n): ");
        ulang = getch();
        printf("%c\n", ulang);
        system("cls");
        if (ulang != 'y' && ulang != 'Y' && ulang != 'n' && ulang != 'N') {
            while (ulang != 'y' && ulang != 'Y' && ulang != 'n' && ulang != 'N') {
                printf("dibilang y/n bukan yg lain!!\n");
                printf("\nulang kah? (y/n): ");
                ulang = getch();
                printf("%c\n", ulang);
                system("cls");
            }
        }
       } while (ulang == 'Y' || ulang == 'y');
        break;

    default:
        break;
    }
     } while (menu != 4);
}
