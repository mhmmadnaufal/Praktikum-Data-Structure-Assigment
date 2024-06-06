# <h1 align="center">Laporan Praktikum Modul Graph and Tree</h1>
<p align="center">Muhammad Naufal | 2311110034 | SD-04B</p>

## Dasar Teori

#### Graph

Dalam bidang ilmu komputer, sebuah graf dapat dinyatakan sebagai sebuah struktur data, atau secara spesifik dinamakan sebagai ADT(abstract data type) yang terdiri dari kumpulan simpul dan sisi yang membangun hubungan antar simpul. Konsep ADT graf ini merupakan turunan konsep graf dari bidang kajian matematika.

Graf adalah kumpulan noktah (simpul) di dalam bidang dua dimensi yang dihubungkan dengan sekumpulan garis    (sisi). Graph dapat digunakan untuk merepresentasikan objek-objek diskrit dan hubungan antara objek-objek    tersebut. Representasi visual dari graph adalah dengan menyatakan objek sebagai noktah, bulatan atau titik (Vertex), sedangkan hubungan antara objek dinyatakan dengan garis (Edge) [1].

Graf merupakan suatu cabang ilmu yang memiliki banyak terapan. Banyak sekali struktur yang bisa direpresentasikan dengan graf, dan banyak masalah yang bisa diselesaikan dengan bantuan graf. Seringkali graf digunakan untuk merepresentasikan suaru jaringan. Misalkan jaringan jalan raya dimodelkan graf dengan kota sebagai simpul (vertex/node) dan jalan yang menghubungkan setiap kotanya sebagai sisi (edge) yang bobotnya (weight) adalah panjang dari jalan tersebut.

Secara umum terdapat dua macam representasi dari struktur data graf yang dapat diimplementasi. Pertama, disebut adjacency list, dan diimplementasi dengan menampilkan masing-masing simpul sebagai sebuah struktur data yang mengandung senarai dari semua simpul yang saling berhubungan. Yang kedua adalah representasi berupa adjacency matrix dimana baris dan kolom dari matriks (jika dalam konteks implementasi berupa senarai dua dimensi) tersebut merepresentasikan simpul awal dan simpul tujuan dan sebuah entri di dalam senarai yang menyatakan apakah terdapat sisi di antara kedua simpul tersebut [5]. Berikut penjelasannya : 

- Adjacency List

Dalam teori graf, adjacency list merupakan bentuk representasi dari seluruh sisi atau busur dalam suatu graf sebagai suatu senarai. Simpul-simpul yang dihubungkan sisi atau busur tersebut dinyatakan sebagai simpul yang saling terkait. Dalam implementasinya, hash table digunakan untuk menghubungkan sebuah simpul dengan senarai berisi simpul-simpul yang saling terkait tersebut. 

- Adjacency Matrix

Adjacency Matrix merupakan representasi matriks nxn yang menyatakan hubungan antar simpul dalam suatu
graf. Kolom dan baris dari matriks ini merepresentasikan simpul-simpul, dan nilai entri dalam matriks ini menyatakan hubungan antar simpul, apakah terdapat sisi yang menghubungkan kedua simpul tersebut. Pada sebuah matriks nxn, entri non-diagonal aij merepresentasikan sisi dari simpul i dan simpul j. Sedangkan entri diagonal aii menyatakan sisi

Kelebihan dari adjacency matrix ini adalah elemen matriksnya dapat diakses langsung melalui indeks, dengan begitu hubungan ketetanggan antara kedua simpul dapat ditentukan dengan langsung. Sedangkan kekurangan pada representasi ini adalah bila graf memiliki jumlah sisi atau busur yang relatif sedikit, karena matriksnya bersifat jarang yaitu hanya mengandung elemen bukan nol yang sedikit. Kasus seperti ini merugikan, karena kebutuhan ruang memori untuk matriks menjadi boros dan tidak efisien karena komputer menyimpan elemen 0 yang tidak perlu [5]. 

Ada beberapa cara untuk menyimpan graph di dalam sitem komputer. Struktur data bergantung pada struktur graph dan algoritma yang digunakan untuk  memmanipulasi graph. Secara teori salah satu dari keduanya dapat dibedakan   antara struktur list dan matriks, tetapi dalam penggunaannya struktur terbaik yang sering digunakan adalah   kombinasi keduanya.

