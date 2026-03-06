#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1) return false;
    for(int i = 2; i<=sqrt(n); i++){
        if(n%i==0)return false;
    }
    return true;
}

void findPrimes(int l, int r){
    bool isfound = false;

    for(int i = l; i<=r; i++){
        if(isPrime(i)){
            isfound = true;
            cout<<i<<" ";
        }
    }

    if(!isfound){
        cout<<"No prime number detected";
    }
}

int main(){
   int a, b;
   cin>>a>>b;
   findPrimes(a,b);
}