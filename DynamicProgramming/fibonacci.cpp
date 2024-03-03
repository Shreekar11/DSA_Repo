#include<bits/stdc++.h>
using namespace std;

/*
    TC - O(N);
    SC - O(N);
*/

int fibonacci(int n, vector<int> &dp){
    // base case
    if(n <= 1){
        return n;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    dp[n] = fibonacci(n-1, dp) + fibonacci(n-2, dp); // memoizing the previous calculated value
    return dp[n];
}

int main(){
    int n; cin>>n;
    vector<int> dp(n+1, -1);
    int ans = fibonacci(n, dp);
    cout << ans << endl;

    int prev2 = 0;
    int prev1 = 1;
    for(int i=2; i<=n; i++){
        int sum = prev1 + prev2;
        prev2 = prev1;
        prev1 = sum;
    }

    cout << prev1 << endl;

    return 0;
}