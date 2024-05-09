# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Muhammad Naufal | 2311110034</p>

## Dasar Teori

Array merupakan struktur data yang paling dasar dalam sebuah bahasa pemrograman. Array dapat mempermudah dalam menyimpan data karena array berisi komponen-komponen yang memiliki tipe data yang sama yang setiap anggota array dapat diakses melalui suatu indeks. Setiap nomor index dalam array dialokasikan dalam ruang memori tertentu. Dalam bahasa pemrograman C++, ukuran dan tipe array tidak dapat diubah setelah deklarasinya[1]. 

Array dapat dibagi menjadi beberapa jenis yaitu :
1. Array satu dimensi
2. Array dua dimensi 
3. Array multidimensi
4. Array empat dimensi
5. Array lima dimensi

Berikut penjelasannya dari masing masing array diatas :

### 1. Array satu dimensi :

Array satu dimensi atau dapat disebut dengan vektor adalah tipe variabel yang berisi kumpulan data dengan tipe data yang sama dan disusun dalam satu baris atau satu dimensi. Array satu dimensi relatif sederhana untuk dipahami dan digunakan dan biasanya digunakan untuk menyimpan data yang tidak memiliki hubungan spasial, seperti daftar nama atau nilai.

- Bentuk umum: <br>
tipeData NamaArray [JumlahElemen] = {<Inisialisasi>}; <br>
int Bola [10] = { 17, 21, 33, dst};

- contoh : <br>
unsigned int Tinggi Badan [100];//deklarasi array <br>
bool Hadir [5] = {true, true, false, false);//pemberian nilai array pada inisialisasi

Pendeklarasian array diawali dengan penyebutan tipe data diikuti nama variabel array, diikuti jumlah elemen. Jika array hendak diberi nilai awal, nilai-nilai awal dituliskan dalam inisialisasi. Jika inisialisasi kurang dari jumlah elemen array, sisanya akan diinisialisasikan dengan nol. Elemen array diakses dengan menyebutkan indeks posisi elemen tersebut dalam array. Elemen pertama array memiliki indeks 0[2].

### 2. Array dua dimensi :

Array dua dimensi atau yang sering dikenal dengan istilah matriks merupakan Pengembangan dari Array satu dimensi, jika pada array satu dimensi hanya terdiri dari satu baris dan beberapa kolom saja, maka untuk array dua dimensi ini terdiri lebih dari satu (beberapa) baris dan kolom. Dengan demikian array dua dimensi tersusun dalam bentuk kolom serta baris, yang mana indeks pertamanya dinyatakan sebagai baris dan untuk indeks keduanya dinyatakan sebagai kolom [3]. 

Array dua dimensi digunakan untuk menyimpan data yang memiliki hubungan spasial, seperti gambar, tabel, atau matriks. Setiap elemen dalam array ini diakses dengan dua indeks, yaitu indeks baris dan indeks kolom. Indeks baris menentukan posisi elemen di baris tertentu, dan indeks kolom menentukan posisi elemen di kolom tertentu.

### 3. Array multidimensi :

Array Multidimensi merupakan array yang serupa dengan array satu dimensi maupun array dua dimensi, namun array multidimensi dapat memiliki memori yang lebih besar. Biasanya array multidimensi digunakan untuk menyebut array dengan dimensi lebih dari dua atau array yang mempunyai lebih dari dua subskrip, seperti untuk menyebut array tiga dimensi, empat dimensi, lima dimensi dan seterusnya.
- Deklarasi Array Multidimensi <br>
tipedata namaarray [ukuran1][ukuran2]...[ukuranN]; <br>
Di mana : <br>
    - tipedata: Tipe data yang akan disimpan dalam array.
    - Nama array: Nama array.
    - size1, size2,…, sizeN: Ukuran setiap dimensi.

### 4. Array empat dimensi :

