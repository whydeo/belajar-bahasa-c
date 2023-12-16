#include <stdio.h>


int main(){
 int x, y;
 int pilihan;

    
        printf("1. Looping\n");

        printf("masukkan pilihan: ");
        scanf("%d", &pilihan);

        switch(pilihan){
        case 1:
            printf("masukkan angka 1: ");
            scanf("%d", &x);
            printf("masukkan angka 2: ");
            scanf("%d", &y);
            if(x > y){
                for(int i = x;i >= y;i--){
                    if(i % 2 !=0){
                        printf("%d", i);
                    }
                }
            }else if(x < y){
                for(int i = x;i <= y;i++){     
                    if(i % 2 !=0){
                        printf("%d", i);
                    }
                }
            }else{
                printf("masukkan angka");
            }
                printf("\n");
            printf("masukkan angka 1: ");
                break;        
        
        }

        return 0;

}
