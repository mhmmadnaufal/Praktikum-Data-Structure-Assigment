# <h1 align="center">Laporan Praktikum Modul Rekursif dan Hash Table</h1>
<p align="center">Muhammad Naufal | 2311110034 | SD-04B</p>

## Dasar Teori

### Rekursif

#### Definisi

Rekursif adalah sub program yang memanggil dirinya sendiri selama kondisi pemanggilan dipenuhi. Pemanggilan diri sendiri dalam fungsi rekursif memungkinkan penyelesaian permasalahan secara berulang hingga mencapai kondisi berhenti yang disebut sebagai base case. Rekursif umumnya dipakai untuk permasalahan yang memiliki langkah penyelesaian yang terpola atau langkah-langkah yang  teratur. Bila ada suatu permasalahan dan sudah diketahui algoritma penyelesaiannya, maka sub program rekursif dapat menjadi pilihan untuk digunakan [1].  Dalam definisi lain, Niclaus Wirth mengatakan jika sesuatu itu akan disebut rekursif apabila ia Sebagian terdiri atau didefinisikan dalam dirinya sendiri [2]. 

#### Jenis jenis rekursi

- Rekursi langsung : Jenis rekursi ini terjadi ketika suatu fungsi memanggil dirinya sendiri secara langsung untuk menyelesaikan suatu tugas. Jenis rekursi ini cukup mudah dan bisa sangat membantu dalam memecahkan masalah yang kompleks.

- Rekursi tidak langsung : Jenis rekursi ini terjadi ketika dua fungsi saling memanggil berulang kali untuk menyelesaikan tugasnya masing-masing. Hal ini dapat dilihat pada banyak algoritma dan pembuktian matematis, serta pada banyak program komputer.

- Rekursi ekor : Dalam jenis rekursi ini, panggilan Rekursif ekor hanya melibatkan satu pemanggilan panggilan rekursif dan kemudian segera mengembalikan hasilnya tanpa pemrosesan atau perhitungan lebih lanjut. Panggilan rekursif tail sangat berguna karena tidak memerlukan frame tumpukan tambahan dan dapat membantu menjaga penggunaan memori tetap terkendali sambil tetap memberikan semua manfaat rekursi reguler.

#### Kelebihan dan kekurangan

Kelebihan Fungsi Rekursif adalah program menjadi lebih singkat. Pada beberapa kasus, lebih mudah menggunakan fungsi rekursif, contohnya: pangkat, factorial, dan fibonacci, dan beberapa proses deret lainnya. Fungsi rekursif lebih efisien dan cepat dibandingkan proses secara iteratif. Kekurangan Fungsi Rekursif adalah memakan memori lebih besar, karena setiap bagian dari dirinya dipanggil, akan membutuhkan sejumlah ruang memori untuk penyimpanan. Rekursif sering kali tidak bisa berhenti sehingga memori akan terpakai habis dan program bisa hang.

### Hash Table

#### Pengertian Hash Table

Hash Table adalah sebuah struktur data yang terdiri atas sebuah tabel dan fungsi yang bertujuan untuk memetakan nilai kunci yang unik untuk setiap record (baris) menjadi angka (hash) lokasi record tersebut dalam sebuah tabel. Keunggulan dari struktur hash

table ini adalah waktu aksesnya yang cukup cepat, jika record yang dicari langsung berada pada angka hash lokasi penyimpanannya. Akan tetapi pada kenyataannya sering sekali ditemukan hash table yang record-recordnya mempunyai angka hash yang sama (bertabrakan). Karena pemetaan hash function yang digunakan bukanlah pemetaan satusatu, (antara dua record yang tidak sama dapat dibangkitkan angka hash yang sama) maka dapat terjadi bentrokan (collision) dalam penempatan suatu data record. Untuk mengatasi hal ini, maka perlu diterapkan kebijakan resolusi bentrokan (collision resolution policy) untuk menentukan lokasi record dalam tabel. Umumnya kebijakan resolusi bentrokan adalah dengan mencari lokasi tabel yang masih kosong pada lokasi setelah lokasi yang berbentrokan.

