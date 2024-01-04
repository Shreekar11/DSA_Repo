#include<iostream>
using namespace std;

int addSmallestPrimeFactor(int x, int y){
    int ans;
    int primeFactor;
    
    // if x is even then smallest prime factor is always 2
    if(x%2 == 0){
        primeFactor = 2;
    }
    // if x is divisible by 3 then smallest PF is 3 then 
    // adding 3 to x will give even no. Then the new x 
    // will have PF as 2
    else if(x%3 == 0){
        primeFactor = 3;
    }
    // if x is prime no. then the smallest PF is x itself
    // after adding x will be a even no. with PF as 2
    else{
        primeFactor = x;
    }
    // now adding smallest PF to x according to cond.
    x += primeFactor;
    // after this every smallest PF is 2. So to find no. of operations
    // simply subtract the first prime factor so that next is 2 
    // and divide the difference by 2
    int diff = y-x;
    ans = diff/2;
    if(diff%2 != 0) ans += 1;
    return ans+1;
}

int main(){
    int x,y;
    cin>>x>>y;

    int operation = addSmallestPrimeFactor(x, y);
    cout<<"No. of operation = "<<operation<<endl;
}