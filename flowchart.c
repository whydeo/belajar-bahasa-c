#include <stdio.h>

void jumblah(){
     int angka1,angka2,hasil,kurang,kali,bagi,mod;
   
    
     printf("masukan angka 1 = "); scanf("%d",&angka1);
     printf("masukan angka 2 = "); scanf("%d",&angka2);
      hasil= angka1+angka2;
      kurang= angka1-angka2;
      kali = angka1*angka2;
      bagi =angka1/angka2;
      mod=angka1%angka2;

     //     if(angka1 >0 && angka2 >= 5){
     printf("hasil %d + %d = %d \n",angka1,angka2,hasil);
     printf("hasil %d - %d = %d \n",angka1,angka2,kurang);
     printf("hasil %d * %d = %d \n",angka1,angka2,kali);
     printf("hasil %d / %d = %d \n",angka1,angka2,bagi);
     printf("hasil %d %%  %d = %d \n",angka1,angka2,mod);
    
    
}

int main (){
    jumblah();
    jumblah();
    jumblah();
     

}  