Hashing adalah transformasi aritmetika sebuah string dari karakter menjadi nilai yang merepresentasikan string aslinya. Menurut bahasanya, hash berarti memenggal dan kemudian menggabungkan. Hashing digunakan sebagai metode untuk menyimpan data dalam sebuah larik (array) agar penyimpanan data, pencarian data, penambahan data, dan penghapusan data dapat dilakukan dengan cepat [3]. Dasar proses dalam metode hashing adalah dengan menghitung posisi record yang dicari di dalam array dan bukan membandingkan record denga nisi pada array. Hal ini yang membuat proses hashing dapat mempercepat dalam proses pencarian data. Fungsi yang mengembalikan nilai atau kunci disebuah fungsi hash (hash function) dan array yang digunakan disebut tabel hash (hash table). Ide dasarnya adalah menghitung posisi record yang dicari dalam larik, bukan membandingkan record dengan isi pada larik. Fungsi yang mengembalikan nilai atau kunci disebut fungsi hash dan larik yang digunakan disebut tabel hash. Secara teori, kompleksitas waktu (T(n)) dari fungsi hash yang ideal adalah O(1). Untuk mencapai itu setiap record membutuhkan suatu kunci yang unik [4]. 

#### Fungsi Hash Table

Fungsi Hash (dilambangkan dengan h(k)) bertugas untuk mengubah k (key) menjadi suatu nilai dalam interval [0....X], dimana "X" adalah jumlah maksimum dari record-record yang dapat ditampung dalam tabel. Jumlah maksimum ini bergantung pada ruang memori yang tersedia. Fungsi Hash yang ideal adalah mudah dihitung dan bersifat acak, agar dapat menyebarkan semua key. Dengan key yang tersebar, berarti data dapat terdistribusi secara seragam tabrakan dapat dicegah. Sehingga kompleksitas waktu model Hash dapat mencapai O(1), di mana kompleksitas tersebut tidak ditemukan pada struktur model lain.

#### Operasi Hash Table

- insert: diberikan sebuah key dan nilai, insert nilai dalam tabel
- find: diberikan sebuah key, temukan nilai yang berhubungan dengan key
- remove diberikan sebuah key.temukan nilai yang berhubungan dengan key kemudian hapus nilai tersebut
- getiterator mengambalikan iterator yang memeriksa nilai satu demi satu

#### Collision Resolution

Dalam memasukan nilai kunci ke alamat dapat timbul kemungkinan bahwa record dengan nilai kunci yang berbeda di masukan pada satu alamat record yang sama. Fungsi Hash bertujuan untuk menentukan alamat yang berbeda untuk dua kunci atau lebih pada kunci yang sama pada record. Jika dua buah kunci atau lebih yang mempunyai kunci sama menempati alamat yang sama menyebabkan terjadinya tabrakan (collision) yaitu suatu kondisi untuk dua data yang tidak sama setelah dilakukan perhitungan menghasilkan alamat yang sama, dimana terdapat lebih dari satu kunci (key) yang menempati slot alamat yang sama yang akan mengakibatkan penurunan efisiensi pencarian data, meskipun sudah menentukan fungsi Hash yang cukup baik. Dengan demikian, harus mempunyai suatu cara untuk mengatasi tabrakan yang mungkin terjadi, yang disebut dengan resolusi kolisi (collision resolution) Satu pendekatan sederhana untuk mengatasi terjadinya tabrakan (collision) adalah dengan cara menyimpan kunci yang bertabrakan dalam ruang berikutnya yang tersedia.

## Guided 

### 1. Rekursif Langsung (Direct Recursion)

```C++ 
#include <iostream>
using namespace std;

//Code ini berfungsi untuk melakukan hitung mundur
//dari angka yang diinputkan

void countdown(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    countdown(n - 1);
}

int main() {
    cout << "Rekursif Langsung: ";
    countdown(5); //5 merupakan input nya
    cout << endl;
    return 0;
}
```
#### Output

![Screenshot (826)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/3c40b30d-5710-4150-a36f-e8e688a27155)

Codingan di atas merupakan implementasi rekursi langsung dalam bahasa pemrograman C++. Fungsi `countdown` digunakan untuk melakukan perhitungan mundur dari angka yang diinputkan, dan akan memanggil dirinya sendiri hingga mencapai kondisi berhenti saat `n` sama dengan 0. Saat fungsi dipanggil, akan mencetak nilai `n` terlebih dahulu, kemudian memanggil kembali fungsi `countdown` dengan parameter `n-1`. Proses ini akan berulang hingga nilai `n` mencapai 0.

Dalam fungsi `main`, terdapat pemanggilan fungsi `countdown` dengan input 5. Sehingga output yang dihasilkan adalah perhitungan mundur dari 5 hingga 1. Saat `n` bernilai 0, iterasi rekursi akan berhenti dan program akan selesai. Dengan demikian, output yang diharapkan dari kode di atas adalah "5 4 3 2 1".

### 2. Rekursif Tidak Langsung (Indirect Recursion)

