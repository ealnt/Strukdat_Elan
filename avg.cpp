#include<bits/stdc++.h>
using namespace std;

float avg(int arr[], int n){
    float hasil = 0;
    for(int i = 0; i<n; i++){
        hasil+=arr[i];
    }

    hasil = float(hasil)/n;
    return hasil;
}

int main(){
    int banyak;
    cout<<"banyak data : ";
    cin>>banyak;

    int data[banyak];
    for(int i = 0; i<banyak; i++){
        cout<<"masukan data ke "<<i+1<<" : ";
        cin>>data[i];
    }

    cout<<"Rata-rata data adalah : "<<avg(data, banyak);

}