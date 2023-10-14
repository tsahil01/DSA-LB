#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){
    int s = 0; // start
    int e = size - 1; // end
    int mid;

    while(s<=e){
        // mid = (s+e)/2;
        mid = s + (e-s)/2; 

        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid]<key){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[5] = {1,5,6,9,87};
    cout<<BinarySearch(arr,5,9)<<endl;
    cout<<BinarySearch(arr,5,6)<<endl;
    cout<<BinarySearch(arr,5,5)<<endl;
    cout<<BinarySearch(arr,5,87)<<endl;
    cout << '\n';
    return 0;
}