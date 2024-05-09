# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Muhammad Naufal | 2311110034</p>

## Dasar Teori

Berbicara mengenai pemrograman, tidak lepas dengan yang namanya tipe data. Tipe data adalah jenis dari data yang akan disimpan di dalam suatu variabel. Tipe data mendefinisikan metode penyimpanan untuk merepresentasikan informasi dan cara informasi diinterpretasikan. Tipe data berkaitan erat dengan pemesanan memori untuk variabel karena tipe data variabel menentukan cara kompilator menginterpretasikan isi memori. Tipe data juga menentukan operasi operasi dan operator apa saja yang dapat dilakukan dan digunakan terhadap variabel yang dibentuk berdasarkan tipe data yang digunakan. Tipe data pada bahasa pemrograman C++ dibagi ke dalam 2 kategori, yaitu tipe data dasar dan tipe data bentukan [1]. 

tipe-tipe data berdasarkan sifat dan karakteristiknya dapat dikelompokkan menjadi tiga, yaitu :
1. Tipe data primitif
2. Tipe data abstrak
3. Tipe data koleksi

Berikut penjelasannya dari masing masing tipe data diatas :

### 1. Tipe Data Primitif :

Tipe data primitif adalah tipe data dasar yang tersedia dalam bahasa pemrograman dan biasanya sudah didefinisikan secara langsung oleh bahasa tersebut. Tipe data primitif merepresentasikan nilai tunggal dan sederhana, seperti bilangan bulat, bilangan desimal, karakter, dan boolean. Contoh tipe data primitif antara lain :
- Integer : digunakan untuk menyimpan bilangan bulat seperti 12, 1, 4, dan lain sebagainya.
- Float : digunakan untuk menyimpan bilangan desimal seperti 1.5, 2.5, 3.14, dan lain sebagainya.
- Char : digunakan untuk menyimpan huruf atau simbol seperti A, B, C, dan lain sebagainya.
- Boolean : digunakan untuk menyimpan nilai boolean yang hanya memiliki dua nilai saja yaitu true atau false.

### 2. Tipe Data Abstrak :
Tipe data abstrak adalah tipe data yang didefinisikan oleh pemrogramernya sendiri (biasanya menggunakan struktur data) dan tidak langsung tersedia dalam bahasa pemrograman. Tipe data abstrak digunakan untuk merepresentasikan struktur data yang kompleks dan memiliki operasi-operasi tertentu yang dapat dilakukan terhadap data tersebut. Contoh tipe data abstrak adalah stack, queue, linked list, dan tree.

### 3. Tipe Data Koleksi :
Tipe data koleksi adalah tipe data yang digunakan untuk mengelompokkan beberapa nilai atau objek menjadi satu kesatuan. Tipe data ini dapat menyimpan, mengelola, dan mengakses sejumlah besar data dengan cara terstruktur. Tipe data koleksi memungkinkan untuk menyimpan banyak nilai dalam satu variabel. Contoh tipe data koleksi antara lain :
- array : kumpulan-kumpulan variabel yang menyimpan data dengan tipe yang sama atau data-data yang tersusun secara linear dimana di dalamnya terdapat elemen dengan tipe yang sama. Indeks dalam array menyatakan elemen yang disimpan dan panjang atau length menyatakan total elemen yang tersimpan. Pada bahasa pemprograman C++ pada array selalu dimulai dari indeks nol. contohnya : Char huruf[7] = {‘l’,’m’,’n’,’o’,’p’,’q’,’r’}, berada pada indeks berapakah huruf ‘n’? jawabannya yaitu huruf n berada pada indeks ke 2, kenapa? karena indeks array selalu mulai dari angka nol.
- vektor : Mirip seperti array tetapi jumlah elemennya dinamis dan alokasi memorinya dilakukan otomatis dan bersebelahan.
- map : Map mirip juga seperti array, namun indeksnya dapat berupa selain tipe data integer. Pada map, indeks dapat disebut juga dengan "key", self balancing tree khususnya black tree menggunakan std::map.

## Guided 

### 1. Tipe Data Primitif

