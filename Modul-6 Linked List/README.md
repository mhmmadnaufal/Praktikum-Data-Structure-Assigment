# <h1 align="center">Laporan Praktikum Modul Linked List</h1>
<p align="center">Muhammad Naufal | 2311110034</p>

## Dasar Teori

Linked list adalah suatu bentuk struktur data yang berupa sekumpulan elemen data yang bertipe sama dimana tiap elemen saling berkaitan atau dihubungkan dengan elemen lain melalui suatu pointer. Pointer itu sendiri adalah  alamat elemen data yang tersimpan di memori. Penggunaan pointer untuk  mengacu elemen berakibat elemen-elemen bersebelahan secara logik walau tidak bersebelahan  secara fisik di memori. Pada praktiknya sebuah struktur data memiliki elemen yang digunakan untuk saling menyimpan rujukan antara satu dengan lainnya sehingga membentuk sebuah daftar abstrak, tiap-tiap elemen yang terdapat pada daftar abstrak ini seringkali disebut sebagai node. karena mekanisme rujukan yang saling terkait inilah disebut sebagai daftar berantai [1]. Linked list terdiri dari node-node (simpul-simpul) yang saling terhubung(linked). Simpul berupa struct, sedangkan link berupa komponen yang bertipe pointer ke simpul. Ada dua jenis pointer yang digunakan, yaitu head(menunjukkan alamat pointer paling  depan) dan tail(menunjukkan simpul terakhir). Operasi penambahan atau penghapusan  sebuah  simpul  akan  mengubah nilai pointer linknya.Sedangkan pointer link di simpul terkahir diberi nilai null [3].

### 1. Single Linked List

Single Linked List adalah sekumpulan dari node yang saling terhubung dengan node lain melalui sebuah pointer.Single Linked List hanya memiliki satu arah [2]. Pointer adalah alamat elemen. Masing-masing komponen sering disebut dengan simpul atau node atau verteks. Dapat dikatakan bahwa Single Linked list merupakan Daftar terhubung yang setiap simpul pembentuknya mempunyai satu rantai(link) ke simpul lainnya. Setiap simpul pada dasarnya dibagi atas dua bagian pertama disebut bagian isi atau informasi atau data yang berisi nilai yang disimpan oleh simpul. Bagian kedua disebut bagian pointer yang berisi alamat dari node berikutnya atau sebelumnya. Linked list dibentuk dengan cara menunjuk pointer next suatu elemen ke elemen yang mengikutinya. Pointer next pada elemen terakhir merupakan NULL, yang menunjukkan akhir dari suatu list. Elemen pada awal suatu list disebut head dan elemen terakhir dari suatu list disebut tail. Pembentukan linked list tunggal memerlukan : <br>

1. deklarasi tipe simpul
2. deklarasi variabel pointer penunjuk awal Linked list
3. pembentukan simpul baru
4. pengaitan simpul baru ke Linked list yang telah terbentuk <br>

Ada beberapa operasi yang dapat dibuat pada senarai tersebut, diantaranya: tambah, hapus, update, penelusuran, dan edit. berikut penjelasannya : <br> 

- Insertion (Penambahan): Penambahan elemen dapat dilakukan di awal, tengah, atau akhir linked list. 
- Deletion (Penghapusan): Penghapusan elemen dapat dilakukan dari awal, tengah, atau akhir linked list.
- Traversal (Penelusuran): Menelusuri setiap elemen dari awal hingga akhir linked list.
- Searching (Pencarian): Mencari elemen tertentu dalam linked list.
- Update (Pembaruan): Memperbarui nilai dari elemen tertentu dalam linked list. <br>

Ada beberapa jenis linked list yang dapat  di  proses  :  
- single linked list
- double linked list
- Single circular linked  list
- double circular linked list.

### 2. Double Linked List

Double Linked List merupakan linked list dengan menggunakan pointer, dimana setiap node memiliki tiga buah field, yaitu: field pointer yang menunjuk ke pointer berikutnya, field pointer yang menunjuk ke pointer sebelumnya dan field yang berisi data dari node tersebut. Semenatara pointer next dan prev-nya menunjuk ke null [3]. Pada dasarnya, penggunaan Double Linked List hampir sama dengan penggunaan Single Linked List. Hanya saja Double Linked List menerapkan sebuah pointer baru, yaitu prev, yang digunakan untuk menggeser mundur selain tetap mempertahankan pointer next [4]. Dengan adanya pointer prev, Double Linked List memungkinkan untuk melakukan operasi penghapusan dan penambahan pada simpul mana saja secara efisien. Setiap simpul pada Double Linked List memiliki tiga elemen penting, yaitu elemen data (biasanya berupa nilai), pointer next yang menunjuk ke simpul berikutnya, dan pointer prev yang menunjuk ke simpul sebelumnya.

