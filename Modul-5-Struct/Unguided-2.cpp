#include <iostream>
#include <string>

using namespace std;

struct Buku {
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_halaman;
    double harga_buku;
};

int main() {

    const int jumlah_buku = 5; // Jumlah buku yang ingin dimasukkan

    // Mendeklarasikan variabel favorit sebagai array dari struktur buku
    Buku buku[jumlah_buku];

    // Mengisi data ke dalam array buku
    buku[0].judul_buku = "Bulan";
    buku[0].pengarang = "Tere Liye";
    buku[0].penerbit = "Gramedia Pustaka Utama";
    buku[0].tebal_halaman = 400;
    buku[0].harga_buku = 95000;

    buku[1].judul_buku = "Harry Potter dan Batu Bertuah";
    buku[1].pengarang = "J.K Rowling";
    buku[1].penerbit = "Gramedia Pustaka Utama";
    buku[1].tebal_halaman = 384;
    buku[1].harga_buku = 102400;

    buku[2].judul_buku = "Dua Garis Biru";
    buku[2].pengarang = "Lucia Priandarini dan Gina S. Noer";
    buku[2].penerbit = "Gramedia Pustaka Utama";
    buku[2].tebal_halaman = 212;
    buku[2].harga_buku = 59000;

    buku[3].judul_buku = "Loving The Wounded Soul";
    buku[3].pengarang = "Regis Machdy";
    buku[3].penerbit = "Gramedia Pustaka Utama";
    buku[3].tebal_halaman = 324;
    buku[3].harga_buku = 88000;

    buku[4].judul_buku = "The Alpha Girls Guide";
    buku[4].pengarang = "Henry Manampiring";
    buku[4].penerbit = "Gramedia Pustaka Utama";
    buku[4].tebal_halaman = 280;
    buku[4].harga_buku = 77000;

    // Menampilkan informasi buku 
    cout << "informasi buku ke-" << 0+1 << ":" << endl;
    cout << "Judul : " << buku[0].judul_buku << endl;
    cout << "Pengarang : " << buku[0].pengarang << endl;
    cout << "Penerbit : " << buku[0].penerbit << endl;
    cout << "Tebal Halaman : " << buku[0].tebal_halaman << endl;
    cout << "Harga Buku : " << buku[0].harga_buku << endl << endl;

    cout << "informasi buku ke-" << 1+1 << ":" << endl;
    cout << "Judul : " << buku[1].judul_buku << endl;
    cout << "Pengarang : " << buku[1].pengarang << endl;
    cout << "Penerbit : " << buku[1].penerbit << endl;
    cout << "Tebal Halaman : " << buku[1].tebal_halaman << endl;
    cout << "Harga Buku : " << buku[1].harga_buku << endl << endl;

    cout << "informasi buku ke-" << 2+1 << ":" << endl;
    cout << "Judul : " << buku[2].judul_buku << endl;
    cout << "Pengarang : " << buku[2].pengarang << endl;
    cout << "Penerbit : " << buku[2].penerbit << endl;
    cout << "Tebal Halaman : " << buku[2].tebal_halaman << endl;
    cout << "Harga Buku : " << buku[2].harga_buku << endl << endl;

    cout << "informasi buku ke-" << 3+1 << ":" << endl;
    cout << "Judul : " << buku[3].judul_buku << endl;
    cout << "Pengarang : " << buku[3].pengarang << endl;
    cout << "Penerbit : " << buku[3].penerbit << endl;
    cout << "Tebal Halaman : " << buku[3].tebal_halaman << endl;
    cout << "Harga Buku : " << buku[3].harga_buku << endl << endl;

    cout << "informasi buku ke-" << 4+1 << ":" << endl;
    cout << "Judul : " << buku[4].judul_buku << endl;
    cout << "Pengarang : " << buku[4].pengarang << endl;
    cout << "Penerbit : " << buku[4].penerbit << endl;
    cout << "Tebal Halaman : " << buku[4].tebal_halaman << endl;
    cout << "Harga Buku : " << buku[4].harga_buku << endl;

    return 0;
}