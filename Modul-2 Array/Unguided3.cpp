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
<<<<<<< HEAD
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
=======
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];

    // Input elemen array dari pengguna
    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Elemen " << i + 1 << ": ";
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];
    double sum = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
        sum += arr[i];
    }

    double average = sum / n;

    cout << "Nilai Maksimum: " << max << endl;
    cout << "Nilai Minimum: " << min << endl;
    cout << "Nilai Rata-rata: " << average << endl;
>>>>>>> 3427008ce8d9a5b68282a5549788a74fd811a2a3

    return 0;
}