a. Keberadaan 2 pointer penunjuk (next dan prev) menjadikan Double Linked List menjadi lebih fleksibel dibandingkan Single Linked List, namun dengan mengorbankan adanya memori tambahan dengan adanya pointer tambahan tersebut. <br>
b. Ada 2 jenis Double Linked List, yaitu: Double Linked List Non Circular dan Double Linked List Circular

## Guided 

### 1. Latihan Single Linked List 

```C++ 
#include <iostream>
using namespace std;

///PROGRAM SINGLE LINKED LIST NON-CIRCULAR
//Deklarasi Struct Node
struct Node{
    //komponen/member
    int data;
    Node *next;
};
    Node *head;
    Node *tail;
//Inisialisasi Node
void init(){
    head = NULL;
    tail = NULL;
}
// Pengecekan
bool isEmpty(){
    if (head == NULL)
    return true;
    else
    return false;
}
//Tambah Depan
void insertDepan(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
        baru->next = head;
        head = baru;
    }
}
//Tambah Belakang
void insertBelakang(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
    tail->next = baru;
    tail = baru;
    }
}
//Hitung Jumlah List
int hitungList(){
    Node *hitung;
    hitung = head;
    int jumlah = 0;
    while( hitung != NULL ){
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}
//Tambah Tengah
void insertTengah(int data, int posisi){
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        Node *baru, *bantu;
        baru = new Node();
        baru->data = data;
        // tranversing
            bantu = head;
            int nomor = 1;
        while( nomor < posisi - 1 ){
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}
//Hapus Depan
void hapusDepan() {
    Node *hapus;
    if (isEmpty() == false){
        if (head->next != NULL){
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Belakang
void hapusBelakang() {
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false){
        if (head != tail){
            hapus = tail;
            bantu = head;
            while (bantu->next != tail){
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
        delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Tengah
void hapusTengah(int posisi){
    Node *hapus, *bantu, *bantu2;
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        int nomor = 1;
        bantu = head;
        while( nomor <= posisi ){
            if( nomor == posisi-1 ){
                bantu2 = bantu;
            }
            if( nomor == posisi ){
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
    delete hapus;
    }
}
//Ubah Depan
void ubahDepan(int data){
    if (isEmpty() == false){
        head->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Tengah
void ubahTengah(int data, int posisi){
    Node *bantu;
    if (isEmpty() == false){
        if( posisi < 1 || posisi > hitungList() ){
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if( posisi == 1){
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else{
            bantu = head;
            int nomor = 1;
            while (nomor < posisi){
                bantu = bantu->next;nomor++;
            }
            bantu->data = data;
        }
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Belakang
void ubahBelakang(int data){
    if (isEmpty() == false){
        tail->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Hapus List
void clearList(){
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL){
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}
//Tampilkan List
void tampil(){
    Node *bantu;
    bantu = head;
    if (isEmpty() == false){
        while (bantu != NULL){
            cout << bantu->data << ends;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
int main(){
    init();
    insertDepan(3);
    tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();
    hapusDepan();
    tampil();
    hapusBelakang();
    tampil();
    insertTengah(7,2);
    tampil();
    hapusTengah(2);
    tampil();
    ubahDepan(1);
    tampil();
    ubahBelakang(8);
    tampil();
    ubahTengah(11, 2);
    tampil();

    insertTengah(7,1);
    tampil();
    return 0;
}
```
#### Output

![Screenshot (680)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/81ce6ce6-54c2-4cef-bbe7-2fdb6a511ddd)

Codingan diatas merupakan implementasi dari single linked list non-circular dalam bahasa pemrograman C++. Single linked list adalah struktur data yang terdiri dari sejumlah simpul/node yang saling terhubung satu arah. Dalam implementasi ini, setiap simpul memiliki dua bagian utama yaitu data (nilai yang disimpan) dan pointer next (pointer yang menunjuk ke simpul selanjutnya). Program ini menyediakan fungsi-fungsi dasar seperti penambahan elemen di depan, di belakang, di tengah, penghapusan elemen, perubahan nilai elemen, serta penampilan isi dari linked list. <br>

Fungsi `insertDepan`, `insertBelakang`, dan `insertTengah` digunakan untuk menambahkan elemen ke dalam linked list sesuai dengan posisi yang diinginkan. Sedangkan fungsi `hapusDepan`, `hapusBelakang`, dan `hapusTengah` digunakan untuk menghapus elemen dari linked list. Selain itu, terdapat juga fungsi `ubahDepan`, `ubahBelakang`, dan `ubahTengah` yang digunakan untuk mengubah nilai dari elemen di depan, belakang, atau di tengah linked list. Terakhir, fungsi `tampil` digunakan untuk menampilkan isi dari linked list ke layar. 

