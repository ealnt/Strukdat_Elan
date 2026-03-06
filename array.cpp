#include<bits/stdc++.h>
using namespace std;

int getmin(int arr[], int n){
	int min = arr[0];
	for(int i = 0; i<n; i++){
		if(arr[i]<min)min=arr[i];
	}
	return min;
}

int getmax(int arr[], int n){
        int max = arr[0];
        for(int i = 0; i<n; i++){
                if(arr[i]>max)max=arr[i];
        }
        return max;
}


int main(){
        int arr[] = {12, 1234, 45, 6, 1, 170};
        int n = sizeof(arr)/sizeof(arr[0]);
        cout<<"The min value of arr : "<<getmin(arr, n)<<endl;
        cout<<"The max value of arr : "<<getmax(arr, n)<<endl;
}
