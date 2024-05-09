# <h1 align="center">Laporan Praktikum Modul Struct</h1>
<p align="center">Muhammad Naufal | 2311110034</p>

## Dasar Teori

### 1. Variabel

Dalam dunia pemrograman, istilah variabel merujuk pada suatu tempat yang digunakan untuk menampung data di dalam memori yang mempunyai nilai yang dapat berubah–ubah selama proses program. Suatu tempat atau lokasi di dalam memori tersebut menyimpan data yang akan diolah. Dalam konsep pemrograman, fungsi dari sebuah variabel pun tidak jauh berbeda definisinya. Variabel dalam pemrograman juga digunakan untuk menampung sebuah nilai yang akan disimpan secara sementara dan bisa diubah-ubah sesuai dengan operasi yang dilakukan oleh si pemrogram. Semua program-program yang dijalankan di komputer akan menyimpan data sementara di dalam RAM (Random Access Memory). Variabel di sini berfungsi sebagai sebuah nama lokasi penyimpanan data-data yang berada pada memory tersebut atau RAM. Pendeklarasian sebuah variabel bisa disertai dengan nilai yang sudah terinisialisasi sebelumnya ataupun tidak [1].

Bisa diasumsikan bahwa sebuah varibel yang dideklarasikan dalam program, merupakan sebuah wadah yang dipesan oleh user untuk menampung nilai atau data yang sifatnya dapat berubah-ubah atau tidak tetap selama program dijalankan. Singkatnya variabel merupakan objek yang nilainya tidak tetap, dapat berubah sesuai proses yang dikenai terhadapnya. Nama variabel harus didefinisikan tipe datanya dalam bagian deklarasi [2].

Variabel memiliki 2 jenis yaitu:

- Variabel lokal: Dibuat didalam fungsi, dan dapat dipanggil hanya oleh fungsi yang mendeklarasikannya. Variabel lokal dalam C++ adalah variabel yang dideklarasikan dalam fungsi atau blok kode yang berbeda dengan variabel global. Variabel lokal hanya dapat diakses dalam fungsi atau blok kode di mana mereka dideklarasikan dan tidak dapat diakses dari luar fungsi atau blok kode tersebut [3].
- Variabel global: Dibuat diluar fungsi, dapat dipanggil oleh semua fungsi yang ada didalam program. Variabel global adalah variabel yang dideklarasikan di luar semua fungsi atau blok kode, membuatnya dapat diakses dari mana pun dalam program tanpa batasan lingkup lokal. Dalam C++, variabel yang dideklarasikan di luar fungsi main() secara otomatis dianggap sebagai variabel global. Variabel global dibuat saat program dimulai dan dimusnahkan ketika program berakhir, ini disebut durasi statis [3].

### 2. Struktur (Struct) :

Struct dalam bahasa C++ merupakan struktur data yang memungkinkan terjadinya pembentukan tipe data baru dengan menggabungkan berbagai macam variabel dengan tipe data berbeda yang tersedia dalam C++. Tipe data yang baru, dapat dibentuk di luar tipe data yang sudah ada dengan menggabungkan beberapa tipe data tersebut sesuai dengan kebutuhan program atau aplikasi yang dirancang. Berbeda dengan larik (array) yang memungkinkan penyimpanan beberapa tipe data yang sama, struct dapat menyimpan dan menggabungkan berbagai variabel dengan tipe data yang berbeda. Misalkan data mengenai : nama, NIM, program studi, dan universitas. Keempat data tersebut memiliki tipe data yang berbeda tetapi masih dalam satu kelompok yaitu data mahasiswa.

Berbagai variabel yang membangun suatu struktur dapat juga disebut sebagai elemen atau anggota struktur. Penggunaan struct memudahkan pemetaan entitas dari sebuah kehidupan yang nyata ataupun suatu model dengan penyimpanan dan handling dalam C++. Notasi (syntax) struct dalam C++ terbilang mudah untuk dipahami dan
digunakan. Tuliskan kata kunci “struct” tanpa petik pada awal kode dilanjutkan dengan nama struktur yang diinginkan seperti nama_struktur. Kemudian tambahkan berbagai variabel dengan berbagai tipe data berbeda
yang diperlukan di dalam tanda kurung kurawal. Selanjutnya nama_struktur akan dianggap sebagai tipe data baru yang dapat digunakan dalam program [4].

