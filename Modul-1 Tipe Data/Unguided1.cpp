#include <iostream>
using namespace std;

// Fungsi untuk menghitung keliling persegi
int hitungKelilingPersegi(int sisi) {
    return 4 * sisi;
}

// Fungsi untuk menghitung volume kubus
double hitungVolumeKubus(double sisi) {
    return sisi * sisi * sisi;
}

int main() {
    char pilihanMenu; // Variabel yang digunakan untuk memproses menu pilihan user
    int ukuranSisi; // Variabel untuk menampung data input dari user
    double sisi; // Variabel untuk menampung data input dari user

    // Menampilkan menu pilihan
    cout << "1. Hitung Keliling Persegi\n2. Hitung Volume Kubus\nPilih Menu (1, 2): ";
    cin >> pilihanMenu;

    switch (pilihanMenu) {
    case '1':
        cout << "Masukkan panjang sisi persegi: ";
        cin >> ukuranSisi;
        // Menampilkan hasil perhitungan luas persegi
        cout << "Keliling Persegi dengan sisi " << ukuranSisi << " adalah: " << hitungKelilingPersegi(ukuranSisi) << endl;
        break;
    case '2':
        cout << "Masukkan Sisi Kubus: " << endl;
        cout << "Sisi: ";
        cin >> sisi;
        
        // Menampilkan hasil perhitungan volume balok
        cout << "Volume Kubus dengan Sisi " << sisi << " adalah: "
             << hitungVolumeKubus(sisi) << endl;
        break;
    default:
        cout << "Menu Tidak Ada";
    }

    return 0;
}


