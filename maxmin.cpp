#include<bits/stdc++.h>
using namespace std;

int terbesar(int arr[], int n){
    int tertinggi = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i]>tertinggi)tertinggi=arr[i];
    }
    return tertinggi;
}

int terkecil(int arr[], int n){
    int terendah = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i]<terendah)terendah=arr[i];
    }
    return terendah;
}

int main(){
    int banyak;
    cout<<"masukan banyaknya data : ";
    cin>>banyak;

    cout<<endl;
    int data[banyak];

    for(int i = 0; i<banyak; i++){
        cout<<"masukan data ke "<<i+1<<" : ";
        cin>>data[i];
        cout<<endl;
    }

    cout<<"nilai max yang disimpan : "<<terbesar(data, banyak)<<" "<<endl;
    cout<<"nilai min yang disimpan : "<<terkecil(data, banyak)<<" "<<endl;


}