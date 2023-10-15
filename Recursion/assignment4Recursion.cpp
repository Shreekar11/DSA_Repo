#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int seriesRecusrion(int n){
    // base case
    if(n <= 0) return n;
    
    //assumption and self work
    cout<<n<<" ";
    return seriesRecusrion(n-5);
    cout<<n<<" ";
}

int main(){
    int n=16;
    seriesRecusrion(n);
}