### 2. Latihan Double Linked List

```C++
#include <iostream>
using namespace std;

class Node {
    public:int data;
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
    void push(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        } 
        else {
            tail = newNode;
        }
        head = newNode;
    }
    void pop() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } 
        else {
            tail = nullptr;
        }
        delete temp;
    }
    bool update(int oldData, int newData) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == oldData) {
                current->data = newData;
                return true;
            }
            current = current->next;
        }
        return false;
    }
    void deleteAll() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};


int main() {
    DoublyLinkedList list;
    while (true) {
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int data;
                cout << "Enter data to add: ";
                cin >> data;
                list.push(data);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;
                bool updated = list.update(oldData, newData);
                if (!updated) {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4: {
                list.deleteAll();
                break;
            }
            case 5: {
                list.display();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}
```

#### Output

![Screenshot (681)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/eaa2a1e3-9d5a-409b-9b23-700c9f35f830)

![Screenshot (682)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/1d782ca6-f68c-4b50-ba5c-36aad4515133)

Kode diatas merupakan implementasi dari double linked list dalam bahasa pemrograman C++. Double linked list adalah struktur data yang terdiri dari simpul-simpul yang saling terhubung dengan dua pointer, yaitu pointer yang menunjuk ke simpul sebelumnya (prev) dan pointer yang menunjuk ke simpul selanjutnya (next). Dalam implementasi ini, terdapat kelas `Node` yang merepresentasikan simpul dalam double linked list dengan atribut data, prev, dan next. Selain itu, terdapat kelas `DoublyLinkedList` yang berisi fungsi-fungsi untuk manipulasi data seperti menambah data di depan (push), menghapus data dari depan (pop), memperbarui data (update), menghapus semua data (deleteAll), dan menampilkan isi dari double linked list (display). <br>

Di dalam fungsi `main`, program memberikan opsi kepada pengguna untuk melakukan berbagai operasi pada double linked list seperti menambah data, menghapus data, memperbarui data, menghapus semua data, dan menampilkan data. Pengguna diminta untuk memasukkan pilihan operasi yang diinginkan, dan sesuai dengan pilihan yang dimasukkan, program akan menjalankan fungsi yang sesuai. Dengan adanya loop while yang terus berjalan hingga pengguna memilih untuk keluar, program memberikan interaksi yang interaktif kepada pengguna untuk memanipulasi dan melihat isi dari doubly linked list sesuai dengan kebutuhan. Dengan demikian, kode ini merupakan contoh implementasi sederhana dari doubly linked list dengan fitur-fitur dasar yang dapat membantu dalam memahami konsep struktur data tersebut.

## Unguided 

### 1. Soal Mengenai Linked List

```C++
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
```
#### Output:

![Screenshot (683)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/29f5c9cf-25fe-47e4-8fac-d465f6a23f5b)

![Screenshot (684)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/46daa6c2-9542-48fb-97f3-84ab70bafc4c)

![Screenshot (685)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/72cdd8af-4b4d-411d-b1b4-f4a94ddee21e)

![Screenshot (686)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/eac548cb-a756-4f8f-861a-9e3c9e42a21b)

Codingan diatas merupakan implementasi dari linked list sederhana dengan struktur data berupa node yang menyimpan informasi nama dan usia. Program ini memungkinkan pengguna untuk melakukan berbagai operasi seperti menambah data di awal, di tengah, atau di akhir, menghapus data berdasarkan nama, mengubah data berdasarkan nama, serta menampilkan seluruh data yang telah dimasukkan. Terdapat fungsi-fungsi seperti `buatNode` untuk membuat node baru, `insertDepan` untuk menambahkan node di awal linked list, `insertBelakang` untuk menambahkan node di akhir linked list, `insertTengah` untuk menambahkan node di antara dua node tertentu, `hapusData` untuk menghapus node berdasarkan nama, dan `ubahData` untuk mengubah data node berdasarkan nama.

Di dalam fungsi `main`, program meminta pengguna untuk memasukkan nama dan usia awal, kemudian menampilkan data awal sebelum dilakukan operasi apapun. Selanjutnya, program menambahkan beberapa data mahasiswa ke dalam linked list sebagai contoh. Pengguna diberikan pilihan menu untuk melakukan operasi tambah data di awal, di tengah, hapus data, ubah data, tampilkan data, atau keluar dari program. Pengguna dapat memasukkan pilihan menu sesuai dengan kebutuhan, dan program akan menjalankan fungsi yang sesuai dengan pilihan tersebut. Loop `do-while` digunakan untuk terus menampilkan menu hingga pengguna memilih untuk keluar dari program. Dengan demikian, kode ini memberikan fitur interaktif untuk pengguna dalam manipulasi dan penampilan data dalam linked list.