Dalam bahasa pemrograman C++, array empat dimensi adalah struktur data yang terdiri dari empat level dimensi. Dalam C++. Setiap elemen dalam array 4 dimensi diakses menggunakan 4 indeks. Misalnya, jika kita memiliki array 4 dimensi dengan bentuk (a, b, c, d), maka kita akan memerlukan 4 indeks (i, j, k, l) untuk mengakses elemen tertentu di dalamnya. Array empat dimensi dapat didefinisikan dengan menggunakan sintaks berikut: <br>
int array[a][b][c][d]; <br>
Di mana: <br>
- int adalah tipe data elemen dalam array <br>
- a, b, c, dan d adalah ukuran array untuk masing-masing dimensi

Array empat dimensi dalam C++ dapat digunakan untuk menyimpan data yang terstruktur dalam empat level hierarki yang berbeda. Meskipun jarang digunakan dalam kasus umum, array empat dimensi dapat berguna dalam kasus-kasus khusus di mana data perlu diorganisir dalam struktur yang kompleks.

### 5. Array lima dimensi :

Dalam bahasa pemrograman C++, array lima dimensi adalah struktur data yang terdiri dari lima level dimensi. Dalam C++, array lima dimensi dapat didefinisikan dengan menggunakan sintaks berikut: <br>
int array[a][b][c][d][e]; <br>
Di mana: <br>
- int adalah tipe data elemen dalam array
- a, b, c, d, dan e adalah ukuran array untuk masing-masing dimensi

Array lima dimensi dalam C++ dapat digunakan untuk menyimpan data yang terstruktur dalam lima level hierarki yang berbeda. Meskipun jarang digunakan dalam kasus umum, array lima dimensi dapat berguna dalam kasus-kasus khusus di mana data perlu diorganisir dalam struktur yang sangat kompleks, seperti dalam pemrosesan citra medis, simulasi fisika, atau pemodelan matematika yang kompleks. Array lima dimensi memungkinkan representasi data yang lebih kompleks dan struktur yang lebih dalam dibandingkan dengan array berdimensi lebih rendah.

## Guided 

### GUIDED-1 (Program input array tiga dimensi)

```C++
#include <iostream>
using namespace std;
// PROGRAM INPUT ARRAY 3 DIMENSI
int main()
{
    //Deklarasi array
    int arr [2][3][3];
    // Input elemen
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr [x][y][z];
        
            }
        }
        cout << endl;
    }
    // Output Array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}
```
#### Output

![Screenshot (562)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/85727ed3-13d7-4ca8-94eb-61be0bba6827)

Codingan di atas merupakan program untuk menginputkan dan menampilkan array 3 dimensi berukuran 2x3x3. Pertama, program mendeklarasikan array arr dengan ukuran 2x3x3. Selanjutnya, program meminta pengguna untuk memasukkan nilai elemen-elemen array tersebut dengan menggunakan tiga nested loop untuk mengakses setiap elemen array sesuai dengan dimensinya. Pengguna diminta untuk memasukkan nilai dari setiap elemen array dengan format "Array[x][y][z] = nilai".

Setelah selesai menginputkan nilai elemen array, program akan menampilkan isi array 3 dimensi tersebut ke layar. Program menggunakan nested loop kembali untuk melakukan iterasi dan mencetak nilai setiap elemen array ke layar dengan format yang sesuai. Dengan demikian, program tersebut memungkinkan pengguna untuk menginputkan dan melihat isi dari array 3 dimensi berukuran 2x3x3 secara sistematis dan terstruktur. 

### GUIDED-2 (Program mencari nilai maksimal pada array)

```C++
#include <iostream>
using namespace std;

int main(){
    int maks, a, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;

    if (a <= 0){
        cout << "Panjang array harus lebih besar dari 0." << endl;
        return 1; //Return 1 to indicate error
    }

    int array[a];
    cout << "Masukkan " << a << " angka\n";

    for (int i = 0; i < a; i++){
        cout << "Array ke-" << (i + 1) << ": ";
        cin >> array[i];
    }

    maks = array[0];
    lokasi = 0;

    for (int i = 1;i < a; i++){
        if (array[i] > maks){
            maks = array[i];
            lokasi = i;
        }
    }

    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << (lokasi + 1) << endl;

    return 0; //Return 0 to indicate successfull execution
}
```
#### Output

![Screenshot (563)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/1fb2833f-5f4c-4136-a394-41daa5640e52)