#### Tree

Tree merupakan struktur data yang terdiri dari entitas (node) yang saling berkaitan melalui sebuah penyambung (edge). Pada program, node sering kali merepresentasikan suatu entiti seperti orang, barang, dan lain sebagainya. Sedangkan edge antar node merepresentasikan hubungan antar node tersebut. Node paling atas disebut dengan root. Node yang berada pada posisi lebih tinggi disebut dengan parent, dan yang berada dibawahnya disebut children. Node dengan posisi yang sama disebut sibling. Node dengan posisi paling rendah disebut leaf [2]. Ada beberapa jenis tree, salah satunya adalah binary tree. Tiap node pada binary tree memiliki maksimal 2 children. Tree dapat diimplementasikan dengan menyimpan node pada memori sebagai sebuah array. Atau, tree juga dapat diimplementasikan dengan menyimpan node pada memori dan menghubungkannya menggunakan references pada tiap node yang menunjuk pada children node tersebut [3].

Struktur tree digunakan banyak di berbagai area. Struktur organisasi banyak digunakan di suatu perusahaan    menyerupai struktur pohon. Sebagai contoh, seorang direktur di perusahaan membawahi wakil direktur. Namun, yang  terjadi saat ini adalah orang-orang yang dihadapkan dengan struktur seperti ini membangun model data dan komponen pengelolaan datanya secara sendiri. Setiap orang membangun model data pohonnya sendiri sekaligus  komponen pengelolaan datanya. Terlebih lagi, struktur pohon yang dikelola pada struktur data eksternal tidak  banyak dibahas [4].

Berikut contoh struktur tree

![Screenshot (864)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/67e19283-cd04-4167-9d63-47a062c1e09c)

Proses hapus node pada tree cukup kompleks dibandingkan dengan operasi lain. Langkah pertama yang dilakukan adalah mencari node yang akan dihapus. Terdapat 3 kemungkinan kondisi node yang akan dihapus, yaitu:
- Node yang akan dihapus adalah leaf, yang berarti node tersebut tidak memiliki children. Untuk kondisi ini, langkah penghapusan cukup sederhana
- Node yang akan dihapus memiliki satu child. Penghapusan node pada kondisi ini tidak semudah kondisi pertama
- Node yang akan dihapus memiliki dua children. Penghapusan node kondisi ini cukup rumit.


## Guided 

### 1. Program Graph

```C++ 
#include <iostream>
#include <iomanip>

using namespace std;

string simpul [7] = {"Ciamis", "Bandung", "Bekasi", "Tasikmalaya", "Cianjur", "Purwokerto", "Yogyakarta"};

int busur [7][7] = {
    {0,7,8,0,0,0,0},
    {0,0,5,0,9,15,0},
    {0,5,0,9,5,0,0},
    {0,0,0,2,4,0,0},
    {3,0,0,1,0,0,0},
    {0,0,7,0,0,9,4},
    {0,0,0,0,8,0,0},

};

void tampilGraph() {
    for (int baris = 0; baris < 7; baris++) {
        cout << simpul [baris] << " : ";
        for (int kolom = 0; kolom < 7; kolom++) {
            if (busur[baris][kolom] != 0)
                cout << " -> " << simpul[kolom] << "(" << busur [baris][kolom] << ")";
        }
        cout << endl;
    }
}

int main() {
    tampilGraph();
    return 0;
}
```
#### Output

![Screenshot (865)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/fb4af9a7-213a-4b43-a257-88294542e58b)

Program diatas merupakan representasi dari hubungan jarak antar kota di beberapa tempat di Indonesia dalam bentuk graf. Program tersebut memanfaatkan matriks untuk merepresentasikan keterhubungan antara kota-kota tersebut.

Pertama, terdapat array `simpul` yang berisi daftar nama kota yang akan direpresentasikan dalam graf. Dalam kasus ini, terdapat 7 kota yang terdaapat di Indonesia yang dinyatakan dalam array tersebut. Selanjutnya, terdapat array `busur` yang berupa matriks berukuran 7x7 yang merepresentasikan jarak antar kota. Nilai pada posisi tertentu dalam matriks ini menunjukkan jarak antara dua kota yang terhubung. Jika terdapat koneksi antara dua kota, maka nilai pada posisi tersebut tidak sama dengan 0. Sebaliknya, jika tidak ada koneksi, maka nilainya 0.

