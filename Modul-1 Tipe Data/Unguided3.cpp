#include <iostream>
#include <map>

int main() {
    // Mendefinisikan map untuk menyimpan data mahasiswa (nama dan nilai)
    std::map<std::string, int> nilaiMahasiswa;

    // Memasukkan data mahasiswa ke dalam map
    nilaiMahasiswa["Alice"] = 85;
    nilaiMahasiswa["Bob"] = 70;
    nilaiMahasiswa["Charlie"] = 92;

    // Menampilkan nilai mahasiswa
    for (auto it = nilaiMahasiswa.begin(); it != nilaiMahasiswa.end(); ++it) {
        std::cout << "Nilai " << it->first << ": " << it->second << std::endl;
    }

    return 0;
}
