#include <iostream>
#include <string>

using namespace std;

struct Buku {
    string judul_buku[5];
    string pengarang[5];
    string penerbit[5];
    int tebal_halaman[5];
    double harga_buku[5];
};

int main() {
    Buku buku;

    for (int i = 0; i < 5; i++) {
        cout << "Masukkan informasi buku ke-" << i+1 << ":" << endl;
        cout << "Judul Buku: ";
        cin.ignore(); // Membersihkan newline character sebelum menggunakan getline
        getline(cin, buku.judul_buku[i]);
        cout << "Pengarang: ";
        getline(cin, buku.pengarang[i]);
        cout << "Penerbit: ";
        getline(cin, buku.penerbit[i]);
        cout << "Tebal Halaman: ";
        cin >> buku.tebal_halaman[i];
        cout << "Harga Buku: ";
        cin >> buku.harga_buku[i];
        cout << endl;
    }

    for (int i = 0; i < 5; i++) {
        cout << "Informasi buku " << i+1 << endl;
        cout << "Judul : " << buku.judul_buku[i] << endl;
        cout << "Pengarang : " << buku.pengarang[i] << endl;
        cout << "Penerbit : " << buku.penerbit[i] << endl;
        cout << "Tebal Halaman : " << buku.tebal_halaman[i] << endl;
        cout << "Harga Buku : " << buku.harga_buku[i] << endl << endl;
    }

    return 0;
}