## Guided 

### 1. Buatlah sebuah struktur dengan nama buku yang berisi judul_buku, pengarang, penerbit, tebal_halaman, harga_buku. Isi dengan nilai kemudian tampilkan.

```C++
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
```
#### Output

![Screenshot (668)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/9840502b-b6c7-4c6c-979c-4ee7d40de23d)

Coding di atas adalah program C++ yang menggunakan struct untuk merepresentasikan informasi tentang dua buah buku. Program ini mendefinisikan sebuah struct bernama `Buku` yang memiliki beberapa atribut seperti judul buku, pengarang, penerbit, tebal buku (jumlah halaman), dan harga buku. Setelah mendefinisikan struct `Buku`, program kemudian membuat dua variabel objek `buku1` dan `buku2` berdasarkan struct `Buku`. Setiap variabel objek tersebut merepresentasikan satu buah buku dengan atribut-atribut yang telah ditentukan.

Dalam fungsi `main()`, program mengisi nilai dari masing-masing atribut buku1 dan buku2 dengan informasi yang sesuai. Informasi buku1 adalah "Algoritma Pemrograman" yang ditulis oleh Raden Wardana, diterbitkan oleh Gramedia Pustaka, memiliki tebal 300 halaman, dan harga 120.000. Informasi buku2 adalah "Kalkulus 2" yang ditulis oleh Ajeng Kusuma Ayu, diterbitkan oleh Erlangga, memiliki tebal 400 halaman, dan harga 150.000.

Selanjutnya, program mencetak informasi buku1 dan buku2 ke layar menggunakan `cout`, menampilkan detail seperti judul buku, pengarang, penerbit, tebal halaman, dan harga buku. Program tersebut memanfaatkan struct untuk mengelompokkan informasi terkait buku menjadi satu entitas yang lebih terstruktur. Dengan demikian, pengelolaan informasi tentang buku-buku tersebut menjadi lebih mudah dan terorganisir.

### 2. Buatlah sebuah struktur dengan skema seperti dibawah, isi dengan nilai kemudian jalankan.

```C++
#include <iostream>
#include <string>

using namespace std;

struct Hewan {
    string Nama_hewan;
    string Jenis_kelamin;
    string cara_berkembangbiak;
    string alat_bernafas ;
    string tempat_hidup;
    bool karnivora;
};

struct Hewan_darat{
    int jumlah_kaki;
    bool apakah_menyusui;
    string suara;
    Hewan info_hewan ;

}; Hewan_darat hewan1;

struct Hewan_laut{
    string Bentuk_sirip;
    string Pertahanan_diri;
    Hewan info_hewan;
}; Hewan_laut hewan2;

int main(){
    hewan1.info_hewan.Nama_hewan = "Kucing";
    hewan1.info_hewan.Jenis_kelamin = "Betina";
    hewan1.info_hewan.cara_berkembangbiak = "Melahirkan";
    hewan1.info_hewan.alat_bernafas = "Paru-paru";
    hewan1.info_hewan.tempat_hidup = "Daratan";
    hewan1.info_hewan.karnivora = false;
    hewan1.jumlah_kaki = 4;
    hewan1.apakah_menyusui = true;
    hewan1.suara = "Meow";

    hewan2.info_hewan.Nama_hewan = "Penyu";
    hewan2.info_hewan.Jenis_kelamin = "Betina";
    hewan2.info_hewan.cara_berkembangbiak = "Bertelur";
    hewan2.info_hewan.alat_bernafas = "Paru-paru dan insang";
    hewan2.info_hewan.tempat_hidup = "Lautan";
    hewan2.info_hewan.karnivora = false;
    hewan2.Bentuk_sirip = "Sirip dan ekor";
    hewan2.Pertahanan_diri = "Cangkang yang kuat";

    cout << "\t Hewan Darat :" << endl;
    cout << "Nama Hewan : " << hewan1.info_hewan.Nama_hewan << endl;
    cout << "Jenis Kelamin : " << hewan1.info_hewan.Jenis_kelamin << endl;
    cout << "Cara Berkembangbiak : " << hewan1.info_hewan.cara_berkembangbiak << endl;
    cout << "Pernapasan : " << hewan1.info_hewan.alat_bernafas << endl;
    cout << "Tempat Hidup : " << hewan1.info_hewan.tempat_hidup << endl;
    cout << "Apakah Karnivora? : " << hewan1.info_hewan.karnivora << endl;
    cout << "Jumlah Kaki : " << hewan1.jumlah_kaki << endl;
    cout << "Apakah Menyusui? : " << hewan1.apakah_menyusui << endl;
    cout << "Suara : " << hewan1.suara << endl << endl;

    cout << "\t Hewan Laut :" << endl;  
    cout << "Nama Hewan : " << hewan2.info_hewan.Nama_hewan << endl;
    cout << "Jenis Kelamin : " << hewan2.info_hewan.Jenis_kelamin << endl;
    cout << "Cara Berkembangbiak : " << hewan2.info_hewan.cara_berkembangbiak << endl;
    cout << "Pernapasan : " << hewan2.info_hewan.alat_bernafas << endl;
    cout << "Tempat Hidup : " << hewan2.info_hewan.tempat_hidup << endl;
    cout << "Apakah Karnivora? : " << hewan2.info_hewan.karnivora << endl;
    cout << "Bentuk Sirip : " << hewan2.Bentuk_sirip << endl;

    return 0;
}
```

