#include <iostream>
#include <string>

using namespace std;

// Deklarasi Struct Node
struct Node {
    string nama;
    int usia;
    Node *next;
};

Node *head = NULL;

// Buat Node Baru
Node* buatNode(string nama, int usia) {
    Node *baru = new Node;
    baru->nama = nama;
    baru->usia = usia;
    baru->next = NULL;
    return baru;
}

// Tambah depan
void insertDepan(string nama, int usia) {
    Node *baru = buatNode(nama, usia);
    baru->next = head;
    head = baru;
}

// Tambah belakang
void insertBelakang(string nama, int usia) {
    Node *baru = buatNode(nama, usia);
    if (head == NULL) {
        head = baru;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = baru;
}

// Tambah Tengah
// Tambah Tengah antara dua nama
void insertTengah(string namaBaru, int usiaBaru, string namaSebelum) {
    Node *baru = buatNode(namaBaru, usiaBaru);
    Node *temp = head;
    while (temp != NULL && temp->nama != namaSebelum) {
        temp = temp->next;
    }
    if (temp != NULL) {
        baru->next = temp->next;
        temp->next = baru;
    } else {
        cout << "Nama sebelumnya tidak ditemukan!" << endl;
    }
}

// Tampilkan seluruh data
void tampilkanDataSebelum() {
    Node *temp = head;
    cout << "Data sebelum diubah:" << endl;
    while (temp != NULL) {
        cout << "Nama: " << temp->nama << ", Usia: " << temp->usia << endl;
        temp = temp->next;
    }
}

// Tampilkan seluruh data setelah semua operasi
void tampilkanData() {
    Node *temp = head;
    cout << "Nama\tUsia" << endl;
    while (temp != NULL) {
        cout << temp->nama << "\t" << temp->usia << endl;
        temp = temp->next;
    }
}

// Hapus data dengan nama tertentu
void hapusData(string nama) {
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL && temp->nama != nama) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Data tidak ditemukan!" << endl;
        return;
    }
    if (prev == NULL) {
        head = temp->next;
    } else {
        prev->next = temp->next;
    }
    delete temp;
}

// Ubah data Michael menjadi Reyn
void ubahData(string nama_lama, string nama_baru, int usia_baru) {
    Node *temp = head;
    while (temp != NULL && temp->nama != nama_lama) {
        temp = temp->next;
    }
    if (temp != NULL) {
        temp->nama = nama_baru;
        temp->usia = usia_baru;
    } else {
        cout << "Data tidak ditemukan!" << endl;
    }
}

int main() {
    string namaInput;
    int usiaInput;
    int pilihan;
    string namaSebelum; // Declare namaSebelum here

    // Memasukkan data pengguna
    cout << "Masukkan nama Anda: ";
    getline(cin, namaInput);
    cout << "Masukkan usia Anda: ";
    cin >> usiaInput;

    // Menampilkan data awal
    insertDepan(namaInput, usiaInput);
    cout << "\nData awal sebelum diubah:" << endl;
    tampilkanData();

    // Menambahkan data mahasiswa lainnya
    insertBelakang("John", 19);
    insertBelakang("Jane", 20);
    insertBelakang("Michael", 18);
    insertBelakang("Yusuke", 19);
    insertBelakang("Akechi", 20);
    insertBelakang("Hoshino", 18);
    insertBelakang("Karin", 18);

    string namaBaru; // Deklarasi variabel di luar switch statement
    string namaAwal;

    do {
        cout << "\nMenu:\n";
        cout << "1. Tambah Data di Awal\n";
        cout << "2. Tambah Data Diantara\n";
        cout << "3. Hapus Data\n";
        cout << "4. Ubah Data\n";
        cout << "5. Tampilkan Data\n";
        cout << "6. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                int usiaAwal;
                cout << "Masukkan Nama untuk Ditambahkan di Awal: ";
                cin.ignore();
                getline(cin, namaAwal);
                cout << "Masukkan Usia untuk Ditambahkan di Awal: ";
                cin >> usiaAwal;
                insertDepan(namaAwal, usiaAwal);
                break;
            case 2:
                cout << "Masukkan Nama: ";
                cin.ignore(); // Clear input buffer
                getline(cin, namaInput);
                namaInput[0] = toupper(namaInput[0]);
                cout << "Masukkan Usia: ";
                cin >> usiaInput;
                cin.ignore(); // Clear newline character from input buffer
                cout << "Masukkan Nama Sebelumnya: ";
                getline(cin, namaSebelum);
                namaSebelum[0] = toupper(namaSebelum[0]);
                insertTengah(namaInput, usiaInput, namaSebelum);
                break;
            case 3:
                cout << "Masukkan Nama yang Ingin Dihapus: ";
                cin.ignore();
                getline(cin, namaInput);
                hapusData(namaInput);
                break;
            case 4:
                cout << "Masukkan Nama yang Ingin Diubah: ";
                cin.ignore();
                getline(cin, namaInput);
                cout << "Masukkan Nama Baru: ";
                getline(cin, namaBaru); // Menghapus cin.ignore()
                cout << "Masukkan Usia Baru: ";
                cin >> usiaInput;
                ubahData(namaInput, namaBaru, usiaInput);
                break;
            case 5:
                cout << "Data saat ini:" << endl;
                tampilkanData();
                break;
            case 6:
                cout << "Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Masukkan pilihan 1-6.\n";
                break;
        }

    } while (pilihan != 6);

    return 0;
}