Codingan di atas merupakan program sederhana yang bertujuan untuk mencari nilai maksimum dari array yang diinputkan oleh pengguna. Pertama, program akan meminta pengguna untuk memasukkan panjang array, kemudian meminta pengguna untuk memasukkan nilai-nilai array tersebut. Selanjutnya, program akan melakukan iterasi pada setiap elemen array untuk mencari nilai maksimum. Proses pencarian nilai maksimum dilakukan dengan membandingkan setiap elemen array dengan nilai maksimum sementara yang disimpan dalam variabel 'maks'. Jika nilai elemen array lebih besar dari nilai maksimum sementara, maka nilai maksimum sementara akan diperbarui bersama dengan indeksnya yang disimpan dalam variabel 'lokasi'.

Setelah selesai melakukan iterasi, program akan mencetak nilai maksimum beserta indeksnya ke layar. Jika panjang array yang diinputkan oleh pengguna kurang dari atau sama dengan 0, program akan mencetak pesan kesalahan dan mengembalikan nilai 1 untuk menandakan adanya kesalahan. Namun, jika panjang array valid dan proses pencarian nilai maksimum selesai tanpa masalah, program akan mengembalikan nilai 0 untuk menandakan bahwa eksekusi program telah berhasil. Dengan demikian, program tersebut memberikan pengguna informasi mengenai nilai maksimum dari array yang telah diinputkan serta lokasi indeks dari nilai maksimum tersebut.

## Unguided 

### 1. Buatlah program untuk menampilkan output seperti berikut dengan data yang diinputkan oleh user!

![Screenshot (561)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/ec13f030-e35d-479a-8d8e-be4159ee47df)


```C++
#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int data[MAX_SIZE];
    int genap[MAX_SIZE], ganjil[MAX_SIZE];
    int dataCount = 0, genapCount = 0, ganjilCount = 0;

    cout << "Masukkan data array: ";
    int num;
    while (cin.peek() != '\n' && dataCount < MAX_SIZE) {
        cin >> num;
        data[dataCount] = num;
        dataCount++;
        if (num % 2 == 0) {
            genap[genapCount] = num;
            genapCount++;
        } else {
            ganjil[ganjilCount] = num;
            ganjilCount++;
        }
    }

    cout << "Data array:";
    for (int i = 0; i < dataCount; ++i) {
        cout << " " << data[i];
    }

    cout << "\nNomor genap:";
    for (int i = 0; i < genapCount; ++i) {
        cout << " " << genap[i];
    }

    cout << "\nNomor ganjil:";
    for (int i = 0; i < ganjilCount; ++i) {
        cout << " " << ganjil[i];
    }

    return 0;
}
```
#### Output:

![Screenshot (569)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/b0e38ca8-7154-45b3-b6a7-520400f409d9)

Code di atas merupakan program sederhana dalam bahasa C++ yang meminta pengguna untuk memasukkan data array. Program akan terus menerima input angka hingga pengguna menekan tombol Enter. Setelah semua data dimasukkan, program akan memisahkan angka genap dan ganjil dari data array tersebut. Kemudian, program akan menampilkan data array yang dimasukkan oleh pengguna, diikuti dengan angka genap dan angka ganjil yang dipisahkan. Program ini menggunakan array untuk menyimpan data array, angka genap, dan angka ganjil. Selain itu, program juga menggunakan variabel untuk menghitung jumlah data yang dimasukkan dan jumlah angka genap serta ganjil.

Program ini dapat membantu pengguna untuk memahami cara memisahkan angka genap dan ganjil dari sebuah data array yang dimasukkan. Dengan menggunakan loop while dan kondisi cin.peek() != '\n', program akan terus menerima input angka hingga pengguna menekan tombol Enter. Setelah semua data dimasukkan, program akan menampilkan data array beserta angka genap dan ganjil yang dipisahkan. Dengan demikian, pengguna dapat dengan mudah melihat pemisahan angka genap dan ganjil dari data array yang dimasukkan.

### 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!