Selanjutnya, terdapat fungsi `tampilGraph()` yang digunakan untuk menampilkan graf dalam bentuk representasi terhubung antara kota-kota. Fungsi ini melakukan iterasi pada array matriks `busur` dan menampilkan kota-kota yang terhubung serta jaraknya. Pada bagian `main()`, fungsi `tampilGraph()` dipanggil untuk menampilkan representasi graf jarak antar kota.

Dengan demikian, program tersebut merangkum hubungan jarak antar kota di beberapa tempat di Indonesia dalam bentuk grafik yang dapat divisualisasikan dan dipahami lebih baik. Program ini merupakan representasi yang tepat untuk memahami hubungan jarak antar kota dan dapat membantu dalam perencanaan perjalanan atau transportasi.

### 2. Tree

```C++ 
#include <iostream>

using namespace std;

//Definisi struktur pohon
struct pohon {
    pohon* kanan;
    char data;
    pohon* kiri;
};

//Definisi variabel global
pohon* simpul;
pohon* root;
pohon* saatIni;
pohon* helperA;
pohon* helperB;
pohon* alamat[256];

//Fungsi untuk inisialisasi root
void inisialisasi() {
    root = NULL;
}

//Fungsi untuk membuat simpul baru
void simpulBaru(char dataMasukkan) {
    simpul = new pohon;
    simpul->data = dataMasukkan;
    simpul->kanan = NULL;
    simpul->kiri = NULL;
}

// Fungsi untuk membuat simpul akar
void simpulAkar() {
    if (root == NULL) {
        char dataAnda;
        cout << "Silahkan masukkan data anda : ";
        cin >> dataAnda;
        simpulBaru(dataAnda);
        root = simpul;
        cout << "Root terbentuk...." << endl;
    } else {
        cout << "Root sudah ada...." << endl;
    }
}

//Fungsi untuk menambah simpul
void tambahSimpul() {
    if (root != NULL) {
        int i = 1, j = 1, penanda = 0;
        char dataUser;
        alamat[i] = root;

        while (penanda == 0 && j < 256) {
            cout << "Masukkan data kiri: ";
            cin >> dataUser;
            if (dataUser != '0') {
                simpulBaru(dataUser);
                saatIni = alamat[i];
                saatIni->kiri = simpul;
                j++;
                alamat[j] = simpul;
            } else {
                penanda = 1;
                j++;
                alamat[j] = NULL;
            }
            if (penanda == 0) {
                cout << "Masukkan data kanan: ";
                cin >> dataUser;
                if (dataUser != '0') {
                    simpulBaru(dataUser);
                    saatIni = alamat[i];
                    saatIni->kanan = simpul;
                    j++;
                    alamat[j] = simpul;
                } else {
                    penanda = 1;
                    j++;
                    alamat[j] = NULL;
                }
            }
            i++;
        }
    }
}

//Fungsi untuk membaca pohon
void bacaPohon() {
    if (root != NULL) {
        int i = 1, n = 1, pencacah = 0;
        cout << endl;
        while (alamat[i] != NULL) {
            saatIni = alamat[i];
            cout << saatIni->data << " ";
            pencacah++;
            if (pencacah == n) {
                cout << endl;
                pencacah = 0;
                n = n * 2;
            }
            i++;
        }
    }
}

//Fungsi uatama
int main() {
    inisialisasi();
    simpulAkar();
    tambahSimpul();
    bacaPohon();
    return 0;
}
```
#### Output

![Screenshot (866)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/985f73db-3ca7-4569-a985-e6bd26815ae4)

Codingan diatas merupakan implementasi program dalam bahasa pemrograman C++ yang menggunakan struktur data pohon (tree). Program diatas memanfaatkan struktur data `pohon` yang terdiri dari data bertipe karakter (`char`) serta pointer ke simpul kanan dan simpul kiri. Dalam program diatas, terdapat beberapa variabel global yang digunakan untuk manipulasi pohon, seperti variabel `root` yang berperan sebagai simpul akar pohon, variabel `saatIni` yang merupakan pointer ke simpul saat ini dalam proses iterasi, dan beberapa variabel bantuan lainnya.

