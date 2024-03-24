#include <iostream>

int main() {
    int size1, size2, size3;

    std::cout << "Masukkan ukuran array tiga dimensi (size1 size2 size3): ";
    std::cin >> size1 >> size2 >> size3;

    int array3d[size1][size2][size3];

    std::cout << "Masukkan elemen-elemen array tiga dimensi:\n";
    for (int x = 0; x < size1; x++) {
        for (int y = 0; y < size2; y++) {
            for (int z = 0; z < size3; z++) {
                std::cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                std::cin >> array3d[x][y][z];
            }
        }
    }

    std::cout << "\nArray tiga dimensi yang dimasukkan:\n";
    for (int x = 0; x < size1; x++) {
        for (int y = 0; y < size2; y++) {
            for (int z = 0; z < size3; z++) {
                std::cout << array3d[x][y][z] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}
