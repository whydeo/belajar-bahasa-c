#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

void arrow(int nomorMenu, int nomorPanah) {
    if (nomorMenu == nomorPanah)
        printf("--> ");
    else
        printf("   ");
}

void mennu() {
    int nomorPanah;
    int key;
    key = 1;
    nomorPanah = 1;
    system("cls");
    while (key != 13) {
        key = getch();
        system("cls");
       printf("\n===== Menu =====\n");
        arrow(1, nomorPanah);
        printf("1. atur menu\n");
        arrow(2, nomorPanah);
        printf("2. pemesanan\n");
        arrow(3, nomorPanah);
        printf("3. laporan\n");
        arrow(4, nomorPanah);
        printf("4. logout\n");

        if (key == 80) {
            nomorPanah++;
            if (nomorPanah > 4)
                nomorPanah = 1;
        } else if (key == 72) {
            nomorPanah--;
            if (nomorPanah < 1)
                nomorPanah = 4;
        }
    }

    switch (nomorPanah) {
    case 1:
        system("cls");
        printf("Menu 1\n");
        system("pause");
        main();
        break;
    case 2:
        system("cls");
        printf("Menu 2\n");
        system("pause");
          main();
        break;
    case 3:
        system("cls");
        printf("Menu 3\n");
        system("pause");
          main();
        break;
    case 4:
        system("cls");
        printf("Menu 4\n");
        system("pause");
          main();
        break;
    default:
        break;
    }

}