Program ini dilengkapi dengan beberapa fungsi utama, antara lain: <br>
1. `inisialisasi()`: Berfungsi untuk menginisialisasi simpul akar pohon.
2. `simpulBaru()`: Digunakan untuk membuat simpul baru dengan data yang telah diberikan.
3. `simpulAkar()`: Berperan dalam pembentukan simpul akar pohon. Jika simpul akar belum ada, pengguna diminta untuk memasukkan data untuk simpul tersebut.
4. `tambahSimpul()`: Fungsi yang bertujuan untuk menambahkan simpul baru ke dalam pohon. Pengguna diminta untuk memasukkan data simpul kiri dan kanan secara berurutan hingga tidak ada data tambahan yang dimasukkan.
5. `bacaPohon()`: Fungsi ini digunakan untuk membaca pohon dan menampilkan data dari setiap simpul dalam pohon sesuai dengan urutan yang telah ditentukan.

Dalam fungsi `main()`, program akan menjalankan proses inisialisasi pohon, membuat simpul akar, menambahkan simpul-simpul tambahan, dan terakhir membaca pohon untuk menampilkan data yang ada sesuai dengan struktur pohon biner yang terbentuk. Program tersebut merupakan  implementasi sederhana dari struktur data pohon dalam bahasa pemrograman C++, yang dapat berguna dalam pengembangan aplikasi yang membutuhkan struktur data hierarkis seperti pohon.

## Unguided 

### 1. Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya

```C++
#include <iostream>
#include <vector>
#include <iomanip> // Untuk std::setw()

using namespace std;

// Fungsi untuk menampilkan graph
void tampilGraph(vector<string>& simpul, vector<vector<int>>& busur) {
    int n = simpul.size();
    cout << "\nGraph:\n";
    for (int i = 0; i < n; i++) {
        cout << simpul[i] << " : ";
        for (int j = 0; j < n; j++) {
            if (busur[i][j] != 0) {
                cout << " -> " << simpul[j] << "(" << busur[i][j] << ")";
            }
        }
        cout << endl;
    }
}

int main() {
    int jumlahSimpul_2311110034;
    cout << "Silakan masukkan jumlah simpul: ";
    cin >> jumlahSimpul_2311110034;

    // Memuat simpul (node) ke dalam vektor
    vector<string> simpul(jumlahSimpul_2311110034);
    vector<vector<int>> busur(jumlahSimpul_2311110034, vector<int>(jumlahSimpul_2311110034, 0));

    // Memasukkan nama simpul
    for (int i = 0; i < jumlahSimpul_2311110034; i++) {
        cout << "Simpul " << i + 1 << " : ";
        cin >> simpul[i];
    }

    cout << "Silakan masukkan bobot antar simpul:\n";
    for (int i = 0; i < jumlahSimpul_2311110034; i++) {
        for (int j = 0; j < jumlahSimpul_2311110034; j++) {
            cout << simpul[i] << " ---> " << simpul[j] << " = ";
            cin >> busur[i][j];
        }
    }

    // Menampilkan matriks adjacency
    cout << "\nMatriks Adjacency:\n";
    cout << setw(10) << "";
    for (int i = 0; i < jumlahSimpul_2311110034; i++) {
        cout << setw(10) << simpul[i];
    }
    cout << endl;

    for (int i = 0; i < jumlahSimpul_2311110034; i++) {
        cout << setw(10) << simpul[i];
        for (int j = 0; j < jumlahSimpul_2311110034; j++) {
            cout << setw(10) << busur[i][j];
        }
        cout << endl;
    }

    tampilGraph(simpul, busur);

    return 0;
}
```
#### Output :

![Screenshot (867)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/b178ae69-eb45-45f8-8b80-5789723fb1a7)

codingan diatas digunakan untuk merepresentasikan sebuah Graph berdasarkan input jumlah simpul dan hubungan antar simpul beserta bobotnya. Program menggunakan vektor untuk menyimpan nama simpul serta matriks adjacency untuk merepresentasikan hubungan antar simpul tersebut. Setelah memasukkan data tentang simpul dan bobot hubungan antar simpul, program akan menampilkan matriks adjacency yang menunjukkan hubungan antar simpul dalam bentuk tabel, serta menampilkan representasi visual Graph berdasarkan data yang dimasukkan.

