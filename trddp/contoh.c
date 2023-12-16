#include <stdio.h>
#include <windows.h>
#include <conio.h>


void gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void border2(){
    gotoxy(20,0); //koordinat
    printf("==============================================================================="); //apa yang ingin dipindah ke koordinat di atas
    
    gotoxy(20,1);printf("|"); gotoxy(38,1);printf("|");gotoxy(98,1);printf("|");
    gotoxy(20,2);printf("|");gotoxy(38,2);printf("|");gotoxy(98,2);printf("|");
    gotoxy(20,3);printf("|");gotoxy(38,3);printf("|");gotoxy(98,3);printf("|");
    gotoxy(20,4);printf("|");gotoxy(38,4);printf("|");gotoxy(98,4);printf("|");
    gotoxy(20,5);printf("|");gotoxy(38,5);printf("|");gotoxy(98,5);printf("|");
    gotoxy(20,6);printf("|");gotoxy(38,6);printf("|");gotoxy(98,6);printf("|");
    gotoxy(20,7);printf("|");gotoxy(38,7);printf("|");gotoxy(98,7);printf("|");
    gotoxy(20,8);printf("|");gotoxy(38,8);printf("|");gotoxy(98,8);printf("|");
    gotoxy(20,9);printf("|");gotoxy(38,9);printf("|");gotoxy(98,9);printf("|");
    gotoxy(20,10);printf("|");gotoxy(38,10);printf("|");gotoxy(98,10);printf("|");
    gotoxy(20,11);printf("|");gotoxy(38,11);printf("|");gotoxy(98,11);printf("|");
    gotoxy(20,12);printf("|");gotoxy(38,12);printf("|");gotoxy(98,12);printf("|");
    gotoxy(20,13);printf("|");gotoxy(38,13);printf("|");gotoxy(98,13);printf("|");
    gotoxy(20,14);printf("|");gotoxy(38,14);printf("|");gotoxy(98,14);printf("|");
    gotoxy(20,15);printf("|");gotoxy(38,15);printf("|");gotoxy(98,15);printf("|");
    gotoxy(20,16);printf("===============================================================================");
}
void logIn(){
    gotoxy(21,0); printf("1. atur menu ");
    gotoxy(21,1); printf("1. atur menu ");
    gotoxy(21,1); printf("1. atur menu ");
    gotoxy(21,2); printf("2. pemesanan");
    gotoxy(21,3); printf("3. pemabyaran ");
    gotoxy(21,4); printf("4. history ");
    gotoxy(21,5); printf("5. keluar ");
    system("Color D"); 
    getch();
    main();
}

int main(){   
    system("cls");
    system("color 3"); 
    border2();
    logIn(); 
    return 0;
}