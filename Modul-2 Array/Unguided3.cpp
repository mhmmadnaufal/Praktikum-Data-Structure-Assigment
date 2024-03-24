#include <iostream>
using namespace std;

int main() {
    int n;
    std::cout << "Masukkan jumlah elemen array: ";
    std::cin >> n;

    int arr[n];
    double sum = 0;
    int max, min;

    std::cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < n; i++) {
        std::cout << "Input Array[" << i << "] = ";
        std::cin >> arr[i];
        sum += arr[i];
    }

    max = arr[0];
    min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    double average = sum / n;

    int choice;
    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Cari Nilai Maksimum\n";
        std::cout << "2. Cari Nilai Minimum\n";
        std::cout << "3. Cari Nilai Rata-rata\n";
        std::cout << "4. Keluar\n";
        std::cout << "Pilih operasi yang ingin dilakukan: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Nilai Maksimum: " << max << std::endl;
                break;
            case 2:
                std::cout << "Nilai Minimum: " << min << std::endl;
                break;
            case 3:
                std::cout << "Nilai Rata-rata: " << average << std::endl;
                break;
            case 4:
                std::cout << "Program selesai.\n";
                break;
            default:
                std::cout << "Pilihan tidak valid. Silakan pilih lagi.\n";
        }

    } while (choice != 4);

    return 0;
}
