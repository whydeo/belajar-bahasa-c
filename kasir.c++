#include <iostream>
#include <vector>

using namespace std;

// Deklarasi struktur untuk item
struct Item {
    string name;
    double price;
};

int main() {
    vector<Item> items;  
    char choice;

    do {
        
        cout << "=== Sistem Kasir ===" << endl;
        cout << "1. Tambah Item" << endl;
        cout << "2. Keluar" << endl;
        cout << "Pilihan Anda: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                Item newItem;
                cout << "Masukkan nama item: ";
                cin >> newItem.name;
                cout << "Masukkan harga item: ";
                cin >> newItem.price;
                items.push_back(newItem);  
                break;
            }
            case '2':
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }
    } while (choice != '2');

    // Menghitung total harga
    double total = 0.0;
    cout << "\n=== Struk Belanja ===" << endl;
    for (const Item& item : items) {
        cout << item.name << ": Rp " << item.price << endl;
        total += item.price;
    }
    cout << "Total Harga: Rp " << total << endl;

    // Meminta pembayaran dari pelanggan
    double payment;
    cout << "Masukkan jumlah pembayaran: Rp ";
    cin >> payment;

    // Menghitung dan menampilkan kembalian
    if (payment < total) {
        cout << "Pembayaran kurang. Transaksi dibatalkan." << endl;
    } else {
        double change = payment - total;
        cout << "Kembalian: Rp " << change << endl;
        cout << "Terima kasih telah berbelanja!" << endl;
    }

//     return 0;
}
