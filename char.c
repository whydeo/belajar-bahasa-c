#include <stdio.h>
// #include <string.h>


// int main(){
// char kata[4];
// int coba[4]={1,2,3,4};

// printf("masukan kata :"); scanf("%s",&kata);
// printf("%d \n",coba[2]);
// printf("%s",kata);

// }


void coba (int angka1,int angka2,int angka3){
    int hasil= angka1+angka2 - angka3;
    printf("%d",hasil);
}
int main(){
    int a=50;
    int b=50;
    int c,d,e;
    printf("masukan c");
     scanf("%d",&c);
    printf("masukan d"); scanf("%d",&d); 
    printf("masukan e"); scanf("%d",&e);  
    // int print = coba(a, b);
    // printf("%d",print);
    coba(c,d,e);
}