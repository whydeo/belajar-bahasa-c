#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y) {
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput, dwCursorPosition);
}

int main() {
    char *teks = "Yehuda Pratama";
    int pjg = strlen(teks);
    int i, j;

    int x[pjg], y[pjg];
    x[0] = 30;
    y[0] = 1;

    for (i = 1; i <= pjg - 1; i++) {
        x[i] = x[0] + i;
        y[i] = y[0];
    }

    char key = 0;
    while (key != 27) {
        if (kbhit()) {
            key = getch();
        }
        // bersihkan layar
        system("cls");

        // geser
        for (i = 0; i <= pjg - 1; i++) {
            x[i] = x[i] - 1;
            if (x[i] <= 1) x[i] = 70;
        }

        // cetak
        for (i = 0; i <= pjg - 1; i++) {
            gotoxy(x[i], y[i]);
            printf("%c", teks[i]);
        }
        
        // tunda
        Sleep(100); // Adjust the sleep time as needed
    } // end while

    return 0;
}
