#include <stdio.h>

int main(){

    int kodebarang,jumlahbeli,total,jumlahuang;
    // int diskon=50;
    char namabarang [30];
    float hargasatuan,subtotal,diskon,kembalian;




    printf ("masukkan kode barang:",kodebarang);
    scanf ("%d",&kodebarang);
    printf("masukan nama barang:",namabarang);
    scanf("%s[^\n]",&namabarang);
    printf("masukkan harga satuan:",hargasatuan);
    scanf ("%f",&hargasatuan);
    printf ("masukkan jumlah beli: ",jumlahbeli);
    scanf ("%d",&jumlahbeli);
    printf ("masukkan diskon:",diskon);
    scanf ("%f",&diskon);
    subtotal= hargasatuan * jumlahbeli;
    diskon = diskon/100 * subtotal;
    total =  subtotal - diskon;
    
    printf (" subtotal:%.2f \n",subtotal);
    printf (" total:%d \n",total);
    // scanf ("%f",&total);
    printf ("masukkan jumlah uang: ",jumlahuang);
    scanf ("%d",&jumlahuang);
    kembalian= jumlahuang - total;

    printf ("kembalian: %2.f",kembalian);








//printf ("deo suka makan buah");

}