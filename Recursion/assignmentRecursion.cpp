<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int sumValue(int n){
    int ans=0;
    // base case
    if(n==1){
        ans++;
        return ans;
    }
    ans += n+sumValue(n-1);     
    return ans;
}

int sumValueOfm(int n, int m){
    // base case
    if(m == 1){
        return sumValue(n);
    }
    int sum = sumValueOfm(n, m-1);
    return sumValue(sum);   

}

int main(){
    int n,m; 
    cin>>n>>m;

    cout<<sumValueOfm(n, m);
=======
#include<bits/stdc++.h>
using namespace std;

int sumValue(int n){
    int ans=0;
    // base case
    if(n==1){
        ans++;
        return ans;
    }
    ans += n+sumValue(n-1);     
    return ans;
}

int sumValueOfm(int n, int m){
    // base case
    if(m == 1){
        return sumValue(n);
    }
    int sum = sumValueOfm(n, m-1);
    return sumValue(sum);   

}

int main(){
    int n,m; 
    cin>>n>>m;

    cout<<sumValueOfm(n, m);
>>>>>>> e3122a25e58fa3cbcd50d5e509a94659125a93e9
}