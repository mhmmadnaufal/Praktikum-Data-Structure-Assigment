# <h1 align="center">Laporan Praktikum Modul Priority Queue dan Heaps</h1>
<p align="center">Muhammad Naufal | 2311110034 | SD-04B</p>

## Dasar Teori

### Priority Queue

Priority Queue adalah struktur data yang menerapkan prinsip operasi FIFO (First In First Out) dimana elemen data yang masuk pertama akan keluar pertama. Namun, dalam Priority Queue, elemen-elemen yang dimasukkan memiliki prioritas yang berbeda, sehingga elemen dengan prioritas tertinggi akan diproses terlebih dahulu [1]. Pada 
dasarnya priority queue memiliki tiga jenis prioritas yaitu tinggi, sedang, dan rendah[2]. Pada beberapa implementasi, ketika dua elemen memiliki prioritas yang sama, maka mereka dilayani sesuai dengan urutan di mana mereka masuk, akan tetapi dalam implementasi lainnya, penempatan elemen dengan prioritas yang sama tidak di izinkan [3]. Namun, Implementasi Priority Queue dapat dilakukan menggunakan algoritma heap, yang memungkinkan elemen dengan prioritas tertinggi untuk dihapus terlebih dahulu. Jadi, Algoritma priority queue bekerja berdasarkan prinsip Higher Priority In First Out (HPIFO) dimana pekerjaan yang memiliki prioritas tertinggi akan diselesaikan lebih dulu.

Pada Priority Queue mempunyai tiga operasi yaitu top, pop, dan push. Operasi top adalah untuk mengetahui  nilai  yang  mempunyai  prioritas  paling  tinggi  pada  priority  queue.  Operasi  pop  adalah mengeluarkan  nilai  yang  mempunyai  prioritas  tertinggi  pada  priority  queue.  Operasi  push  adalah menginputkan elemen baru pada priority queue. Terdapat dua jenis algoritma priority queue, yaitu:
 
- Ascending Order Priority Queue, dimana data diurutkan dengan prioritas naik. Misalnya, jika kita memiliki elemen berikut dalam priority queue yang disusun dalam urutan menaik seperti 4,6,8,9,10. Disini, 4 adalah angka terkecil, oleh karena itu, ia akan mendapatkan prioritas tertinggi dalam antrean prioritas dan saat kita keluar dari antrean prioritas jenis ini, 4 akan dihapus dari antrean dan dequeue mengembalikan 4.
- Descending Order Priority Queue, dimana data diurutkan dengan prioritas menurun. Misalnya, jika kita memiliki sebuah Descending Order Priority Queue dengan 4 angka yaitu 25, 10, 40, dan 15, maka elemen-elemen tersebut akan diurutkan berdasarkan nilai terbesar ke terkecil. Dengan demikian, angka 40 akan memiliki prioritas paling tinggi dan akan ditempatkan di depan antrian, diikuti oleh angka 25, 15, dan terakhir angka 10.

Selain itu terdapat dua operasi dasar yang digunakan untuk mengubah data pada algoritma 
priority queue, yaitu :

- Enqueue, yaitu proses menambahkan data ke akhir urutan data.
- Dequeue, yaitu proses menghapus data pada awal urutan data.

### Heaps

Heaps adalah struktur data yang digunakan untuk implementasi Priority Queue. Heaps adalah tipe data yang memungkinkan elemen-elemen untuk disimpan dan diurutkan berdasarkan prioritas. Heaps dapat digunakan untuk menampung elemen-elemen yang memiliki prioritas yang berbeda dan memungkinkan elemen dengan prioritas tertinggi untuk dihapus terlebih dahulu [4]. Jadi, Heap merupakan struktur data berbasis pohon yang memiliki properti heap. Ada 2 jenis heap utama, yaitu : 

1. Min-Heap: Setiap node memiliki nilai yang lebih kecil atau sama dengan nilai anak-anaknya, dengan elemen terkecil di root. Jadi, min-heap adalah kondisi kebalikan dengan max-heap, pada min-heap nilai terkecil berada di node root dan setiap child node memiliki nilai yang lebih besar dari nilai yang dimiliki parent node-nya. <br>
2. Max-Heap: Setiap node memiliki nilai yang lebih besar atau sama dengan nilai anak-anaknya, dengan elemen terbesar di root. Jadi, max-heap adalah kondisi heap tree yang memiliki nilai tertinggi berada di node root dan setiap child node memiliki nilai yang lebih kecil dari nilai yang dimiliki parent node-nya [5]. 

Operasi-operasi utama dalam heap adalah:

