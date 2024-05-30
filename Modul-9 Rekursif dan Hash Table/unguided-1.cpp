#include <iostream>
using namespace std;

// Fungsi untuk menghitung faktorial
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    cout << "Masukkan bilangan bulat positif: ";
    cin >> num;

    if (num < 0) {
        cout << "Input harus bilangan bulat positif!";
    } else {
        cout << "Faktorial dari " << num << " adalah: " << factorial(num) << endl;
    }

    return 0;
}