```C++ 
#include <iostream>
using namespace std;

void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n - 1); // Panggilan rekursif tidak langsung
    }
}

void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n / 2); // Panggilan rekursif tidak langsung
    }
}

int main() {
    int num = 5;
    cout << "Rekursif Tidak Langsung: ";
    functionA(num);
    return 0;
}
```
#### Output

![Screenshot (827)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/9c46d60d-db51-41c7-9f26-ca05ee25c90c)

Dalam codingan di atas, terdapat dua fungsi yaitu `functionA` dan `functionB` yang melakukan rekursi tidak langsung, di mana satu fungsi memanggil fungsi rekursif lain dan begitu seterusnya. Pada fungsi `functionA`, jika nilai `n` lebih besar dari 0, nilai `n` akan dicetak terlebih dahulu, kemudian fungsi `functionB` akan dipanggil dengan parameter `n - 1`. Pada fungsi `functionB`, jika nilai `n` lebih besar dari 0, nilai `n` juga akan dicetak terlebih dahulu, kemudian fungsi `functionA` akan dipanggil dengan parameter `n / 2`.

Dalam fungsi `main`, terdapat pemanggilan `functionA` dengan input 5. Saat program dijalankan, fungsi `functionA` akan memanggil `functionB` dengan parameter 5 - 1 = 4. Kemudian, fungsi `functionB` akan memanggil `functionA` dengan parameter 4 / 2 = 2. Proses ini akan terus berlanjut hingga nilai `n` mencapai 0 atau kurang dari 0. Sehingga output yang diharapkan dari kode di atas adalah "5 4 3 2 1". Setiap fungsi akan mencetak nilai `n` yang dimilikinya secara berurutan.


### 3. Hash Table

```C++ 
#include <iostream>
#include <string>
#include <vector>

using namespace std;
const int TABLE_SIZE = 11;

string name;
string phone_number;
class HashNode {
public:
    string name;
    string phone_number;

    HashNode(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};

class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE];
public:
    int hashFunc(string key) {
        int hash_val = 0;
        for (char c : key) {
            hash_val += c;
        }
    return hash_val % TABLE_SIZE; // 4 bisa aja 204,12004, 6 bisa aja 266, 300
    }
    void insert(string name, string phone_number) {
        int hash_val = hashFunc(name);

        for (auto node : table[hash_val]) {
            if (node->name == name) {
                node->phone_number = phone_number;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(name, phone_number));
    }

    void remove(string name) {
        int hash_val = hashFunc(name);

        for (auto it = table[hash_val].begin(); it !=
table[hash_val].end(); it++) {
            if ((*it)->name == name) {
                table[hash_val].erase(it);
                return;
            }
        }
    }
    string searchByName(string name) {
    int hash_val = hashFunc(name);
    for (auto node : table[hash_val]) {
        if (node->name == name) {
            return node->phone_number;
        }
    }
    return "";
    }

    void print() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << ": ";
                for (auto pair : table[i]) {
                if(pair != nullptr){
                    cout << "[" << pair->name << ", " <<
pair->phone_number << "]";
                }
            }
            cout << endl;
        }
    }
};

int main() {
HashMap employee_map;

employee_map.insert("Mistah", "1234");
employee_map.insert("Pastah", "5678");
employee_map.insert("Ghana", "91011");

cout << "Nomer Hp Mistah : " <<employee_map.searchByName("Mistah") << endl;
cout << "Phone Hp Pastah : " <<employee_map.searchByName("Pastah") << endl;
cout << "Phone Hp Ghana : " <<employee_map.searchByName("Ghana") << endl;

employee_map.remove("Mistah");

cout << "Nomer Hp Mistah setelah dihapus : "
<<employee_map.searchByName("Mistah") << endl << endl;

cout << "Hash Table : " << endl;

employee_map.print();

return 0;

}
```
#### Output

![Screenshot (828)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/f9311a79-cccd-4dde-b1d3-c47e50cfa7f9)

Codingan di atas adalah implementasi dari struktur data Hash Table yang menggunakan teknik chaining untuk menangani collision. Hash Table digunakan untuk menyimpan informasi karyawan berupa nama dan nomor telepon dalam struktur data HashMap. Kelas `HashNode` digunakan untuk mendefinisikan node yang berisi informasi tentang nama dan nomor telepon karyawan. Kelas `HashMap` memiliki atribut berupa array dari vektor yang disebut `table`, yang berisi pointer ke `HashNode`. Metode `hashFunc` digunakan untuk menghasilkan nilai hash dari kunci yang merupakan nama karyawan. 

