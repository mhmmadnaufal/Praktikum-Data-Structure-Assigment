#include <iostream>
using namespace std;

// Definisi struct untuk Mahasiswa
struct MahasiswaStruct {
    string nama;
    int umur;
    float ipk;
};

// Definisi class untuk Mahasiswa
class MahasiswaClass {
private:
    string nama;
    int umur;
    float ipk;

public:
    // Constructor untuk inisialisasi data mahasiswa
    MahasiswaClass(string _nama, int _umur, float _ipk) {
        nama = _nama;
        umur = _umur;
        ipk = _ipk;
    }

    // Metode untuk menampilkan informasi mahasiswa
    void display() {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "IPK: " << ipk << endl;
    }
};

int main() {
    // Menggunakan struct MahasiswaStruct
    MahasiswaStruct mhsStruct;
    mhsStruct.nama = "Budi";
    mhsStruct.umur = 20;
    mhsStruct.ipk = 3.75;

    cout << "=== Mahasiswa menggunakan Struct ===" << endl;
    cout << "Nama: " << mhsStruct.nama << endl;
    cout << "Umur: " << mhsStruct.umur << endl;
    cout << "IPK: " << mhsStruct.ipk << endl << endl;

    // Menggunakan class MahasiswaClass
    MahasiswaClass mhsClass("Budi", 20, 3.75);

    cout << "=== Mahasiswa menggunakan Class ===" << endl;
    mhsClass.display();

    return 0;
}