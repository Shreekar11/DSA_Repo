#include<bits/stdc++.h>
using namespace std;

int power1(int p, int q){
    // Base case
    if(q == 0) return 1;

    // assumption and self work
    int result = p * power1(p, q-1);
    return result;
}


// Optimized solution 
int power(int p, int q){
    // base case
    if (q == 0) return 1;

    if(q%2 == 0){
        int ans = power(p, q/2);
        return ans * ans;
    }
    else{
        int ans = power(p, (q-1)/2);
        return p * ans * ans;
    }
}

int main(){
    int p; cin>>p; 
    int q; cin>>q;
    cout<<"Square no. solution 1 = "<<power1(p, q)<<endl;
    cout<<"Optimized solution = "<<power(p, q)<<endl;
    return 0;
}