```C++
#include <iostream>
using namespace std;
//Main Program
int main()
{
    char op;
    float num1, num2;
    //It allows user to enter operator i.e. +, -, *, /
    cin >> op;
    //It allow user to enter the operands
    cin >> num1 >> num2;
    //Switch statement begins
    switch (op)
    {
    //If user enter +
    case '+':
        cout << num1 + num2;
        break;
    //If use enter -
    case '-':
        cout << num1 - num2;
        break;
    //If use enter *
    case '*':
        cout << num1 * num2;
        break;
    //If use enter /
    case '/':
        cout << num1 / num2;
        break;
    //If the operator is other than +, -, * or /,
    //error message will display
    default:
        cout << "Error! operator is not correct";
    } // switch statement ends
    return 0;
}
```
#### Output
![Screenshot (507)](https://github.com/mhmmadnaufal/Praktikum-Struktur-Data-Assigment/assets/153933119/d94a832e-57ea-402a-b0ff-6e19f5726c8b)
Kodingan di atas adalah kode yang menjalankan sebuah program yang meminta pengguna untuk memasukkan sebuah operator matematika (+, -, *, /) dan dua angka, progam di atas menggunakan fungsi 'switch' untuk melakukan operasi sesuai dengan operator yang dimasukkan, jika operator yang dimasukkan tidak sesuai dengan yang ada pada program, maka program akan mencetak error.

### 2. Tipe Data Abstrak

```C++
#include <iostream>
using namespace std;

//struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{

    //menggunakan struct
    struct Mahasiswa mhs1, mhs2;
    //mengisi nilai ke struct
    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 18;
    mhs2.name = "Bambang";
    mhs2.address = "Surabaya";
    mhs2.age = 23;

    //mencetak isi struct
    cout<<"Mahasiswa 1\n";
    cout<<"Nama: " << mhs1.name <<endl;
    cout<<"Alamat: " << mhs1.address <<endl;
    cout<<"Alamat: " << mhs1.age <<endl;

    cout<<"\nMahasiswa 2/n";
    cout<<"Nama: " << mhs2.name <<endl;
    cout<<"Alamat: " << mhs2.address <<endl;
    cout<<"Alamat: " << mhs2.age <<endl;

    return 0;
}
```
#### Output
![Screenshot (510)](https://github.com/mhmmadnaufal/Praktikum-Struktur-Data-Assigment/assets/153933119/687a53cd-a465-4c94-a2bf-86c0baedf7ba)
Kodingan di atas adalah kode yang menjalankan program yang menggunakan fungsi "struct" untuk menampilkan informasi mahasiswa, pada kode diatas Mahasiswa memiliki tiga data anggota yaitu name, address, dan age.

Di dalam struct ada fungsi display() yang digunakan untuk mencetak informasi mahasiswa ke layar. Menggunakan fungsi main(), dan membuat dua variabel Mahasiswa (mhs1 dan mhs2). Setelah mengisi nilai ke struct, program akan mencetak isi struct tersebut menggunakan fungsi printf() yang hasilnya akan berupa informasi nama, alamat, dan usia masing-masing mahasiswa.

### 3. Tipe Data Koleksi

```C++
#include <iostream>
using namespace std;

int main()
{
    //deklarasi dan inisialisasi array
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;

    //mencetak array
    cout << "Isi array pertama :" << nilai[0] << endl;
    cout << "Isi array kedua :" << nilai[1] << endl;
    cout << "Isi array ketiga :" << nilai[2] << endl;
    cout << "Isi array keempat :" << nilai[3] << endl;
    cout << "Isi array kelima :" << nilai[4] << endl;
    return 0;
}
```
#### Output
![Screenshot (509)](https://github.com/mhmmadnaufal/Praktikum-Struktur-Data-Assigment/assets/153933119/3843798a-1d14-45d0-9098-e0eef00886c9)
Kodingan di atas adalah program penggunaan array yang terdiri dari lima elemen bertipe integer. Array diatas bernama nilai yang terdiri dari lima elemen, nilai pada array nilai diinisialisasi menggunakan indeks untuk setiap elemen array.

Menggunakan fungsi cout untuk mencetak nilai dari setiap array nilai, setelah mencetak isi dari setiap elemen array, program akan mengembalikan nilai 0 dari fungsi main() yang dapat diartikan bahwa program tersebut berjalan sukses.

## Unguided 

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

```C++
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
```
#### Output:
![Screenshot (529)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/d0f36238-8e9b-4060-ab79-6390decc798d)

Code di atas adalah sebuah program C++ sederhana yang menghitung keliling persegi dan volume kubus berdasarkan pilihan menu yang dimasukkan oleh pengguna. Program ini memiliki fungsi hitungKelilingPersegi untuk menghitung keliling persegi dan fungsi hitungVolumeKubus untuk menghitung volume kubus. Program ini terlebih dahulu akan menampilkan menu pilihan kepada pengguna untuk memilih apakah ingin menghitung keliling persegi atau volume kubus. Setelah pengguna memasukkan pilihan menu, program akan meminta input yang sesuai dan kemudian melakukan perhitungan berdasarkan pilihan pengguna. Jika pengguna memilih untuk menghitung keliling persegi, program akan meminta input panjang sisi persegi, kemudian menghitung dan menampilkan keliling persegi. Sedangkan jika pengguna memilih untuk menghitung volume kubus, program akan meminta input sisi kubus, kemudian menghitung dan menampilkan volume kubus. Jika pengguna memasukkan pilihan menu yang tidak valid, program akan menampilkan pesan "Menu Tidak Ada". Pada kode di atas, menggunakan cout untuk mencetak atau menampilkan output ke layar. 

### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya

#### Class
Class adalah blueprint (cetak biru) untuk membuat objek. Class mendukung konsep enkapsulasi, di mana anggota-anggota data (variabel) dan fungsi-fungsi yang berkaitan dapat disembunyikan atau diakses secara terbatas. Class menentukan apa yang dimiliki sebuah objek (atribut) dan apa yang dapat dilakukan objek (metode). Umumnya kelas mewakili sebuah kata benda yang dapat merupakan seseorang, hewan, buah, ataupun benda mati.

#### Struct
Struct dalam bahasa C++ merupakan struktur data yang memungkinkan terjadinya pembentukan tipe data baru dengan menggabungkan berbagai macam variabel dengan tipe data berbeda yang tersedia dalam C++. Tipe data yang baru, dapat dibentuk di luar tipe data yang sudah ada dengan menggabungkan beberapa tipe data tersebut sesuai dengan kebutuhan program atau aplikasi yang dirancang [2].

#### Perbedaan keduanya
Perbedaan utama antara class dan struct dalam bahasa C++ adalah hak akses default untuk anggota-anggotanya. Secara default, anggota struct adalah public, sedangkan anggota class adalah private. Class lebih banyak digunakan untuk objek yang dimana setiap proses di dalamnya saling berhubungan. Sedangkan struct biasa digunakan untuk struktur data atau objek yang sebenarnya, menyimpan data menggunakan variabel dan membuat fungsi [4].

Dengan demikian, penggunaan class lebih cocok untuk mendefinisikan tipe data baru dengan operasi-operasi yang terkait dan untuk mengimplementasikan konsep enkapsulasi, sedangkan struct lebih sering digunakan untuk menyimpan data terkait yang sederhana dan tidak memerlukan operasi kelas yang rumit. 

#### Contoh program

```c++
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
```
#### output

![Screenshot (530)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/18028eb2-ad3f-4417-a4aa-2744550c12ce)

Code di atas merupakan program C++ yang menunjukkan perbedaan antara penggunaan struct dan class dalam pemrograman. Program ini mendefinisikan sebuah struct MahasiswaStruct dan sebuah class MahasiswaClass yang memiliki properti nama, umur, dan IPK (Indeks Prestasi Kumulatif). Pertama, program menggunakan struct MahasiswaStruct untuk membuat objek mhsStruct yang merepresentasikan seorang mahasiswa. Kemudian, program menginisialisasi nilai nama, umur, dan IPK dari objek tersebut. Selanjutnya, program menampilkan informasi mahasiswa tersebut menggunakan nilai yang disimpan dalam objek struct. Kemudian, program menggunakan class MahasiswaClass untuk membuat objek mhsClass yang juga merepresentasikan seorang mahasiswa. Class MahasiswaClass memiliki properti nama, umur, dan IPK sebagai variabel private, serta memiliki constructor untuk menginisialisasi nilai-nilai tersebut. Terdapat juga metode display() yang digunakan untuk menampilkan informasi mahasiswa. Setelah objek mhsClass dibuat dan diinisialisasi dengan nilai tertentu, program menampilkan informasi mahasiswa tersebut dengan memanggil metode display() dari objek mhsClass. Pada kode di atas, menggunakan cout untuk mencetak atau menampilkan output ke layar. 

Dengan demikian, program ini memperlihatkan perbedaan antara penggunaan struct dan class dalam pemrograman C++, di mana struct digunakan untuk menyimpan data tanpa metode atau fungsi tambahan, sedangkan class digunakan untuk menyimpan data beserta metode atau fungsi yang terkait dengan data tersebut.

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map.

```c++
#include <iostream>
#include <map>

int main() {
    // Mendefinisikan map untuk menyimpan data mahasiswa (nama dan nilai)
    std::map<std::string, int> nilaiMahasiswa;

    // Memasukkan data mahasiswa ke dalam map
    nilaiMahasiswa["Alice"] = 85;
    nilaiMahasiswa["Bob"] = 70;
    nilaiMahasiswa["Charlie"] = 92;

    // Menampilkan nilai mahasiswa
    for (auto it = nilaiMahasiswa.begin(); it != nilaiMahasiswa.end(); ++it) {
        std::cout << "Nilai " << it->first << ": " << it->second << std::endl;
    }

    return 0;
}
```
#### output
![Screenshot (531)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/bd4c6e88-c332-4657-ae30-729572d69b9a)
Code di atas merupakan program C++ yang menggunakan library map untuk menyimpan data mahasiswa berupa nama dan nilai. Program ini kemudian memasukkan data mahasiswa ke dalam map nilaiMahasiswa dan menampilkan nilai mahasiswa tersebut ke layar. menggunakan function cout untuk mengeksekusi nya. berikut penjelasan lebih rincinya : 
1. Mendefinisikan map nilaiMahasiswa yang menggunakan key berupa std::string (nama mahasiswa) dan value berupa int (nilai mahasiswa).
2. Memasukkan data mahasiswa ke dalam map nilaiMahasiswa dengan key berupa nama mahasiswa dan value berupa nilai mahasiswa. Dalam contoh ini, data yang dimasukkan adalah:
"Alice" dengan nilai 85, "Bob" dengan nilai 70, "Charlie" dengan nilai 92
3. Melakukan iterasi melalui map nilaiMahasiswa menggunakan iterator it. Iterator it digunakan untuk mengakses elemen-elemen map, yang memiliki dua bagian: first (key) dan second (value). Program mencetak nama mahasiswa beserta nilainya ke layar menggunakan std::cout.
4.  Mengakhiri program dengan mengembalikan nilai 0.

#### Kesimpulan kode diatas
Dengan menggunakan map, program dapat menyimpan data mahasiswa secara terstruktur dengan pasangan key-value. Kemudian, program menggunakan loop untuk menampilkan nilai mahasiswa yang disimpan dalam map ke layar. Dengan demikian, program ini memanfaatkan fitur map untuk menyimpan dan mengakses data mahasiswa dengan efisien.

#### Perbedaan array dengan map

Array adalah suatu struktur yang terdiri dari sejumlah elemen yang memiliki tipe data yang sama. Elemen-elemen array tersusun secara sekuensial dalam memori komputer. Semua elemem array bertipe sama [3]. Array merupakan kumpulan data yang diakses dengan berdasarkan indeks (mulai dari 0 sampai ukuran array-1). Ukuran array biasanya ditentukan saat deklarasi dan tidak dapat diubah saat program berjalan. Array cocok digunakan ketika kita memiliki data yang membutuhkan akses langsung berdasarkan indeksnya dan ukuran array tetap.

Sedangkan Map adalah struktur data yang digunakan untuk menyimpan pasangan kunci-nilai (key-value pairs), elemen-elemen dalam map tidak disimpan secara berurutan dalam memori, melainkan diurutkan berdasarkan kunci. Kunci dalam map harus unik, sedangkan nilai tidak harus unik. Ukuran map dapat berubah saat program berjalan dengan menambah atau menghapus elemen. Map cocok digunakan ketika kita memerlukan asosiasi antara kunci dan nilai, serta ketika kita perlu mencari nilai berdasarkan kunci dengan efisien.

Jadi, pemilihan antara keduanya tergantung pada kebutuhan program dan cara data akan diakses dan disimpan. Jika membutuhkan koleksi data yang sederhana dan ukurannya tetap, maka gunakan array. Namun, jika perlu memetakan kunci ke nilai dan mengelola data secara dinamis, maka gunakan map

## Kesimpulan
Kesimpulannya, tipe data memiliki tiga jenis yaitu tipe data primitif, tipe data abstrak, dan tipe data koleksi. Tipe data primitif meliputi integer, float, character, dan boiolean. Tipe data abstrak meliputi struct dan class, struct memiliki askses default yang bersifat public sedangkan class bersifat private. Tipe data koleksi meliputi array, vector, dan map. Array adalah struktur data statis, berukuran tetap, berisi tipe data yang sama secara beruruta. Vector adalah struktur data dinamis, ukurannya dapat disesuaikan, dan alokasi memorinya dilakukan otomatis dan bersebelahan. Sedangkan Map adalah struktur data yang memetakan kunci (key) ke nilai (value), setiap kuncinya harus unik.

## Referensi
[1] S. Hanief and I. Jepriana, "Konsep Algoritme dan Aplikasinya dalam Bahasa Pemrograman C++," Yogyakarta, Indonesia: Penerbit Andi, 2020.
[2] Dwi Putra, Muhammad T., et al. BELAJAR PEMROGRAMAN LANJUT DENGAN C++. Edited by Damayanti, Evi, CV WIDINA MEDIA UTAMA, 2023.
[3] M. A. Pratama, "STRUKTUR DATA ARRAY DUA DIMENSI PADA PEMROGRAMAN C++," 2020. Available: osf.io/vyech.
[4] A. Aristo, “Swift: Class vs. Struct - Dipantry - Medium,” Medium, Dec. 28, 2021. [Online]. Available: https://medium.com/dipantry/swift-class-vs-struct-c0b279b1dfaf.
