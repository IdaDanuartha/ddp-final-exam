#include <iostream>
#include <string>

using namespace std;

// Struktur untuk merepresentasikan data barang
struct Barang {
    string kode;
    string nama;
    double harga;
    int stok;
};

// Fungsi untuk menampilkan data barang
void tampilkanData(const Barang data[], int jumlah) {
    cout << "Daftar Barang:\n";
    cout << "---------------------------------\n";
    cout << "| Kode | Nama Barang | Harga | Stok |\n";
    cout << "---------------------------------\n";
    for (int i = 0; i < jumlah; ++i) {
        cout << "| " << data[i].kode << " | " << data[i].nama << " | " << data[i].harga << " | " << data[i].stok << " |\n";
    }
    cout << "---------------------------------\n";
}

int main() {
    const int jumlahBarang = 3; // Jumlah barang yang ingin diinputkan
    Barang dataBarang[jumlahBarang] = {
        {"B001", "Laptop", 800.0, 5},
        {"B002", "Smartphone", 400.0, 8},
        {"B003", "Printer", 200.0, 3}
    };

    tampilkanData(dataBarang, jumlahBarang);

    string kodePilihan;
    cout << "Masukkan kode barang yang ingin dibeli: ";
    cin >> kodePilihan;

    bool barangDitemukan = false;
    for (int i = 0; i < jumlahBarang; ++i) {
        if (dataBarang[i].kode == kodePilihan) {
            barangDitemukan = true;

            if (dataBarang[i].stok > 0) {
                // Mengurangi stok dan menampilkan informasi pembelian
                dataBarang[i].stok--;
                double totalHarga = dataBarang[i].harga;
                cout << "Anda telah membeli " << dataBarang[i].nama << " seharga $" << dataBarang[i].harga << ".\n";
                cout << "Sisa stok: " << dataBarang[i].stok << "\n";
                cout << "Total Harga: $" << totalHarga << "\n";
            } else {
                cout << "Maaf, stok barang " << dataBarang[i].nama << " habis.\n";
            }

            break; // Keluar dari loop setelah barang ditemukan
        }
    }

    if (!barangDitemukan) {
        cout << "Barang dengan kode " << kodePilihan << " tidak ditemukan.\n";
    }

    return 0;
}