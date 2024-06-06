#include <iostream>
#include <vector>
#include <iomanip> // Untuk std::setw()

using namespace std;

// Fungsi untuk menampilkan graph
void tampilGraph(vector<string>& simpul, vector<vector<int>>& busur) {
    int n = simpul.size();
    cout << "\nGraph:\n";
    for (int i = 0; i < n; i++) {
        cout << simpul[i] << " : ";
        for (int j = 0; j < n; j++) {
            if (busur[i][j] != 0) {
                cout << " -> " << simpul[j] << "(" << busur[i][j] << ")";
            }
        }
        cout << endl;
    }
}

int main() {
    int jumlahSimpul_2311110034;
    cout << "Silakan masukkan jumlah simpul: ";
    cin >> jumlahSimpul_2311110034;

    // Memuat simpul (node) ke dalam vektor
    vector<string> simpul(jumlahSimpul_2311110034);
    vector<vector<int>> busur(jumlahSimpul_2311110034, vector<int>(jumlahSimpul_2311110034, 0));

    // Memasukkan nama simpul
    for (int i = 0; i < jumlahSimpul_2311110034; i++) {
        cout << "Simpul " << i + 1 << " : ";
        cin >> simpul[i];
    }

    cout << "Silakan masukkan bobot antar simpul:\n";
    for (int i = 0; i < jumlahSimpul_2311110034; i++) {
        for (int j = 0; j < jumlahSimpul_2311110034; j++) {
            cout << simpul[i] << " ---> " << simpul[j] << " = ";
            cin >> busur[i][j];
        }
    }

    // Menampilkan matriks adjacency
    cout << "\nMatriks Adjacency:\n";
    cout << setw(10) << "";
    for (int i = 0; i < jumlahSimpul_2311110034; i++) {
        cout << setw(10) << simpul[i];
    }
    cout << endl;

    for (int i = 0; i < jumlahSimpul_2311110034; i++) {
        cout << setw(10) << simpul[i];
        for (int j = 0; j < jumlahSimpul_2311110034; j++) {
            cout << setw(10) << busur[i][j];
        }
        cout << endl;
    }

    tampilGraph(simpul, busur);

    return 0;
}