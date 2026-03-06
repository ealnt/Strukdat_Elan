#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 10;
    int* ptr = &x;
    cout<<"The value of x : "<<x<<endl;
    cout<<"Addres of x : "<<&x<<endl;
    cout<<"Value stored in pointer ptr : "<<ptr<<endl;
    cout<<"Value pointed to by ptr : "<<*ptr<<endl;
}