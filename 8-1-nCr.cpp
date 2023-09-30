#include<iostream>
using namespace std;

int fact(int num){
    if(num>1)
        return num*fact(num-1);
    return 1;
}

int nCr(int n, int r){
    int ans = (fact(n))/(fact(r) * fact(n-r));
    return ans;
}

int main(){
    cout<<fact(0)<<endl;
    cout<<nCr(5,2)<<endl;
}