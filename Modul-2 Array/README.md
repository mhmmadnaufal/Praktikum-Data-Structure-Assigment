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

- Bentuk umum:
tipeData NamaArray [JumlahElemen] = {<Inisialisasi>}; 
int Bola [10] = { 17, 21, 33, dst};

- contoh :
unsigned int Tinggi Badan [100];//deklarasi array 
bool Hadir [5] = {true, true, false, false);//pemberian nilai array pada inisialisasi

Pendeklarasian array diawali dengan penyebutan tipe data diikuti nama variabel array, diikuti jumlah elemen. Jika array hendak diberi nilai awal, nilai-nilai awal dituliskan dalam inisialisasi. Jika inisialisasi kurang dari jumlah elemen array, sisanya akan diinisialisasikan dengan nol. Elemen array diakses dengan menyebutkan indeks posisi elemen tersebut dalam array. Elemen pertama array memiliki indeks 0[2].

### 2. Array dua dimensi :

Array dua dimensi atau yang sering dikenal dengan istilah matriks merupakan Pengembangan dari Array satu dimensi, jika pada array satu dimensi hanya terdiri dari satu baris dan beberapa kolom saja, maka untuk array dua dimensi ini terdiri lebih dari satu (beberapa) baris dan kolom. Dengan demikian array dua dimensi tersusun dalam bentuk kolom serta baris, yang mana indeks pertamanya dinyatakan sebagai baris dan untuk indeks keduanya dinyatakan sebagai kolom. [3] 

Array dua dimensi digunakan untuk menyimpan data yang memiliki hubungan spasial, seperti gambar, tabel, atau matriks. Setiap elemen dalam array ini diakses dengan dua indeks, yaitu indeks baris dan indeks kolom. Indeks baris menentukan posisi elemen di baris tertentu, dan indeks kolom menentukan posisi elemen di kolom tertentu.

### 3. Array multidimensi :

Array Multidimensi merupakan array yang serupa dengan array satu dimensi maupun array dua dimensi, namun array multidimensi dapat memiliki memori yang lebih besar. Biasanya array multidimensi digunakan untuk menyebut array dengan dimensi lebih dari dua atau array yang mempunyai lebih dari dua subskrip, seperti untuk menyebut array tiga dimensi, empat dimensi, lima dimensi dan seterusnya.
- Deklarasi Array Multidimensi
tipedata namaarray [ukuran1][ukuran2]...[ukuranN];
Di mana,
    - tipedata: Tipe data yang akan disimpan dalam array.
    - Nama array: Nama array.
    - size1, size2,…, sizeN: Ukuran setiap dimensi.

### 4. Array empat dimensi :

Dalam bahasa pemrograman C++, array empat dimensi adalah struktur data yang terdiri dari empat level dimensi. Dalam C++. Setiap elemen dalam array 4 dimensi diakses menggunakan 4 indeks. Misalnya, jika kita memiliki array 4 dimensi dengan bentuk (a, b, c, d), maka kita akan memerlukan 4 indeks (i, j, k, l) untuk mengakses elemen tertentu di dalamnya. Array empat dimensi dapat didefinisikan dengan menggunakan sintaks berikut:
int array[a][b][c][d];
Di mana:
- int adalah tipe data elemen dalam array
- a, b, c, dan d adalah ukuran array untuk masing-masing dimensi

Array empat dimensi dalam C++ dapat digunakan untuk menyimpan data yang terstruktur dalam empat level hierarki yang berbeda. Meskipun jarang digunakan dalam kasus umum, array empat dimensi dapat berguna dalam kasus-kasus khusus di mana data perlu diorganisir dalam struktur yang kompleks.

### 5. Array lima dimensi :

Dalam bahasa pemrograman C++, array lima dimensi adalah struktur data yang terdiri dari lima level dimensi. Dalam C++, array lima dimensi dapat didefinisikan dengan menggunakan sintaks berikut:
int array[a][b][c][d][e];
Di mana:
- int adalah tipe data elemen dalam array
- a, b, c, d, dan e adalah ukuran array untuk masing-masing dimensi

Array lima dimensi dalam C++ dapat digunakan untuk menyimpan data yang terstruktur dalam lima level hierarki yang berbeda. Meskipun jarang digunakan dalam kasus umum, array lima dimensi dapat berguna dalam kasus-kasus khusus di mana data perlu diorganisir dalam struktur yang sangat kompleks, seperti dalam pemrosesan citra medis, simulasi fisika, atau pemodelan matematika yang kompleks. Array lima dimensi memungkinkan representasi data yang lebih kompleks dan struktur yang lebih dalam dibandingkan dengan array berdimensi lebih rendah.

## Guided 

### 1. Tipe Data Primitif

```C++

```
#### Output

Kodingan di atas adalah kode 

### 2. Tipe Data Abstrak

```C++

```
#### Output

Kodingan di atas adalah kode 

## Unguided 

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

```C++

```
#### Output:

Code di atas adalah 

### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya

#### Contoh program

```c++

```
#### output

Code di atas merupakan program C++ 

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map.

```c++

```
#### output

Code di atas merupakan program C++ 

#### Kesimpulan kode diatas
Dengan menggunakan map, program dapat menyimpan data mahasiswa secara terstruktur dengan pasangan key-value. Kemudian, program menggunakan loop untuk menampilkan nilai mahasiswa yang disimpan dalam map ke layar. Dengan demikian, program ini memanfaatkan fitur map untuk menyimpan dan mengakses data mahasiswa dengan efisien.

## Kesimpulan
Kesimpulannya, 

## Referensi
[1] Putri, M. P. (Ed.). (2022). Algoritma dan Struktur Data. CV WIDINA MEDIA UTAMA
[2] 
[3]
