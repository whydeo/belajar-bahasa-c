#include <stdio.h>
#include <windows.h>
#include <conio.h>

int main() {
    int pilih;
    char operator;
    double angka1, angka2;
    char balik, makasih[12] = "Terimakasih";
    int i = 0;

menu:
    system("cls");
    printf("TUGAS 2 - ASDOS DDP H \n");
    printf("================================= \n");
    printf("1. Kalkulator Sesuai Input User \n2. Belah Ketupat \n3. Bilangan Prima \n");
    printf("================================= \n");
    printf("Pilihan Anda (1-3): ");
    scanf("%d", &pilih);

    switch (pilih) {
        case 1: {
            system("cls");

            printf("Kalkulator \n");
            printf("========================= \n");
            printf("Masukkan operator (+, -, *, /) atau tekan tombol 'Esc' untuk kembali ke menu awal: \n");

            operator = getch();  // Menggunakan getch() untuk membaca operator tanpa menunggu Enter
            if (operator == 27)  // Tombol Esc (ASCII 27) untuk kembali ke menu
                goto menu;

            printf("Masukkan angka pertama: ");
            scanf("%lf", &angka1);
            printf("Masukkan angka kedua: ");
            scanf("%lf", &angka2);

            switch (operator) {
                case '+':
                    printf("%.2lf + %.2lf = %.2lf\n", angka1, angka2, angka1 + angka2);
                    break;
                case '-':
                    printf("%.2lf - %.2lf = %.2lf\n", angka1, angka2, angka1 - angka2);
                    break;
                case '*':
                    printf("%.2lf * %.2lf = %.2lf\n", angka1, angka2, angka1 * angka2);
                    break;
                case '/':
                    if (angka2 != 0) {
                        printf("%.2lf / %.2lf = %.2lf\n", angka1, angka2, angka1 / angka2);
                    } else {
                        printf("Error: Pembagian dengan nol tidak diizinkan.\n");
                    }
                    break;
                default:
                    printf("Error: Operator tidak valid.\n");
            }
            break;
        }

        case 2: {
            system("cls");

            int tinggi, space, j;

            printf("Belah Ketupat \n");
            printf("========================= \n");
            printf("Masukkan tinggi belah ketupat (ganjil): ");
            scanf("%d", &tinggi);

            printf("\n");

            if (tinggi % 2 == 0) {
                printf("Neyell banget sih tinggi harus ganjilll! \n");
                break;
                goto menu;
                printf("\n");
            }

            // Bagian atas belah ketupat
            for (int i = 1; i <= tinggi / 2 + 1; i++) {
                for (space = 1; space <= tinggi / 2 + 1 - i; space++) {
                    printf(" ");
                }

                for (j = 1; j <= 2 * i - 1; j++) {
                    printf("*");
                }

                printf("\n");
            }

            // Bagian bawah belah ketupat
            for (int i = tinggi / 2; i >= 1; i--) {
                for (space = 1; space <= tinggi / 2 + 1 - i; space++) {
                    printf(" ");
                }

                for (j = 1; j <= 2 * i - 1; j++) {
                    printf("*");
                }

                printf("\n");
            }
            break;
        }

        case 3: {
            system("cls");

            int angka, prima = 1;

            printf("Bilangan Prima \n");
            printf("========================= \n");
            printf("Masukkan angka: ");
            scanf("%d", &angka);

            // Bilangan prima harus lebih besar dari 1
            if (angka <= 1) {
                printf("%d bukan bilangan prima.\n", angka);
            } else {
                for (int i = 2; i <= angka / 2; i++) {
                    if (angka % i == 0) {
                        prima = 0; // Jika ditemukan pembagi selain 1 dan dirinya sendiri, bukan bilangan prima
                        break;
                    }
                }

                if (prima) {
                    printf("%d adalah bilangan prima.\n", angka);
                } else {
                    printf("%d bukan bilangan prima.\n", angka);
                }
            }
            break;
        }

        default: {
            printf("Input antara 1 - 3\n");
            system("pause");
            goto menu;
        }
    }

    ulang:
    printf("\n");
    printf("Ingin input menu lagi y/n? ");
    scanf("%c", &balik); // Anda sebaiknya menggunakan " %c" untuk menghindari karakter newline dalam buffer.

    switch (balik) {
        case 'y':
        case 'Y':
            goto menu;
            break;
        case 'n':
        case 'N':
            while (i < 12) {
                printf("%c", makasih[i]);
                Sleep(80);
                i++;
            }
            break;
        default:
            printf("Input y/n!!! \n");
            goto ulang;
            break;
    }

}

