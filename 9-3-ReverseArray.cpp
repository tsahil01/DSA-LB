#include<iostream>

using namespace std;

void PrintArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void reverseArray(int arr[], int n){
    int i = 0, j = n-1, temp;
    while(j>=i){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main(){
    int arr[5] = {2,3,4,5,9};
    PrintArray(arr,5);
    reverseArray(arr,5);
    PrintArray(arr,5);

    return 0;
}

