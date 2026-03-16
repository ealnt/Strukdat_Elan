#include <bits/stdc++.h>

using namespace std;

 

int main() {

    // Deklarasi array 2D dengan 2 baris dan 3 kolom

    int matriks[2][3] = {

        {10, 20, 30}, // Baris 0

        {40, 50, 60}  // Baris 1

    };

 

    cout << "--- Menampilkan Data Matriks ---" << endl;

 

    // Menggunakan nested loop (perulangan bersarang)

    // i untuk baris, j untuk kolom

    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3; j++) {

            cout << "Nilai indeks [" << i << "][" << j << "] : " << matriks[i][j];

            cout << " | Alamat: " << &matriks[i][j] << endl;

        }

        cout << "-----------------------------------" << endl;

    }

 

    return 0;

}