#### Output

![Screenshot (669)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/f6bee2fb-db8e-476a-aa7d-0236f0e6cfd4)

Codingan di atas merupakan program C++ yang menggunakan struct untuk menggambarkan informasi tentang dua jenis hewan, yaitu hewan darat dan hewan laut. Program ini menggunakan konsep struktur bertingkat, di mana struct `Hewan_darat` dan struct `Hewan_laut` memiliki anggota yang merupakan struct lain yaitu `Hewan`.

- Struct `Hewan` digunakan untuk menyimpan informasi umum tentang hewan seperti nama hewan, jenis kelamin, cara berkembang biak, alat bernafas, tempat hidup, dan apakah hewan tersebut karnivora atau bukan.
- Struct `Hewan_darat` digunakan untuk menyimpan informasi khusus tentang hewan darat seperti jumlah kaki, apakah hewan tersebut menyusui, dan suara yang dihasilkan.
- Struct `Hewan_laut` digunakan untuk menyimpan informasi khusus tentang hewan laut seperti bentuk sirip, pertahanan diri, dan informasi umum hewan yang disimpan dalam struct `Hewan`.

Dalam fungsi `main()`, program menginisialisasi informasi dari dua hewan, yaitu hewan darat (hewan1) dan hewan laut (hewan2). Setiap anggota dari struct `Hewan` diisi dengan informasi yang relevan sesuai dengan jenis hewan yang bersangkutan. Kemudian, program mencetak informasi hewan darat dan hewan laut ke layar menggunakan `cout`, menampilkan detail seperti nama hewan, jenis kelamin, cara berkembang biak, pernapasan, tempat hidup, apakah karnivora (untuk hewan darat dan laut), jumlah kaki (hanya untuk hewan darat), apakah menyusui (hanya untuk hewan darat), suara (hanya untuk hewan darat), bentuk sirip, dan pertahanan diri (hanya untuk hewan laut). Program tersebut memanfaatkan konsep struktur bertingkat untuk mengorganisir informasi hewan dengan lebih terstruktur dan memudahkan dalam mengakses dan mengelola informasi tentang hewan-hewan tersebut.


## Unguided 

### 1. Modifikasi tugas guided pertama, sehingga setiap item yang terdapat pada struct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan.

