#include <stdio.h>

int main (){
       int myNum = 10; 
       float myFloatNum= 2.99;
       char myCharLetter='d';
       int x =40;
       int y=90;
       int sum= x + y;
       int kali= x*y;
       float bagi= y/x;
       int mod= y % x;
       char karakter;
       
       const int lahir =2004;


        int studentID = 672023314;
        int studentAge = 19;
        float studentNilai = 99.99;
        char studentGrade = 'A';

    printf("saya dalah \"deo\" \n");
    printf("coba deh  satu \n");    
    
    printf("angka favorit saya adalah:%d dan leter favorit saya : %c\n", myNum, myCharLetter);
    printf("%.3f\n",myFloatNum);
    printf("%c\n", myCharLetter);
    printf("%d \n",sum);
    printf("%d \n", kali);
    printf("%.3f\n",bagi);
    printf("%d\n",mod);
    printf("%d\n", x < y);
    printf("%d\n", x > y);

    printf ("tahun lahir:%d \n id student:%d \n nama student:deo \n umur student: %d \n student nilai: %.2f \n student grade:%c \n",lahir, studentID,studentAge,studentNilai,studentGrade);


    int angka1;
    int angka2;
    int hasil;
    hasil = angka1 + angka2;
        printf ("Masukkan nilai pertama: "); scanf ("%d",&angka1);
        printf ("Masukkan nilai kedua: "); scanf ("%d",&angka2);
        
        printf("hasil= %d",hasil);



printf("%[^\n]",&karakter);

    return 0;
    
}