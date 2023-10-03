#include<iostream>

using namespace std;

void temp(int arr[]){
    cout<<"Inside Temp function "<<endl;

    arr[0] = 120; // this changes value in the original array also as base address is passed to function.

    cout<<"arr[0] = "<<arr[0]<<endl;
    cout<<"Exiting Temp function "<<endl;

}

int main(){
    int arr[3] = {1,2,3};
    temp(arr);

    cout<<"Inside main function "<<endl;
    cout<<"arr[0] = "<<arr[0]<<endl;

    return 0;
}

