#include <iostream>
#include <string>

using namespace std;

struct Buku{
    string judul_buku;  //Atribut
    string pengarang;
    string penerbit;
    int tebal_buku;
    double harga_buku;
}; Buku buku1; Buku buku2; //Variabel

int main(){
    buku1.judul_buku = "Algoritma Pemrograman"; //Memanggil
    buku1.pengarang = "Raden Wardana";
    buku1.penerbit = "Gramedia Pustaka";
    buku1.tebal_buku = 300;
    buku1.harga_buku = 120000;

    buku2.judul_buku = "Kalkulus 2"; //Memanggil
    buku2.pengarang = "Ajeng Kusuma Ayu";
    buku2.penerbit = "Erlangga";
    buku2.tebal_buku = 400;
    buku2.harga_buku = 150000;

    // Menampilkan data buku 1
    cout << "Informasi buku 1" << endl;
    cout << "Judul : " << buku1.judul_buku << endl;
    cout << "Pengarang : " << buku1.pengarang << endl;
    cout << "Penerbit : " << buku1.penerbit << endl;
    cout << "Tebal Halaman : " << buku1.tebal_buku << endl;
    cout << "Harga Buku : " << buku1.harga_buku << endl << endl;

    // Menampilkan data buku 2
    cout << "Informasi buku 2" << endl;
    cout << "Judul : " << buku2.judul_buku << endl;
    cout << "Pengarang : " << buku2.pengarang << endl;
    cout << "Penerbit : " << buku2.penerbit << endl;
    cout << "Tebal Halaman : " << buku2.tebal_buku << endl;
    cout << "Harga Buku : " << buku2.harga_buku << endl;

    return 0;
}