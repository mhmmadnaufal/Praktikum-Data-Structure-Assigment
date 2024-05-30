#include <iostream>
using namespace std;

// Deklarasi fungsi
void functionB(int n);
void functionA(int n);

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n - 1); // Panggilan rekursif tidak langsung
    }
}

void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n / 2); // Panggilan rekursif tidak langsung
    }
}

int faktorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int num;

    cout << "Masukkan bilangan bulat positif: ";
    cin >> num;

    cout << "Rekursif Tidak Langsung: ";
    functionA(num);

    cout << "\nHasil faktorial dari " << num << " adalah: " << faktorial(num) << endl;

    return 0;
}