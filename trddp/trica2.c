#include <stdio.h>
#include <unistd.h>
#include <windows.h>

void buatbnderalatvia(int lebar) {
    //  ini untuk buat warna merah ya
    int blockLoad = 219;
    for (int i = 1; i <= lebar / 2; i++) {
        for (int j = 1; j <= lebar*2; j++) {
         printf("\033[1;91m");
            printf("%c%c",blockLoad,blockLoad);
        }
        printf("\n");
            sleep(1); 
    }

    //  ini untuk buat warna putih ya
    for (int i = 1; i <= lebar / 3; i++) {
        for (int j = 1; j <= lebar*2; j++) {
            printf("\033[1;37m"); 
             printf("%c%c",blockLoad,blockLoad);
        }
        printf("\n");
        sleep(1);  
    }

      //  ini untuk buat warna merah ya
    for (int i = 1; i <= lebar / 2; i++) {
        for (int j = 1; j <= lebar*2; j++) {
          printf("\033[1;91m"); 
             printf("%c%c",blockLoad,blockLoad);
        }
        printf("\n");
       sleep(1);
    }
}

int main() {
    int lebar;
    printf("=======Bendera Jerman=======\n");
    printf("Masukkan lebar: ");
    scanf("%d", &lebar);
    buatbnderalatvia(lebar);

   //ini buat warna kembali normaal ke awall kalau kehapus bakalan kuning smua
    printf("\033[0m");

    return 0;
}
