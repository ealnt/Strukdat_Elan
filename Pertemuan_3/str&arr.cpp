#include<bits/stdc++.h>
using namespace std;

struct Mahasiswa {
    string nama;
    float ipk;
};

int main() {
    // Array 2D dari struct: 2 baris (lantai), 2 kolom (ruangan)
    Mahasiswa gedung[2][2];

    // Contoh input manual
    gedung[0][0] = {"Budi", 3.5};
    gedung[0][1] = {"Siti", 3.8};
    gedung[1][0] = {"Andi", 3.2};
    gedung[1][1] = {"Lani", 3.9};

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "Posisi [" << i << "][" << j << "] -> Nama: " << gedung[i][j].nama << ", IPK: " << gedung[i][j].ipk << endl;
        }
    }

    return 0;
}
