#include<bits/stdc++.h>
using namespace std;

// Q. Sum of digits of an integer using recursion .

int sumDigit(int n){
    // Base Case
    if(n >= 0 && n <= 9) return n;
 
    // assumption and self work.
    int last = n%10;
    return last + sumDigit(n/10);
}
int main(){
    int n; cin>>n;
    int ans = sumDigit(n);
    cout<<"Sum of digits = "<<ans<<endl;

    return 0;
}