```C++
#include <iostream>
#include <string>

using namespace std;

struct Buku {
    string judul_buku[5];
    string pengarang[5];
    string penerbit[5];
    int tebal_halaman[5];
    double harga_buku[5];
};

int main() {
    Buku buku;

    for (int i = 0; i < 5; i++) {
        cout << "Masukkan informasi buku ke-" << i+1 << ":" << endl;
        cout << "Judul Buku: ";
        cin.ignore(); // Membersihkan newline character sebelum menggunakan getline
        getline(cin, buku.judul_buku[i]);
        cout << "Pengarang: ";
        getline(cin, buku.pengarang[i]);
        cout << "Penerbit: ";
        getline(cin, buku.penerbit[i]);
        cout << "Tebal Halaman: ";
        cin >> buku.tebal_halaman[i];
        cout << "Harga Buku: ";
        cin >> buku.harga_buku[i];
        cout << endl;
    }

    for (int i = 0; i < 5; i++) {
        cout << "Informasi buku " << i+1 << endl;
        cout << "Judul : " << buku.judul_buku[i] << endl;
        cout << "Pengarang : " << buku.pengarang[i] << endl;
        cout << "Penerbit : " << buku.penerbit[i] << endl;
        cout << "Tebal Halaman : " << buku.tebal_halaman[i] << endl;
        cout << "Harga Buku : " << buku.harga_buku[i] << endl << endl;
    }

    return 0;
}
```
#### Output:

![Screenshot (673)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/a5b67009-6cad-4135-a7fe-0fc6d8974353)

Coding di atas merupakan program C++ yang menggunakan struct `Buku` untuk menyimpan informasi tentang 5 buku. Program ini meminta pengguna untuk memasukkan informasi buku mulai dari judul, pengarang, penerbit, tebal halaman, dan harga buku sebanyak 5 kali  dengan buku yang berbeda-beda. Setelah semua informasi dimasukkan, program akan menampilkan kembali informasi dari setiap buku yang telah dimasukkan.

Pada bagian input informasi buku, program menggunakan `cin.ignore()` sebelum menggunakan `getline()` untuk membersihkan newline character yang tersisa setelah input sebelumnya. Hal ini dilakukan agar `getline()` dapat membaca input dengan benar tanpa terpengaruh oleh newline character yang masih tersisa. Tujuan dari penggunaan `cin.ignore()` sebelum `getline()` adalah untuk membersihkan newline character yang masih tersisa di buffer setelah pengguna memasukkan angka pada input sebelumnya menggunakan `cin >>`. Karena `cin >>` hanya membaca nilai angka dan tidak mengambil karakter newline, maka perlu dilakukan pembersihan buffer sebelum menggunakan `getline()` agar input tidak terganggu. Dengan demikian, penggunaan `cin.ignore()` sebelum `getline()` membantu program agar dapat membaca input dari pengguna dengan benar, terutama ketika menggunakan campuran antara `cin >>` dan `getline()`.


### 2. Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided I, berjenis Array. Bagaimana cara mengisi data dan menampilkannya ?

Jika deklarasi variabel struct Buku pada tugas guided I diubah menjadi array, misalnya dengan mendeklarasikan array buku[2], maka kita dapat menyimpan informasi buku dalam array tersebut. Dengan demikian, kita dapat mengakses dan mengelola informasi buku menggunakan indeks array. Untuk mengisi data, kita dapat menggunakan loop for untuk mengiterasi melalui array buku dan meminta input dari pengguna untuk setiap atribut buku. Setelah selesai mengisi data, kita dapat menggunakan loop for lagi untuk menampilkan informasi buku yang telah diisi sebelumnya dengan mengakses setiap elemen array buku dan menampilkan informasinya.

Dalam proses pengisian data, kita dapat menggunakan loop for untuk mengiterasi melalui array buku dan meminta pengguna untuk memasukkan informasi buku seperti judul, pengarang, penerbit, tebal buku, dan harga buku untuk setiap elemen array. Pengguna dapat memasukkan informasi buku melalui input dari keyboard, dan informasi tersebut disimpan ke dalam array buku sesuai dengan indeksnya. Setelah selesai mengisi data, kita dapat menggunakan loop for lagi untuk menampilkan informasi buku yang telah diisi sebelumnya dengan mengakses setiap elemen array buku dan menampilkan informasinya seperti yang dilakukan pada variabel buku1 dan buku2 sebelumnya.