```c++
#include <iostream>
using namespace std;

int main() 
{
    int x, y, z;
    cout << "Masukkan jumlah baris: ";
    cin >> x;
    cout << "Masukkan jumlah kolom: ";
    cin >> y;
    cout << "Masukkan jumlah layer: ";
    cin >> z;

    int arr[x][y][z];

    for (int a = 0; a < x; a++) 
    {
        for (int b = 0; b < y; b++) 
        {
            for (int c = 0; c < z; c++) 
            {
                cout << "Input array[" << a << "][" << b << "][" << c << "] = ";
                cin >> arr[a][b][c];
            }
        }
        cout << endl;
    }

    for (int a = 0; a < x; a++)
    {
        for (int b = 0; b < y; b++)
        {
            for (int c = 0; c < z; c++)
            {
                cout << "Data Array[" << a << "][" << b << "][" << c << "] = " << arr[a][b][c] << endl;
            }
        }
    }
    cout << endl;

    for (int a = 0; a < x; a++)
    {
        for (int b = 0; b < y; b++)
        {
            for(int c = 0; c < z; c++)
            {
                cout << arr[a][b][c] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
```
#### output

![Screenshot (565)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/47f56684-6dc6-4b92-b489-f3a1bd257172) <br>

![Screenshot (566)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/8253c701-73de-44a6-94cc-b7ec64fb434f)

Hasil output program tersebut menunjukkan proses penginputan dan penampilan data dari array tiga dimensi yang telah diisi oleh pengguna. Pengguna diminta untuk memasukkan jumlah baris, kolom, dan layer array, kemudian memasukkan nilai-nilai elemen array sesuai dengan indeksnya. Setelah semua nilai diinputkan, program menampilkan data array dengan format "Data Array[i][j][k] = nilai" yang mencakup semua nilai yang telah dimasukkan sebelumnya.

Selain itu, program juga menampilkan seluruh elemen array dalam format matriks tiga dimensi, di mana setiap baris mewakili satu layer dari array tiga dimensi. Dengan demikian, pengguna dapat melihat dengan jelas struktur dan nilai-nilai dari array tiga dimensi yang telah diinputkan. Dari output tersebut, dapat terlihat bahwa nilai-nilai yang dimasukkan oleh pengguna berhasil disimpan dan ditampilkan dengan benar sesuai dengan indeksnya dalam array tiga dimensi.

### 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata–rata dari suatu array dengan input yang dimasukan oleh user!

```c++
#include <iostream>

double hitungMaksimum(int arr[], int n) {
    int maksimum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maksimum) {
            maksimum = arr[i];
        }
    }
    return maksimum;
}

double hitungMinimum(int arr[], int n) {
    int minimum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }
    return minimum;
}

double hitungRataRata(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / n;
}

int main() {
    int n;
    std::cout << "Masukkan jumlah elemen dalam array: ";
    std::cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        std::cout << "Masukkan elemen ke-" << i + 1 << ": ";
        std::cin >> arr[i];
    }

    int choice;
    do {
        std::cout << "Menu Pilihan:" << std::endl;
        std::cout << "1. Hitung Maksimum" << std::endl;
        std::cout << "2. Hitung Minimum" << std::endl;
        std::cout << "3. Hitung Rata-rata" << std::endl;
        std::cout << "4. Keluar" << std::endl;
        std::cout << "Pilih menu (1/2/3/4): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Nilai Maksimum: " << hitungMaksimum(arr, n) << std::endl;
                break;
            case 2:
                std::cout << "Nilai Minimum: " << hitungMinimum(arr, n) << std::endl;
                break;
            case 3:
                std::cout << "Nilai Rata-rata: " << hitungRataRata(arr, n) << std::endl;
                break;
            case 4:
                std::cout << "Keluar dari program" << std::endl;
                break;
            default:
                std::cout << "Pilihan tidak valid" << std::endl;
        }
    } while (choice != 4);

    return 0;
}
```
#### output

![Screenshot (570)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/6e5afeb6-c91f-443f-bdb2-9e2769b7ddfd)

