#include <iostream>
#include <vector>
#include <sstream>
#include <string>

int main() {
    std::string input;
    std::vector<int> data;
    std::vector<int> genap;
    std::vector<int> ganjil;

    std::cout << "Masukkan data array: ";
    std::getline(std::cin, input);
    std::istringstream iss(input);
    int num;
    while (iss >> num) {
        data.push_back(num);
    }

    for (int num : data) {
        if (num % 2 == 0) {
            genap.push_back(num);
        } else {
            ganjil.push_back(num);
        }
    }

    std::cout << "Data array:";
    for (size_t i = 0; i < data.size(); ++i) {
        std::cout << " " << data[i];
        if (i < data.size() - 1) {
            std::cout << ",";
        }
    }

    std::cout << "\nNomor genap:";
    for (size_t i = 0; i < genap.size(); ++i) {
        std::cout << " " << genap[i];
        if (i < genap.size() - 1) {
            std::cout << ",";
        }
    }

    std::cout << "\nNomor ganjil:";
    for (size_t i = 0; i < ganjil.size(); ++i) {
        std::cout << " " << ganjil[i];
        if (i < ganjil.size() - 1) {
            std::cout << ",";
        }
    }

    return 0;
}


