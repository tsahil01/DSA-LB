#include<iostream>

using namespace std;

void PrintArray(int arr[], int s ){ // no need to give size of array here and arr = address of arr[0]
    // int s = sizeof(arr)/sizeof(int);
    for(int i = 0; i<s; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int a[5] = {10,20};  // Automatically all the remaining elements will be 0. i.e.--> 10, 20, 0, 0, 0
    int s = sizeof(a)/sizeof(int); // To get size of array
    PrintArray(a,s);
    return 0;
}

