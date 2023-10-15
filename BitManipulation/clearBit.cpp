#include<bits/stdc++.h>
using namespace std;

int clearBit(int n, int pos){
    // creating a mask
    int mask = ~(1 << pos);
    // mask = 0100; ~(0100) = 1011

    n = n & mask;
    // and operation of n & mask
    // 0101 & 1011 = 0001
    return n;
}

int updateBit(int n, int pos){
    int mask = (1 << pos);
    n ^= mask;

    return n;
}

int main(){
    int n; cin>>n;
    int pos; cin>>pos;

    // cout<<clearBit(n, pos)<<endl;
    cout<<updateBit(n, pos)<<endl;

}