Program tersebut adalah sebuah program C++ yang memungkinkan pengguna untuk menginputkan elemen-elemen ke dalam sebuah array, kemudian melakukan perhitungan nilai maksimum, minimum, dan rata-rata dari array tersebut. Program ini menggunakan tiga fungsi terpisah, yaitu hitungMaksimum, hitungMinimum, dan hitungRataRata, untuk melakukan perhitungan tersebut. Setelah pengguna memasukkan elemen-elemen array, program akan menampilkan menu pilihan yang berisi opsi untuk menghitung nilai maksimum, minimum, atau rata-rata, serta opsi untuk keluar dari program. Pengguna dapat memilih salah satu opsi tersebut dengan memasukkan angka yang sesuai, dan program akan menampilkan hasil perhitungan sesuai dengan pilihan pengguna. Program akan terus menampilkan menu pilihan sampai pengguna memilih opsi untuk keluar.

Program ini menggunakan array statis di mana ukuran array ditentukan oleh input pengguna. Saat menggunakan array statis seperti ini, ukuran array harus diketahui pada saat kompilasi program. Jika ingin membuat program yang lebih fleksibel dengan ukuran array yang dapat diubah saat runtime, bisa menggunakan pendekatan dengan alokasi memori dinamis atau menggunakan struktur data seperti std::vector dalam C++.

Dalam contoh yang diberikan, array yang dimasukkan terdiri dari 5 elemen yaitu {6, 7, 8, 9, 4}. Setelah melakukan perhitungan, program menemukan bahwa nilai maksimum dari array tersebut adalah 9, nilai minimumnya adalah 4, dan nilai rata-ratanya adalah 6.8. Hal ini berarti bahwa dari elemen-elemen yang dimasukkan, 9 adalah nilai terbesar, 4 adalah nilai terkecil, dan rata-rata dari semua elemen tersebut adalah 6.8. Dengan program ini, pengguna dapat dengan cepat mengetahui nilai maksimum, minimum, dan rata-rata dari sejumlah elemen yang dimasukkan. Hal ini sangat berguna dalam analisis data sederhana dan dapat membantu pengguna dalam mengambil keputusan berdasarkan statistik dasar dari data yang dimiliki.  

## Kesimpulan
Array atau dalam bahasa indonesia disebut larik, merupakan sebuah teknik pemrograman di mana array tersebut dianalogikan sebagai wadah untuk menyimpan data data yang berjumlah banyak dan memiliki tipe data yang sama[4]. Array merupakan struktur data yang digunakan untuk menyimpan sekumpulan nilai yang memiliki tipe data yang sama. Array memungkinkan kita untuk menyimpan data dalam urutan tertentu dan mengaksesnya dengan menggunakan indeks. Terdapat beberapa jenis array, di antaranya adalah array satu dimensi (1D array) yang merupakan kumpulan nilai dalam satu baris, array dua dimensi (2D array) yang merupakan matriks dengan baris dan kolom, array multidimensi yang memiliki lebih dari dua dimensi. Array sangat berguna dalam pemrograman karena memungkinkan kita untuk menyimpan dan mengelola data secara efisien, array empat dimensi merupakan struktur data yang memungkinkan penyimpanan data dalam empat level, sedangkan array lima dimensi memungkinkan penyimpanan data dalam lima level. array empat dimensi dan lima dimensi digunakan untuk kasus-kasus di mana data perlu disusun dalam struktur yang lebih kompleks dan memiliki banyak dimensi[5].

## Referensi
[1] Putri, M. P. (Ed.). Algoritma dan Struktur Data. CV WIDINA MEDIA UTAMA, 2022. <br>
[2] R. Firliana and P. Kasih, Adjie Media Nusantara, "Algoritma dan Pemrograman C++," 2018. <br>
[3] Efendi, Yasin. Buku Ajar Pendidikan Algoritma dan Struktur Data. Eureka Media Aksara, 2022. <br>
[4] Putra, Muhammad Taufik D., et al. BELAJAR DASAR PEMROGRAMAN DENGAN C++. Edited by Damayanti, Evi, CV WIDINA MEDIA UTAMA, 2022. <br>
[5] J. Smith, "Exploring High-Dimensional Arrays for Big Data Processing," Journal of Big Data Analytics, vol. 3, no. 1, pp. 45-55, 2018.
