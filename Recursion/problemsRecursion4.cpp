#include<iostream>
#include<vector>
using namespace std;

// int sumRecursion(int n, int i){
//     // base case
//     if(i == n) return n;
//     cout<<i<<" ";
//     return sumRecursion(n, i+1);
// }

void increaseSeq(int n){ // Q. Problem 1.
    // base case
    if(n < 1) return;

    increaseSeq(n-1);
    cout<<n<<" ";
}

void multipleNum(int num, int k){
    // base case
    if(k < 1) return ;

    multipleNum(num, k-1);
    cout<<num*k<<",";

}

int alternsteSum(int n){
     // base case
    if (n==1) return 1;
    
    // assumption and sself work
    return ((n%2 == 0) ? (-n) : n) + alternsteSum(n-1);
}
int main(){
    int n=5;
    int i=1;
    // cout<<sumRecursion(n, i)<<endl;
    increaseSeq(n);
    cout<<endl;

    int num=3;
    int k=8;
    multipleNum(num, k);

    cout<<endl;
    cout<<"Answer = "<<alternsteSum(5)<<endl;

}