- Insert(x): Memasukkan elemen x ke dalam heap.
- Extract_Max/Min(): Mengeluarkan dan mengembalikan elemen dengan nilai maksimum/minimum dari heap.
- Heapify(A): Membangun heap dari array A.

Kompleksitas waktu untuk operasi-operasi heap adalah sebagai berikut:

- Insert: O(log n)
- Extract_Max/Min: O(log n)
- Heapify: O(n)

## Guided 

```C++ 
#include <iostream>
#include <algorithm>

int H[50];
int heapSize = -1;

int parent(int i) {
    return (i - 1) / 2;
}

int leftChild(int i) {
    return ((2 * i) + 1);
}

int rightChild(int i) {
    return ((2 * i) + 2);
}

void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        std::swap(H[parent(i)], H[i]);
            i = parent(i);
    }
}

void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        std::swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert(int p) {
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
}

int extractMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize - 1;
    shiftDown(0);
    return result;
}

void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

int getMax() {
    return H[0];
}

void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}

int main() {
    insert(45);
    insert(20);
    insert(14);
    insert(12);
    insert(31);
    insert(7);
    insert(11);
    insert(13);
    insert(7);

    std::cout << "Priority Queue : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    std::cout << "Node with maximum priority : " << extractMax()
<< "\n";

    std::cout << "Priority queue after extracting maximum : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    changePriority(2, 49);
    std::cout << "Priority queue after priority change : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    remove(3);

    std::cout << "Priority queue after removing the element : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    return 0;
}
```
#### Output

![Screenshot (787)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/8ac837ee-3e95-4d75-af43-6360824cea80)

Codingan di atas merupakan implementasi dari algoritma Priority Queue menggunakan struktur data heap dalam bahasa pemrograman C++. Algoritma ini memungkinkan penambahan elemen dengan prioritas tertinggi, penghapusan elemen dengan prioritas tertinggi, perubahan prioritas elemen, serta penghapusan elemen tertentu. Fungsi insert(int p) digunakan untuk menambahkan elemen dengan prioritas p ke dalam priority queue, sementara fungsi extractMax() akan mengeluarkan elemen dengan prioritas tertinggi dari priority queue. Fungsi changePriority(int i, int p) memungkinkan pengguna untuk mengubah prioritas elemen pada indeks i menjadi p dan menyesuaikan posisinya di dalam priority queue, sedangkan fungsi remove(int i) berperan dalam menghapus elemen pada indeks i dari priority queue. Program tersebut melakukan serangkaian operasi pada priority queue yang telah diinisialisasi dengan beberapa elemen. Setelah setiap operasi, program mencetak isi priority queue untuk memperlihatkan perubahan yang terjadi setelah operasi tersebut dilakukan. Jadi, implementasi ini memungkinkan pengguna untuk mengelola data dengan prioritas tertinggi secara efisien menggunakan struktur data heap.


## Unguided 

### Modifikasi guided diatas yang mana heap dikonstruksi secara manual berdasarkan user!

```C++
#include <iostream>
#include <algorithm>

int H[50];
int heapSize = -1;

int parent(int i) {
    return (i - 1) / 2;
}

int leftChild(int i) {
    return ((2 * i) + 1);
}

int rightChild(int i) {
    return ((2 * i) + 2);
}

void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        std::swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}

void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        std::swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert(int p) {
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
}

int extractMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize - 1;
    shiftDown(0);
    return result;
}

void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

int getMax() {
    return H[0];
}

void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}

int main() {
    int n;
    std::cout << "Masukkan jumlah elemen yang ingin dimasukkan ke dalam priority queue: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int element;
        std::cout << "Masukkan elemen ke-" << i + 1 << ": ";
        std::cin >> element;
        insert(element);
    }

    std::cout << "Priority Queue : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    std::cout << "Node with maximum priority : " << extractMax() << "\n";
    std::cout << "Priority queue after extracting maximum : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    int index, priority;
    std::cout << "Masukkan indeks elemen yang ingin diubah prioritasnya: ";
    std::cin >> index;
    std::cout << "Masukkan prioritas baru: ";
    std::cin >> priority;
    changePriority(index, priority);

    std::cout << "Priority queue after priority change : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    int removeIndex;
    std::cout << "Masukkan indeks elemen yang ingin dihapus: ";
    std::cin >> removeIndex;
    remove(removeIndex);

    std::cout << "Priority queue after removing the element : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }

    return 0;
}
```
#### Output :

![Screenshot (769)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/91a7dd95-da07-4867-85f0-a0aa9df99d1f)

