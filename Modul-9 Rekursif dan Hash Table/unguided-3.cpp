#include <iostream>
#include <list>

using namespace std;

// Struktur untuk menyimpan data mahasiswa
struct Mahasiswa {
    string NIM;
    int nilai;
};

// Class untuk hash table
class MahasiswaHashTable {
private:
    static const int tableSize = 10;
    list<Mahasiswa> table[tableSize];

    // Function untuk menghitung hash dari NIM
    int hashFunction(string NIM) {
        int sum = 0;
        for (char ch : NIM) {
          sum += ch;
        }
        return sum % tableSize;
    }

public:
    // Function untuk menambahkan data mahasiswa
    void tambahData(string NIM, int nilai) {
        int index = hashFunction(NIM);
        table[index].push_back({NIM, nilai});
    }

    // Function untuk menghapus data mahasiswa berdasarkan NIM
    void hapusData(string NIM) {
        int index = hashFunction(NIM);
        for (auto it = table[index].begin(); it != table[index].end(); ++it) {
            if (it->NIM == NIM) {
                table[index].erase(it);
                break;
            }
        }
    }

    // Function untuk mencari data mahasiswa berdasarkan NIM
    Mahasiswa* cariByNIM(string NIM) {
        int index = hashFunction(NIM);
        for (auto &mahasiswa : table[index]) {
            if (mahasiswa.NIM == NIM) {
                return &mahasiswa;
            }
        }
        return nullptr;
    }

    // Function untuk mencari data mahasiswa berdasarkan rentang nilai (80 - 90)
    void cariByNilaiRange(int minNilai, int maxNilai) {
        for (int i = 0; i < tableSize; ++i) {
            for (auto &mahasiswa : table[i]) {
                if (mahasiswa.nilai >= minNilai && mahasiswa.nilai <= maxNilai) {
                    cout << "NIM: " << mahasiswa.NIM << ", Nilai: " << mahasiswa.nilai << endl;
                }
            }
        }
    }
};

int main() {
    MahasiswaHashTable hashTable;
    int menu, nilai, minNilai, maxNilai;
    string NIM;

    do {
        cout << "======= Menu =======\n";
        cout << "1. Tambah Data\n";
        cout << "2. Hapus Data\n";
        cout << "3. Cari Data berdasarkan NIM\n";
        cout << "4. Cari Data berdasarkan rentang nilai\n";
        cout << "5. Selesai\n";
        cout << "Pilihan: ";
        cin >> menu;

        switch(menu) {
            case 1:
                cout << "Masukkan NIM: ";
                cin >> NIM;
                cout << "Masukkan nilai: ";
                cin >> nilai;
                hashTable.tambahData(NIM, nilai);
                break;
            case 2:
                cout << "Masukkan NIM untuk hapus: ";
                cin >> NIM;
                hashTable.hapusData(NIM);
                break;
            case 3:
                cout << "Masukkan NIM untuk cari: ";
                cin >> NIM;
                {
                    Mahasiswa* result = hashTable.cariByNIM(NIM);
                    if (result) {
                        cout << "NIM: " << result->NIM << ", Nilai: " << result->nilai << endl;
                    } else {
                        cout << "Data tidak ditemukan" << endl;
                    }
                }
                break;
            case 4:
            {
                do {
                    cout << "Masukkan rentang nilai (min max): ";
                    cin >> minNilai >> maxNilai;
                    
                    if (minNilai > maxNilai) {
                        cout << "Rentang nilai tidak valid. Silakan masukkan rentang yang benar." << endl;
                        continue;
                    }

                    hashTable.cariByNilaiRange(minNilai, maxNilai);

                    char continueSearch;
                    cout << "Apakah Anda ingin melanjutkan pencarian data dalam rentang nilai yang berbeda? (y/n): ";
                    cin >> continueSearch;

                    if (continueSearch != 'y') {
                        break;
                    }

                } while (true);
                break;
            }
            case 5:
                cout << "Keluar dari program\n";
                break;
            default:
                cout << "Pilihan tidak valid\n";
        }
    } while(menu != 5);

    return 0;
}