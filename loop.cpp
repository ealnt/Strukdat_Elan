#include<bits/stdc++.h>
using namespace std;

int main(){
    int baris, kolom, angka = 1, n = 5;

    for(baris = 0; baris<n; baris++){
        for(kolom = 0; kolom<=baris; kolom++){
            cout<<angka<<" ";
            angka++;
        }
        cout<<endl;
    }
}