Dengan menggunakan array untuk menyimpan informasi buku, kita dapat mengelola data buku secara lebih efisien dan terstruktur. Dengan pendekatan ini, kita dapat menyimpan dan mengakses informasi buku dengan mudah menggunakan indeks array, serta memungkinkan untuk menyimpan informasi buku dalam jumlah yang lebih besar. Proses pengisian data dan menampilkan informasi buku pada array buku akan memanfaatkan konsep array dan loop for untuk memproses setiap elemen array dengan cara yang serupa seperti pada contoh variabel buku1 dan buku2 sebelumnya.

```c++
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
```
#### output

![Screenshot (674)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/b66af785-fcda-4b5e-a648-2c967d4fce5d)

Coding di atas merupakan program C++ yang menggunakan struct `Buku` untuk menyimpan informasi tentang 5 buku. Program ini secara manual mengisi informasi dari 5 buku ke dalam array `buku` yang merupakan array dari struct `Buku`. Setiap elemen array `buku` menyimpan informasi seperti judul buku, pengarang, penerbit, tebal halaman, dan harga buku. Setelah semua informasi dimasukkan, program menampilkan informasi dari setiap buku dengan menggunakan indeks array. Pada bagian inisialisasi data buku, setiap elemen array `buku` diisi dengan informasi buku yang telah ditentukan secara manual. Misalnya, buku ke-0 memiliki judul "Bulan" karya "Tere Liye" dengan harga 95000. Setelah inisialisasi data buku, program menampilkan informasi setiap buku dengan menggunakan `cout`. Informasi yang ditampilkan meliputi judul, pengarang, penerbit, tebal halaman, dan harga buku untuk setiap buku.

## Kesimpulan

Struct dalam bahasa pemrograman C++ adalah fitur yang memungkinkan pengguna untuk membuat tipe data baru yang terstruktur. Dengan menggunakan struct, pengguna dapat mengelompokkan variabel-variabel terkait ke dalam satu entitas, membuat struktur data yang lebih kompleks. Penggunaan struct sangat berguna ketika ingin merepresentasikan objek dari kehidupan nyata atau entitas yang kompleks, seperti mahasiswa dengan informasi seperti nama, umur, dan nilai. Dengan struct, data terkait bisa disimpan dan diakses dalam satu entitas tunggal, menawarkan kemudahan dalam penyimpanan dan manipulasi data.

Keuntungan menggunakan struct dalam C++ termasuk kemampuannya untuk membantu mengorganisir data terkait menjadi satu entitas yang lebih mudah dipahami. Dengan struct, kode menjadi lebih bersih, terstruktur, dan modular, meningkatkan kemudahan dalam pemeliharaan dan pengembangan program. Akses data dalam struct dilakukan dengan menggunakan operator titik setelah variabel struct yang sesuai, memudahkan dalam manipulasi data dan penggunaan variabel-variabel dalam struct. Dengan pemahaman yang kuat akan konsep dan penggunaan struct, pengguna dapat memanfaatkannya untuk mengoptimalkan struktur data, mengelola informasi lebih efisien, dan meningkatkan kualitas pengembangan perangkat lunak.  

## Referensi
[1]  M. T. D. Putra, D. Pradeka, A. R. Yuniarti, and E. Damayanti, "BELAJAR DASAR PEMROGRAMAN DENGAN C++," CV WIDINA MEDIA UTAMA, 2022. <br>
[2] U. Indahyanti and Y. Rahmawati, "Buku Ajar Algoritma Dan Pemrograman Dalam Bahasa C++," UMSIDA Press, pp. 60-61, Sep. 2020. <br>
[3] Josuttis, N. M. (2019). "C++17: The Complete Guide". Nicolai Josuttis. <br>
[4] M. T. D. Putra, Munawir, A. R. Yuniarti, and Evi Damayanti, "BELAJAR PEMROGRAMAN LANJUT DENGAN C++," CV WIDINA MEDIA UTAMA, 2023. <br>
