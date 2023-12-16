#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct MenuItem {
    char nama[255];
    int harga;
    char kategori[20];
};

void masukmenu(FILE *file, struct MenuItem menu[], int jumlahmenu) {
    for (int i = 0; i < jumlahmenu; i++) {
        fprintf(file, "%s %d %s\n", menu[i].nama, menu[i].harga, menu[i].kategori);
    }
}
void bacamenu(FILE *file, struct MenuItem menu[], int *jumlahmenu) {
    *jumlahmenu = 0;
    while (fscanf(file, " %[^0-9]%d %[^\n]", menu[*jumlahmenu].nama, &menu[*jumlahmenu].harga, menu[*jumlahmenu].kategori) == 3) {
        (*jumlahmenu)++;
    }
}


void tampilkanMenu(struct MenuItem menu[], int jumlahmenu) {
    if (jumlahmenu > 0) {
        for (int i = 0; i < jumlahmenu; i++) {
            printf("%d. Nama: %s\n   Harga: Rp %d\n   Kategori: %s\n\n", i + 1, menu[i].nama, menu[i].harga, menu[i].kategori);
        }
    } else {
        printf("Menu kosong.\n");
    }
}
int main() {
    FILE *fptr;
    struct MenuItem menu[30]; 
    int jumlahmenu = 0;

    fptr = fopen("coba.txt", "r");
    if (fptr != NULL) {
        bacamenu(fptr, menu, &jumlahmenu);
        fclose(fptr);
    }
    int pilihan;
    int tambah, ubah;
    int ubahh;
    do {
        printf("\n=== Menu Kafe ===\n");
        printf("1. Tambah Item Menu\n");
        printf("2. Lihat Menu\n");
        printf("3. Ubah Menu\n");
        printf("4. Hapus Menu\n");
        printf("5. Keluar\n");
        printf("Pilihan Anda: ");
        scanf("%d", &pilihan);
        system("cls");

        switch (pilihan) {
            case 1:
                printf("Mau tambah berapa menu: ");
                scanf("%d", &tambah);
                for (int i = 0; i < tambah; i++) {
                    printf("\nnama menu: ");
                    fflush(stdin);
                    fgets(menu[jumlahmenu].nama, sizeof(menu[jumlahmenu].nama), stdin);
                    menu[jumlahmenu].nama[strcspn(menu[jumlahmenu].nama, "\n")] = '\0';

                    printf("\nharga menu: ");
                    scanf("%d", &menu[jumlahmenu].harga);

                    printf("\nkategori menu (food/drink): ");
                    scanf("%s", menu[jumlahmenu].kategori);
    
                    jumlahmenu++;
                }

                system("cls");
                break;

            case 2:
                if (jumlahmenu > 0) {
                    tampilkanMenu(menu, jumlahmenu);
                } else {
                    printf("Menu kosong.\n");
                }
                break;
            case 3:
                printf("Mau ubah berapa menu: ");
                scanf("%d", &ubah);
                printf("Pilih nomor menu yang ingin diubah: ");
                scanf("%d", &ubahh);
                if (ubahh > 0 && ubahh <= jumlahmenu) {
                    printf("\nEnter the new name of the menu item: ");
                    fflush(stdin);
                    fgets(menu[ubahh - 1].nama, sizeof(menu[ubahh - 1].nama), stdin);
                    menu[ubahh - 1].nama[strcspn(menu[ubahh - 1].nama, "\n")] = '\0';

                    printf("\nEnter the new price of the menu item: ");
                    scanf("%d", &menu[ubahh - 1].harga);

                    printf("\nEnter the new category of the menu item (food/drink): ");
                    scanf("%s", menu[ubahh - 1].kategori);

                    printf("Menu berhasil diubah.\n");
                } else {
                    printf("Nomor menu tidak valid.\n");
                }
                  system("cls");
                break;
            case 4:
                printf("Pilih nomor menu yang ingin dihapus: ");
                scanf("%d", &ubahh);
                if (ubahh > 0 && ubahh <= jumlahmenu) {
                    for (int i = ubahh - 1; i < jumlahmenu - 1; i++) {
                        menu[i] = menu[i + 1];
                    }
                    jumlahmenu--;
                    printf("Menu berhasil dihapus.\n");
                } else {
                    printf("Nomor menu tidak valid.\n");
                }
                  system("cls");
                break;
            case 5:
                fptr = fopen("coba.txt", "w");
                if (fptr != NULL) {
                    masukmenu(fptr, menu, jumlahmenu);
                    fclose(fptr);
                }
                printf("Terima kasih!\n");
                break;

            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    } while (pilihan != 5);

    return 0;
}
