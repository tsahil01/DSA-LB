#include<iostream>
using namespace std;

void PrintArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void AlternateSwap(int arr[], int n){
    int i = 0;
    int j = i+1;
    while(j < n){
        swap(arr[i], arr[j]);
        i = i+2;
        j = j+2;
    }
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    PrintArray(arr, 10);
    AlternateSwap(arr, 10);
    PrintArray(arr, 10);
}