### 2. Soal Mengenai Double Linked List


```c++
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
```
#### output

![Screenshot (675)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/b4066f96-cfd8-4401-8747-a94a76815cb5)

![Screenshot (676)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/409598a5-d9f7-47d1-b9fb-c00b89eed6a1)

![Screenshot (677)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/092c05d1-ed75-45eb-9ab8-05fad2479a02)

Kode yang diberikan merupakan implementasi dari doubly linked list yang digunakan untuk menyimpan daftar produk beserta harga. Setiap node dalam linked list memiliki atribut nama produk dan harga, serta pointer ke node sebelumnya dan node selanjutnya. Kelas `DoublyLinkedList` memiliki metode untuk menambah produk ke daftar, menambah produk setelah produk tertentu, menampilkan seluruh produk beserta harganya, menghapus produk berdasarkan nama, mengupdate data produk berdasarkan nama produk lama, dan menghapus seluruh produk dari daftar. Di dalam fungsi `main`, program membuat objek `DoublyLinkedList` dan menambahkan beberapa produk awal ke dalam linked list sebagai contoh. Program kemudian menampilkan produk awal dan memberikan menu operasi kepada pengguna seperti menambah data, menghapus data, mengupdate data, menambah data pada posisi tertentu, menghapus data pada posisi tertentu, menghapus seluruh data, menampilkan data, dan keluar dari program.

Pengguna diminta untuk memasukkan pilihan menu yang diinginkan, seperti menambah produk baru, menghapus produk berdasarkan nama, mengupdate data produk, menambah produk setelah produk tertentu, menghapus produk berdasarkan nama, menghapus seluruh produk, menampilkan seluruh produk, atau keluar dari program. Setiap pilihan menu memiliki implementasi yang sesuai di dalam `switch case`, di mana program akan menjalankan operasi yang dipilih oleh pengguna. Misalnya, jika pengguna memilih untuk menambah data, program akan meminta nama produk dan harganya, lalu menambahkan produk baru ke dalam linked list. Dengan demikian, kode ini memberikan fitur interaktif untuk manipulasi dan penampilan data produk dalam doubly linked list.

## Kesimpulan

Kesimpulannya, linked list adalah sebuah kumpulan node yang membentuk urutan linier yang elemen-elemen datanya menunjuk ke node berikutnya dengan menggunakan sebuah pointer, biasanya menggunakan 'next' ke node berikutnya dalam sebuah daftar. Terdapat beberapa jenis linked list, linked list non circular yaitu struktur data dinamis terdiri dari node-node yang saling terhubung dengan bantuan sebuah pointer, linked list circular yaitu struktur data yang terdiri dari elemen-elemen yang saling terhubung melalui pointer dan elemen terakhirnya mengarah kembali ke alemen pertama sehingga membentuk sebuah lingkaran, single linked list yaitu setiap node berisi sejumlah data yang hanya satu pointer mengarah pada node berikutnya, dan double linked list adalah struktur data linear terdiri dari node yang saling terhubung dan setiap node memiliki tiga elemen yaitu data, pointer prev, dan pointer next. 

Selain itu, linked list juga memiliki kelebihan dan kelemahan. Kelebihannya termasuk kemampuan untuk menambah dan menghapus elemen dengan cepat tanpa perlu melakukan realokasi memori, serta fleksibilitas dalam mengelola data yang dapat berubah secara dinamis. Namun, kelemahan linked list antara lain adalah akses acak yang lebih lambat dibandingkan dengan array karena memerlukan traversal dari awal hingga elemen yang diinginkan, serta penggunaan memori tambahan untuk menyimpan pointer yang menghubungkan node-node tersebut. Selain itu, penggunaan linked list juga memerlukan penanganan khusus untuk menghindari masalah seperti loop tak terbatas atau kebocoran memori yang dapat terjadi jika tidak dikelola dengan baik. Dengan pemahaman yang baik tentang jenis-jenis linked list dan karakteristiknya, pengguna dapat memilih struktur data yang sesuai dengan kebutuhan dan kompleksitas dari data yang akan diolah.

## Referensi
[1] A. Arraffi, “PENGERTIAN LINIER DALAM STRUKTUR DATA MAJEMUK”, Mar 2019. [Online]. Available: osf.io/sczvp. <br>
[2] A. k . Putra, “Single linked list”, 2019. <br>
[3] Johnson Sihombing, “PENERAPAN STACK DAN QUEUE PADA ARRAY DAN LINKED LIST DALAM JAVA”, INFOKOM, vol. 7, no. 2, pp. 15-24, Dec. 2019. <br>
[4] Triase, Triase. "Struktur Data: Diktat Edisi Revisi." (2020). <br>