Pada program tersebut, include <iomanip> digunakan untuk mengakses fungsi std::setw() yang berfungsi untuk mengatur lebar kolom output saat menampilkan data dalam bentuk tabel. Sedangkan include <vector> digunakan untuk menggunakan struktur data vektor yang memungkinkan penyimpanan data dinamis dengan ukuran yang dapat berubah sesuai kebutuhan program. Dengan menggunakan vektor, program dapat dengan fleksibel menyimpan data simpul dan bobot hubungan antar simpul tanpa harus membatasi ukuran data sejak awal. Dengan demikian, kedua include tersebut membantu dalam mempermudah proses input/output data serta menyediakan struktur data yang efisien dalam mengimplementasikan Graph berbasis matriks adjacency.

### 2. Modifikasi guided tree diatas dengan program menu menggunakan input data tree dari user dan tampilkan pada pre-order, inorder, dan post order!

```C++
#include <iostream>

using namespace std;

// Definisi struktur pohon
struct pohon {
    pohon* kanan;
    char data;
    pohon* kiri;
};

// Definisi variabel global
pohon* root;
pohon* simpul;

// Fungsi untuk inisialisasi root
void inisialisasi() {
    root = NULL;
}

// Fungsi untuk membuat simpul baru
void simpulBaru(char dataMasukkan) {
    simpul = new pohon;
    simpul->data = dataMasukkan;
    simpul->kanan = NULL;
    simpul->kiri = NULL;
}

// Fungsi untuk membuat simpul akar
void simpulAkar() {
    if (root == NULL) {
        char dataAnda;
        cout << "Silahkan masukkan data root: ";
        cin >> dataAnda;
        simpulBaru(dataAnda);
        root = simpul;
        cout << "Root terbentuk...." << endl;
    } else {
        cout << "Root sudah ada...." << endl;
    }
}

// Fungsi untuk menambah simpul secara rekursif
void tambahSimpul(pohon* node) {
    char dataUser_MuhammadNaufal;
    if (node != NULL) {
        cout << "Masukkan data untuk simpul kiri dari " << node->data << " (atau '0' untuk kosong): ";
        cin >> dataUser_MuhammadNaufal;
        if (dataUser_MuhammadNaufal != '0') {
            simpulBaru(dataUser_MuhammadNaufal);
            node->kiri = simpul;
            tambahSimpul(node->kiri);
        }

        cout << "Masukkan data untuk simpul kanan dari " << node->data << " (atau '0' untuk kosong): ";
        cin >> dataUser_MuhammadNaufal;
        if (dataUser_MuhammadNaufal != '0') {
            simpulBaru(dataUser_MuhammadNaufal);
            node->kanan = simpul;
            tambahSimpul(node->kanan);
        }
    }
}

// Fungsi untuk menambah simpul ke tree
void tambahSimpul() {
    if (root != NULL) {
        tambahSimpul(root);
    } else {
        cout << "Silakan buat root terlebih dahulu!" << endl;
    }
}

// Fungsi pre-order traversal
void preOrder(pohon* node) {
    if (node != NULL) {
        cout << node->data << " ";
        preOrder(node->kiri);
        preOrder(node->kanan);
    }
}

// Fungsi in-order traversal
void inOrder(pohon* node) {
    if (node != NULL) {
        inOrder(node->kiri);
        cout << node->data << " ";
        inOrder(node->kanan);
    }
}

// Fungsi post-order traversal
void postOrder(pohon* node) {
    if (node != NULL) {
        postOrder(node->kiri);
        postOrder(node->kanan);
        cout << node->data << " ";
    }
}

// Menu utama
int main() {
    int pilihan_2311110034;
    inisialisasi();

    do {
        cout << "\nMenu: \n";
        cout << "1. Buat Root\n";
        cout << "2. Tambah Simpul\n";
        cout << "3. Tampilkan Pre-Order\n";
        cout << "4. Tampilkan In-Order\n";
        cout << "5. Tampilkan Post-Order\n";
        cout << "6. Keluar\n";
        cout << "Masukkan pilihan: ";
        cin >> pilihan_2311110034;

        switch (pilihan_2311110034) {
            case 1:
                simpulAkar();
                break;
            case 2:
                tambahSimpul();
                break;
            case 3:
                cout << "Pre-Order Traversal: ";
                preOrder(root);
                cout << endl;
                break;
            case 4:
                cout << "In-Order Traversal: ";
                inOrder(root);
                cout << endl;
                break;
            case 5:
                cout << "Post-Order Traversal: ";
                postOrder(root);
                cout << endl;
                break;
            case 6:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan_2311110034 != 6);

    return 0;
}
```
#### Output :