Metode `insert` digunakan untuk memasukkan data karyawan ke dalam Hash Table. Jika kunci (nama) sudah ada, nomor telepon yang terkait akan diperbarui. Metode `remove` digunakan untuk menghapus data karyawan berdasarkan nama, sementara metode `searchByName` digunakan untuk mencari nomor telepon berdasarkan nama karyawan. Metode `print`digunakan untuk mencetak seluruh isi dari Hash Table. Dalam fungsi `main`, dilakukan pengujian dengan memasukkan beberapa data karyawan, melakukan pencarian nomor telepon berdasarkan nama, menghapus data karyawan, dan mencetak seluruh isi dari Hash Table untuk diperiksa. Output yang dihasilkan dari kode tersebut akan mencakup nomor telepon karyawan yang dicari, dan keadaan Hash Table setelah pemanggilan metode `print`.

## Unguided 

### 1. Buatlah sebuah program Rekursif Langsung (Direct Recursion) yang menghitung nilai faktorial dari sebuah inputan bilangan bulat positif!

```C++
#include <iostream>
using namespace std;

// Fungsi untuk menghitung faktorial
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    cout << "Masukkan bilangan bulat positif: ";
    cin >> num;

    if (num < 0) {
        cout << "Input harus bilangan bulat positif!";
    } else {
        cout << "Faktorial dari " << num << " adalah: " << factorial(num) << endl;
    }

    return 0;
}
```
#### Output :

![Screenshot (829)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/f4da841d-9909-4a43-b341-162ea735d457)

Codingan di atas merupakan program sederhana untuk menghitung faktorial dari bilangan bulat positif yang dimasukkan pengguna. Program akan meminta pengguna untuk memasukkan bilangan bulat positif melalui input. Jika bilangan yang dimasukkan kurang dari nol, program akan memberikan pesan bahwa input harus berupa bilangan bulat positif. Namun, jika bilangan yang dimasukkan positif, program akan menghitung faktorial dari bilangan tersebut dengan menggunakan fungsi rekursif `factorial`.

Fungsi `factorial` digunakan untuk menghitung faktorial dari bilangan yang diterima sebagai argumen. Jika bilangan yang diterima adalah 0, maka fungsi akan mengembalikan nilai 1. Jika tidak, fungsi akan melakukan rekursi untuk mengalikan bilangan dengan faktorial dari bilangan sebelumnya (n-1).

Setelah menghitung faktorial, program akan mencetak hasilnya ke layar dengan pesan "Faktorial dari [bilangan] adalah: [hasil faktorial]". Output tersebut akan menampilkan nilai faktorial dari bilangan bulat positif yang dimasukkan pengguna.

### 2. Buatlah versi program Rekursif Tidak Langsung (Indirect Recursion) dari soal nomor 1 di atas!

```C++
#include <iostream>
using namespace std;

// Deklarasi fungsi
void functionB(int n);
void functionA(int n);

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n - 1); // Panggilan rekursif tidak langsung
    }
}

void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n / 2); // Panggilan rekursif tidak langsung
    }
}

int faktorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int num;

    cout << "Masukkan bilangan bulat positif: ";
    cin >> num;

    cout << "Rekursif Tidak Langsung: ";
    functionA(num);

    cout << "\nHasil faktorial dari " << num << " adalah: " << faktorial(num) << endl;

    return 0;
}
```
#### Output :

![Screenshot (835)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/f6666122-4b06-420e-b288-f188fd2d3540)

Program di atas merupakan contoh penggunaan rekursi tidak langsung (indirect recursion) di C++. Dalam program tersebut, terdapat dua fungsi yaitu `functionA` dan `functionB`, di mana keduanya saling memanggil satu sama lain secara tidak langsung. Pada fungsi `functionA`, jika nilai `n` masih lebih besar dari 0, maka akan mencetak nilai `n` dan memanggil fungsi `functionB(n - 1)`. Sedangkan pada fungsi `functionB`, jika nilai `n` masih lebih besar dari 0, maka akan mencetak nilai `n` dan memanggil fungsi `functionA(n / 2)`. 

Selain itu, terdapat fungsi `faktorial` yang menghitung nilai faktorial dari sebuah bilangan dengan menggunakan rekursi sederhana. Fungsi ini akan mengembalikan nilai 1 jika `n` sama dengan 0, dan mengalikan `n` dengan hasil dari rekursi `faktorial(n - 1)` jika `n` tidak sama dengan 0.

Dalam `main` function, program meminta pengguna untuk memasukkan bilangan bulat positif, kemudian mencetak langkah-langkah rekursif yang dilakukan oleh `functionA` dan `functionB`. Selanjutnya, program akan mencetak hasil faktorial dari bilangan yang dimasukkan pengguna (input user).


