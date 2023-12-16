#include <stdio.h>
#include <string.h>
struct Barang {
    int id;
    char nama[100];
    int harga;
    int jumlah;
};
int main() {
    struct Barang daftar_barang[10] = {
        {1, "ORICO 4 Port Usb Hub 3.0", 53000},
        {2, "ORICO 7 Port USB Hub 3.0", 76000},
        {3, "ORICO 3 Port Charger 65W Type C", 70000},
        {4, "ORICO USB 2.0 Micro B 1.5M", 32000},
        {5, "ORICO USB 3.1 Type C 1.5M", 47000},
        {6, "Vention Kabel HDMI v2.0 1M", 57000},
        {7, "Vention Kabel HDMI v2.0 2M", 72000},
        {8, "Keyboard Votre KB2308 USB", 22000},
        {9, "Uticon Stop Kontak 6 lubang", 82000},
        {10, "Samsung SSD 860 EVO 250 GB", 97000}
    };
    int kode_barang, jumlah, total_bayar = 0, uang, kembalian;
    char beli_lagi;
    printf("Selamat Datang Di Toko Koh Afuk!\n");
    printf("---------------------------------------------------------\n");
    printf("| ID   | Nama Barang                     | Harga Barang |\n");
    printf("|------|---------------------------------|--------------|\n");
    for (int i = 0; i < 10; i++) {
        printf("| %d.   | %-30s | Rp. %-8d |\n", daftar_barang[i].id, daftar_barang[i].nama, daftar_barang[i].harga);
    }
    printf("---------------------------------------------------------\n");
    do {
        printf("\nMasukkan Kode Belanjaan Anda: ");
        scanf("%d", &kode_barang);
        if (kode_barang >= 1 && kode_barang <= 10) {
            printf("nama barang :%-30s ",daftar_barang[kode_barang -1 ].nama);
            printf("Jumlah Pembelian Item: ");
            scanf("%d", &jumlah);
            daftar_barang[kode_barang - 1].jumlah += jumlah;
            total_bayar += daftar_barang[kode_barang - 1].harga * jumlah;
            printf("Beli Lagi? (y/n): ");
            scanf(" %c", &beli_lagi);
        } else {
            printf("Kode barang tidak valid. Silakan coba lagi.\n");
            beli_lagi = 'y';
        }
    } while (beli_lagi == 'y' || beli_lagi == 'Y');
    printf("\n| Struk Belanja\n");
    printf("| -------------\n");
    printf("| Daftar barang :\n");
    for (int i = 0; i < 10; i++) {
        if (daftar_barang[i].jumlah > 0) {
            printf("| - %dx %s\n", daftar_barang[i].jumlah, daftar_barang[i].nama);
        }
    }
    printf("|\n");
    printf("| Total yang harus dibayar: Rp. %d,-\n", total_bayar);
    do {
        printf("| Uang Anda : Rp. ");
        scanf("%d", &uang);
        if (uang < total_bayar) {
            printf("Uangnya Anda Kurang!\n");
        }
    } while (uang < total_bayar);
    kembalian = uang - total_bayar;
    printf("| Kembalian : Rp. %d\n", kembalian);
    printf("\nTekan enter untuk menutup program\n");
    getchar(); 

}