![Screenshot (861)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/af6dd121-a31c-4b72-b578-90e2e414f48c)

![Screenshot (862)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/b1dbf731-74df-49f2-a9ba-877c136987c1)

![Screenshot (863)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/38a3f5d8-bb21-4b1c-9c23-4c14d465a79f)

Program diatas mengimplementasikan struktur data pohon (tree). Program diatas memungkinkan pengguna untuk membuat sebuah pohon biner dan melakukan operasi-operasi dasar seperti membuat simpul, menambahkan simpul, serta melakukan penelusuran (traversal) pre-order, in-order, dan post-order dari pohon yang telah dibentuk.

Pertama, program mendefinisikan sebuah struktur `pohon` yang memiliki tiga anggota: pointer ke simpul kanan (`kanan`), karakter data (`data`), dan pointer ke simpul kiri (`kiri`). Variabel global `root` dan `simpul` dideklarasikan untuk menyimpan simpul akar pohon dan variabel sementara saat pembentukan simpul baru.

Program mengimplementasikan beberapa fungsi yang relevan untuk operasi pada pohon. Fungsi `inisialisasi()` digunakan untuk mengatur variabel `root` menjadi `NULL`. Fungsi `simpulBaru()` digunakan untuk membuat simpul baru dengan data yang diberikan. Fungsi `simpulAkar()` digunakan untuk membuat simpul akar pohon. Fungsi `tambahSimpul(pohon* node)` merupakan fungsi rekursif yang menambahkan simpul kiri dan kanan secara berurutan ke pohon. Terdapat pula fungsi penelusuran, yaitu `preOrder()`, `inOrder()`, dan `postOrder()`, yang masing-masing melakukan penelusuran pohon secara pre-order, in-order, dan post-order.

Dalam fungsi `main()`, program menyediakan sebuah menu yang memungkinkan pengguna untuk membuat root, menambah simpul, menampilkan traversal pre-order, in-order, atau post-order, serta keluar dari program. Seluruh operasi pada pohon dilakukan melalui interaksi dengan pengguna menggunakan cin dan cout. Dengan adanya program ini, pengguna dapat dengan mudah membuat pohon biner, menambahkan simpul, dan melakukan penelusuran sesuai dengan kebutuhan aplikasi yang memanfaatkan struktur data hierarkis seperti pohon.


## Kesimpulan

Dari penjelasan di atas, dapat disimpulkan bahwa Graph dan Tree merupakan struktur data yang fundamental dan penting dalam bidang ilmu komputer. Graph, dengan simpul dan sisi sebagai elemen dasarnya, digunakan untuk merepresentasikan objek-objek diskrit dan hubungan antara objek tersebut. Representasi visual dari Graph melibatkan vertex dan edge, dengan dua representasi data yang umum digunakan, yaitu adjacency list dan adjacency matrix. 

Sementara itu, Tree adalah struktur data berupa simpul yang terhubung melalui edge, di mana setiap node memiliki hubungan parent, children, sibling, root, dan leaf, dengan implementasi khusus seperti binary tree dengan maksimal dua children per node. Proses menghapus node pada Tree dapat menjadi kompleks tergantung pada kondisi node yang akan dihapus, yang dapat berupa leaf, memiliki satu child, atau memiliki dua children. 

## Referensi
[1] M. R. SAFEI, “PENGERTIAN STRUKTUR DATA NON LINIER”, 28-Mar-2019. [Online]. Available: osf.io/zacmk. <br>
[2] Trianto, Rahmawan Bagus, and M. Kom. "Struktur Data dan Algoritma." <br>
[3] Holle, Khadijah Fahmi Hayati. "Modul praktikum struktur data." (2022). <br>
[4] Agustin, Serly, et al. "IMPLEMENTASI STRUKTUR DATA TREE PADA WEB BLOG SEBAGAI MEDIA PEMBELAJARAN." Jurnal Informatika Dan Tekonologi Komputer (JITEK) 2.2 (2022): 206-212. <br>
[5] Anggara, Fajar Dwi. "Studi dan Implementasi Struktur Data Graf." Jurnal Sekolah Teknik Elektro dan Informatika Institut Teknologi Bandung, Bandung (2009).