### 3. Implementasikan hash table untuk menyimpan data mahasiswa. Setiap mahasiswa memiliki NIM dan nilai. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan nilai. Dengan ketentuan : <br>
### a. Setiap mahasiswa memiliki NIM dan nilai. <br> b. Program memiliki tampilan pilihan menu berisi poin C. <br> c. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan rentang nilai (80 – 90).

```C++
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
```
#### Output :

![Screenshot (830)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/f5bbc549-c0ed-4efc-9329-37dd83fb58b9)

![Screenshot (831)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/b090182a-2ded-4fc7-aab7-aecfbe38f7af)

![Screenshot (832)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/e4e9765c-8d62-4bda-ba39-1882bdfc737d)

![Screenshot (836)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/874c7345-e863-4a9f-819b-b3fc125299f5)

Program di atas merupakan implementasi dari hash table untuk menyimpan data mahasiswa berdasarkan NIM dan nilai. Struktur data `Mahasiswa` digunakan untuk menyimpan NIM dan nilai mahasiswa. Class `MahasiswaHashTable` memiliki private member berupa array of linked lists `table`, yang digunakan untuk menampung data mahasiswa. Dalam class ini, terdapat fungsi-fungsi untuk menambahkan data mahasiswa, menghapus data mahasiswa berdasarkan NIM, mencari data mahasiswa berdasarkan NIM, serta mencari data mahasiswa berdasarkan rentang nilai (80 - 90).

Dalam `main` function, program memberikan menu pilihan kepada pengguna untuk melakukan berbagai operasi seperti menambah data mahasiswa, menghapus data mahasiswa, mencari data mahasiswa berdasarkan NIM, atau mencari data mahasiswa berdasarkan rentang nilai. Pengguna dapat memasukkan pilihan menu dan data yang sesuai dengan operasi yang ingin dilakukan. Program akan terus berjalan hingga pengguna memilih untuk keluar dari program dengan memilih opsi keluar.

Implementasi hash table ini memungkinkan pengguna untuk efisien menyimpan data mahasiswa dan melakukan operasi pencarian berdasarkan NIM atau rentang nilai dengan cepat. Dengan menggunakan hash function untuk menentukan indeks tempat penyimpanan data di dalam hash table, program dapat mengakses dan memanipulasi data secara efisien. 

## Kesimpulan

rekursi adalah teknik pemrograman dimana suatu fungsi dapat memanggil dirinya sendiri untuk menyelesaikan suatu tugas secara berulang hingga mencapai kondisi berhenti. Jenis-jenis rekursi meliputi rekursi langsung, rekursi tidak langsung, dan rekursi ekor, yang masing-masing memiliki karakteristik dan kegunaan yang berbeda. Meskipun memiliki kelebihan seperti kemudahan penyelesaian masalah kompleks, fungsi rekursif juga memiliki kekurangan seperti penggunaan memori yang lebih besar dan potensi untuk terjebak dalam loop tanpa henti.

Sementara itu, Hash Table adalah struktur data yang menggunakan fungsi hash untuk memetakan nilai kunci unik ke dalam sebuah tabel, memungkinkan akses cepat terhadap data jika nilai kunci langsung sesuai dengan posisi hashnya. Meskipun efisien dalam hal waktu akses, Hash Table juga bisa mengalami collision, yaitu saat dua nilai kunci memiliki hash yang sama. Untuk mengatasi collision, diterapkan kebijakan resolusi bentrokan untuk menentukan lokasi record dalam tabel. Dengan penggunaan fungsi hashing yang tepat dan kebijakan penyelesaian collision yang efektif, Hash Table dapat mempercepat proses penyimpanan, pencarian, penambahan, dan penghapusan data secara efisien.

## Referensi
[1] Indahyanti, Uce, and Yunianita Rahmawati. "Buku Ajar Algoritma Dan Pemrograman Dalam Bahasa C++." Umsida Press (2020): 1-146. <br>
[2] T., Thoyyibah., et al. Algoritma Analisis pada Javascript dan Python. Eureka Media Aksara, 2024. <br>
[3] S. W. Bray, Implementing Cryptography using Python. Indianapolis: John Wiley & Sons, Inc., 2020.  <br>
[4] R.Rizal Isnanto, Adian Fatchurrohim, dan Nardho Gunawan. (2006). "IMPLEMENTASI METODE HASH (HASHING) DALAM PENCARIAN DATA PADA KAMUS KEBIDANAN". <br>