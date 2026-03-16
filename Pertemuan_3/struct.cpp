#include<bits/stdc++.h>
using namespace std;


struct Blok{
	int nim;
	string nama;
	int ipk;
};


int main(){
int n;

cin>>n;

Blok a[n];

for (int i = 0; i<n; i++){
	cout<<"masukan nim : ";
	cin>>a[i].nim;
	cout<<endl<<"masukan nama : ";
	cin>>a[i].nama;
	cout<<endl<<"masukan ipk : ";
	cin>>a[i].ipk;
	cout<<endl;

}

for(int i = 0; i<n; i++){
	cout<<"Nim : "<<a[i].nim<<endl<<"Nama : "<<a[i].nama<<endl<<"IPK : "<<a[i].ipk<<endl;

}

}
