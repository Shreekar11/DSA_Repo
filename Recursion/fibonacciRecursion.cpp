<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
 
// Fibonacci series - 0,1,1,2,3,5,8,13,21,......
// sum of previous two term is the nth fibonacci number.
int fibo(int n){
    // base case
    if(n == 0) return 0;
    if(n == 1) return 1;
    int ans;
    ans = fibo(n-1) + fibo(n-2);
    return ans;
}
int main(){
    int n; cin>>n;
    cout<<"Fibonacci no. = "<<fibo(n)<<endl;
    return 0;
=======
#include<bits/stdc++.h>
using namespace std;
 
// Fibonacci series - 0,1,1,2,3,5,8,13,21,......
// sum of previous two term is the nth fibonacci number.
int fibo(int n){
    // base case
    if(n == 0) return 0;
    if(n == 1) return 1;
    int ans;
    ans = fibo(n-1) + fibo(n-2);
    return ans;
}
int main(){
    int n; cin>>n;
    cout<<"Fibonacci no. = "<<fibo(n)<<endl;
    return 0;
>>>>>>> e3122a25e58fa3cbcd50d5e509a94659125a93e9
}