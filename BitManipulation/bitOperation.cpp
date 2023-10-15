#include<bits/stdc++.h>
using namespace std;

void swapNumber(int a, int b){
    a = a^b; // a = 5^6
    b = a^b; // b = 5^6^6 = 5
    a = a^b; // a = 5^6^5 = 6

    cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
}

int xorOperator(int l, int r){
    int xr = 0;
    while(l <= r){
        xr = xr^l;
        l++;
    }
    return xr;
}

int main(){

    int a = 5;  // 5 = 1 0 1 
    int b = 6;  // 6 = 1 1 0
    cout<< "OR operation - "<< (a | b) <<endl;
    // or opertion - 5|6 = 1 1 1 = 7.

    cout<< "AND operation - "<< (a & b) <<endl;
    // and opertion - 5&6 = 1 0 0 = 4.
    cout<<"Left hand operator - "<<(a << 1)<<endl;
    cout<<"Right hand operator - "<<(a >> 1)<<endl;

    swapNumber(a, b);
    int l,r;
    l=2; r=4;
    int ans = xorOperator(l, r);
    cout<<"XOR = "<<ans<<endl;

    return 0;
}