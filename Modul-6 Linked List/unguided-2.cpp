#include <iostream>
#include <iomanip>

using namespace std;

class Node {
public:
    string namaProduk; // Nama produk
    int harga; // Harga produk
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Fungsi untuk menambahkan produk ke daftar
    void tambah(string namaProduk, int harga) {
        Node* newNode = new Node;
        newNode->namaProduk = namaProduk;
        newNode->harga = harga;
        newNode->prev = nullptr;
        newNode->next = nullptr;

        // Jika daftar kosong, tambahkan node sebagai kepala
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Fungsi untuk menambahkan produk setelah produk tertentu
    void tambahSetelah(string namaProduk, int harga, string namaProdukSebelumnya) {
        Node* current = head;
        while (current != nullptr && current->namaProduk != namaProdukSebelumnya) {
            current = current->next;
        }
        if (current != nullptr) {
            Node* newNode = new Node;
            newNode->namaProduk = namaProduk;
            newNode->harga = harga;
            newNode->prev = current;
            newNode->next = current->next;
            if (current->next != nullptr) {
                current->next->prev = newNode;
            } else {
                tail = newNode;
            }
            current->next = newNode;
        } else {
            cout << "Produk sebelumnya tidak ditemukan" << endl;
        }
    }

    // Fungsi untuk menampilkan daftar produk beserta harga
    void tampilkan() {
        Node* current = head;
        cout << left << setw(20) << "Nama Produk" << "Harga" << endl;
        while (current != nullptr) {
            cout << left << setw(20) << current->namaProduk << right << setw(10) << current->harga << endl;
            current = current->next;
        }
        cout << endl;
    }

    // Fungsi untuk menghapus produk berdasarkan nama
    void hapusBerdasarkanNama(string namaProduk) {
        Node* current = head;
        while (current != nullptr && current->namaProduk != namaProduk) {
            current = current->next;
        }
        if (current != nullptr) {
            if (current->prev != nullptr) {
                current->prev->next = current->next;
            } else {
                head = current->next;
            }
            if (current->next != nullptr) {
                current->next->prev = current->prev;
            } else {
                tail = current->prev;
            }
            delete current;
        } else {
            cout << "Produk tidak ditemukan" << endl;
        }
    }

    // Fungsi untuk mengupdate nama produk dan harga berdasarkan nama produk lama
    bool update(string namaProdukLama, string namaProdukBaru, int hargaBaru) {
        Node* current = head;
        while (current != nullptr) {
            if (current->namaProduk == namaProdukLama) {
                current->namaProduk = namaProdukBaru;
                current->harga = hargaBaru;
                return true;
            }
            current = current->next;
        }
        return false;
    }

    // Fungsi untuk menghapus semua produk dari daftar
    void hapusSemua() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }
};

int main() {
    DoublyLinkedList list;

    // Menambahkan produk awal ke daftar
    list.tambah("Originote", 60000);
    list.tambah("Somethinc", 150000);
    list.tambah("Skintific", 100000);
    list.tambah("Wardah", 50000);
    list.tambah("Hanasui", 30000);

    // Menampilkan produk awal
    cout << "Daftar Produk Awal:" << endl;
    list.tampilkan();

    // Menu operasi
    while (true) {
        cout << "1. Tambah Data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Update Data" << endl;
        cout << "4. Tambah Data Urutan Tertentu" << endl;
        cout << "5. Hapus Data Urutan Tertentu" << endl;
        cout << "6. Hapus Seluruh Data" << endl;
        cout << "7. Tampilkan Data" << endl;
        cout << "8. Exit" << endl;

        int pilihan;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                string namaProduk;
                int harga;
                cout << "Masukkan nama produk: ";
                cin >> namaProduk;
                cout << "Masukkan harga: ";
                cin >> harga;
                list.tambah(namaProduk, harga);
                break;
            }
            case 2: {
                string namaProduk;
                cout << "Masukkan nama produk yang ingin dihapus: ";
                cin >> namaProduk;
                list.hapusBerdasarkanNama(namaProduk);
                break;
            }
            case 3: {
                string namaProdukLama, namaProdukBaru;
                int hargaBaru;
                cout << "Masukkan nama produk yang ingin diupdate: ";
                cin >> namaProdukLama;
                cout << "Masukkan nama produk baru: ";
                cin >> namaProdukBaru;
                cout << "Masukkan harga baru: ";
                cin >> hargaBaru;
                bool berhasil = list.update(namaProdukLama, namaProdukBaru, hargaBaru);
                if (!berhasil) {
                    cout << "Data tidak ditemukan" << endl;
                }
                break;
            }
            case 4: {
                string namaProduk, namaProdukSebelumnya;
                int harga;
                cout << "Masukkan nama produk yang ingin ditambahkan: ";
                cin >> namaProduk;
                cout << "Masukkan harga: ";
                cin >> harga;
                cout << "Masukkan nama produk sebelumnya: ";
                cin >> namaProdukSebelumnya;
                list.tambahSetelah(namaProduk, harga, namaProdukSebelumnya);
                break;
            }
            case 5: {
                string namaProduk;
                cout << "Masukkan nama produk yang ingin dihapus: ";
                cin >> namaProduk;
                list.hapusBerdasarkanNama(namaProduk);
                break;
            }
            case 6: {
                list.hapusSemua();
                break;
            }
            case 7: {
                list.tampilkan();
                break;
            }
            case 8: {
                return 0;
            }
            default: {
                cout << "Pilihan tidak valid" << endl;
                break;
            }
        }
    }

    return 0;
}
