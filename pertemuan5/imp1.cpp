#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 5

int main(){

stack<int> s;

for (int i = 0; i<6; i++){
    int x = 10*(i+1);
    s.push(x);
    cout<<"menambahkan "<<x<<" kedalam stack"<<endl;
}
while ( !s.empty()){
    cout<<s.top()<<" dikeluarkan"<<endl;
    s.pop();
}
cout<<"stack sudah kosong"<<endl;
}

