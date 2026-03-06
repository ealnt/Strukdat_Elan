#include<bits/stdc++.h>
using namespace std;

void checkVow(char a){
    if(a == tolower('a') || a == tolower('i') || a == tolower('u') || a == tolower('e')|| a == tolower('o')){
        cout<<"Vowel"<<endl;
    }else{
        cout<<"Consonant"<<endl;
    }
}

int main(){
    checkVow('j');
    checkVow('i');
}