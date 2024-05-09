#include <iostream>
#include <string>

void countVowels(const std::string& sentence) {
    int aCount = 0, iCount = 0, uCount = 0, eCount = 0, oCount = 0;
    for (char c : sentence) {
        char lowercaseChar = std::tolower(c);
        if (lowercaseChar == 'a') {
            aCount++;
        } else if (lowercaseChar == 'i') {
            iCount++;
        } else if (lowercaseChar == 'u') {
            uCount++;
        } else if (lowercaseChar == 'e') {
            eCount++;
        } else if (lowercaseChar == 'o') {
            oCount++;
        }
    }
    std::cout << "Jumlah huruf 'a' dalam kalimat: " << aCount << std::endl;
    std::cout << "Jumlah huruf 'i' dalam kalimat: " << iCount << std::endl;
    std::cout << "Jumlah huruf 'u' dalam kalimat: " << uCount << std::endl;
    std::cout << "Jumlah huruf 'e' dalam kalimat: " << eCount << std::endl;
    std::cout << "Jumlah huruf 'o' dalam kalimat: " << oCount << std::endl;
}

int main() {
    std::string kalimat;

    // Input kalimat
    std::cout << "Masukkan kalimat: ";
    std::getline(std::cin, kalimat);

    // Hitung jumlah huruf vokal dalam kalimat
    countVowels(kalimat);

    return 0;
}
