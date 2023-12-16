#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float itungbmi(float tb, float bb) {
    float tingi = bb / 100;
    float bmi = tb / (tingi * tingi);
    return bmi;
}

void tiga(int tiga) {
    int i, j,k,rorrr;

    for (i = 1;i <= rorrr; i++) {
        for (j = 1;j<=rorrr-i;j++) {
            printf(" ");
        }
        for (k=1;k<=i;k++) {
            printf("* ");
        }
        printf("\n");}


}

int main() {
    char lanjut;
    int menu,rorrr;
    float tb, bb;

    do {
        printf("----------------------------------------------------------\n");
        printf("|\t PROGRAM HITUNG BMI DAN BUAT SEGITIGA            |\n|  \t\t\t\t\t\t\t |\n|");
        printf("\t\t     Menu:                               |\n");
        printf("|\t \t1. Hitung BMI  \t\t\t\t |\n");
        printf("|\t \t2. Buat Segitiga Sama Sisi  \t\t |\n");
        printf("|\t \t3. Exit  \t\t\t\t |\n");
        printf("|\t \tPilih menu (1/2/3):");
        // printf("\t\t\t\t|");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                printf("\t \tMasukkan berat badan (kg): ");
                scanf("\t \t%f", &tb);
                printf("\t \tMasukkan tinggi badan (cm): ");
                scanf("\t \t%f", &bb);
                float bmi = itungbmi(tb, bb);
                printf("\t \tIndeks Masa Tubuh (BMI): %.2f\n", bmi);
                if (bmi < 18.5)
                {
                    printf("|\t\t status berat badan : anda Kurang Berat Badan bnayakin makan \n");
                }
                else if (bmi >= 18.5 && bmi <= 24.9)
                {
                    printf("|\t\t Status berat badan : Anda Normal gdjob dude (mayan ideal)\n");
                }
                else if (bmi >= 25.0 && bmi <=29.9)
                {
                    printf("|\t\tStatus berat badan : gemuk dikit ga ngaruh \n");
                }
                else if (bmi >= 30.0 )
                {
                    printf("\t\tStatus berat badan : obesitas hrus diett go to gym dudeee\n");
                }
                
                
                break;
            case 2:
                printf("|\t \tMasukkan tinggi segitiga: ");
                scanf("\t \t%f", &rorrr);
                tiga(rorrr);
                break;
            case 3:
                printf("\t \tThanks dudeee, program overrrr.\n");
                return 0;
            default:
                printf("\t \tPilihan menu tidak valid. Silakan coba lagi.\n");

        }
        printf("\n \t \tTekan tombol  pun untuk melanjutkan...");
        getch();
        system("cls");
        printf("\t \t kantinued? (y/n): ");
        scanf(" %c", &lanjut);

    } while (lanjut == 'y' || lanjut == 'Y');

    printf("\t\tThanks dudeee, program overrrr.\n");
    return 0;
}