Codingan di atas merupakan implementasi dari algoritma Priority Queue menggunakan struktur data heap dalam bahasa pemrograman C++. Program ini memberikan pengguna kemampuan untuk melakukan berbagai operasi pada priority queue, termasuk penambahan elemen, pengambilan elemen dengan prioritas tertinggi, perubahan prioritas elemen, dan penghapusan elemen tertentu. Fungsi-fungsi seperti parent(int i), leftChild(int i), dan rightChild(int i) digunakan untuk mengakses parent dan child dari suatu node dalam heap, sedangkan shiftUp(int i) dan shiftDown(int i) digunakan untuk memindahkan elemen ke atas atau ke bawah heap sesuai aturan heap.

Berbagai operasi yang dapat dilakukan pada priority queue meliputi penambahan elemen dengan insert(int p), pengambilan elemen tertinggi dengan extractMax(), perubahan prioritas elemen dengan changePriority(int i, int p), dan penghapusan elemen dengan remove(int i). Setelah inisialisasi priority queue dengan sejumlah elemen, program mencetak isi priority queue dan melakukan operasi-operasi tersebut berdasarkan input pengguna. Setiap operasi diikuti dengan pencetakan isi priority queue untuk memperlihatkan perubahan yang terjadi setelah operasi dilakukan. Dengan demikian, program ini memberikan fleksibilitas kepada pengguna dalam mengelola data dengan prioritas tertinggi menggunakan struktur data heap.


## Kesimpulan

Priority Queue adalah struktur data yang mengatur elemen berdasarkan prioritas, memastikan elemen dengan prioritas tertinggi diproses terlebih dahulu. Terdapat tiga jenis prioritas: tinggi, sedang, dan rendah. Implementasi menggunakan algoritma heap memungkinkan penghapusan elemen dengan prioritas tertinggi terlebih dahulu. Operasi pada Priority Queue meliputi top untuk nilai tertinggi, pop untuk mengeluarkan nilai tersebut, dan push untuk menambahkan elemen baru. Terdapat dua jenis algoritma priority queue: Ascending Order Priority Queue dan Descending Order Priority Queue. Operasi dasar meliputi Enqueue untuk menambahkan data dan Dequeue untuk menghapus data. Algoritma priority queue bekerja berdasarkan prinsip Higher Priority In First Out (HPIFO), memastikan pekerjaan dengan prioritas tertinggi diselesaikan terlebih dahulu.

Sedangkan Heap adalah struktur data tree-based yang memenuhi properti heap, yaitu nilai di setiap node lebih besar (max heap) atau lebih kecil (min heap). Operasi utama dalam heap adalah insert (memasukkan elemen), extract_max/min (mengeluarkan elemen dengan nilai maksimum/minimum), dan heapify (membangun heap dari array). Kompleksitas waktu untuk operasi-operasi heap adalah O(log n) untuk insert dan extract, serta O(n) untuk heapify. Heap sangat berguna dalam implementasi priority queue, sorting (heap sort), dan berbagai algoritma lainnya.

## Referensi
[1] A. Nurcholis, S. Batara, and M. Octamanullah, "Penerapan struktur data Heap Priority Queue pada algoritma Djikstra untuk mendapatkan kompleksitas O((n + m)log n)", Jurnal Laboratorium Ilmu dan Rekayasa Komputasi, vol. 1, no. 1, pp. 1-4, 2023. <br>
[2] Nurhadi, Mohammad Iqbal, Randy Erfa Saputra, and Casi Setianingsih. "Manajemen Dan Kendali Beban Perangkat Elektronik Berbasis Web Dengan Algoritma Priority Queue." eProceedings of Engineering 8.2, 2021. <br>
[3] Sholeh, Ismail. "Penerapan Decrease And Conquer Untuk Memanajemen Tugas Kuliah Informatika." JURNAL TEKNIK INFORMATIKA DAN SISTEM INFORMASI 1.2 (2021): 1-10. <br>
[4] T. A. Assegie and H. D. Bizuneh, "Improving network performance with an integrated priority queue and weighted fair queue scheduling", Indonesian Journal of Electrical Engineering and Computer Science , vol. 19, no. 1, pp. 241-247, July 2020. <br>
[5] Wahyuni, Mindi, and Khairuddin Nasution. "Implementasi Algoritma Heap Sort pada Aplikasi E-Raport Siswa MTs Swasta Aljamiatul Amaliyah Desa Bandar Selamat Labuhanbatu Utara." Hello World Jurnal Ilmu Komputer 1.3 (2022): 153-165.
