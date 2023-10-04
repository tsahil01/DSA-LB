#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n = -1, bit, ans = 0, i=0;
    while(n!=0){
        bit = n&1;
        ans = (bit * pow(10,i)) + ans;

        n=n>>1;
        i++;
    }
    cout<<ans;
    cout << '\n';
    return 0;
}