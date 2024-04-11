#include<bits/stdc++.h>
using namespace std;

int frogJump(int ind, vector<int> &arr, vector<int> &dp){

    // base case
    if(ind == 0){
        return 0;
    }

    // consider frog takes 1 step jump
    int jumpOne = frogJump(ind-1, arr, dp) + abs(arr[ind] - arr[ind-1]);

    // consider frog takes 2 step jump
    int jumpTwo = INT_MAX;
    if(ind > 1){
        jumpTwo = frogJump(ind-2, arr, dp) + abs(arr[ind] - arr[ind-2]);
    }

    dp[ind] = min(jumpOne, jumpTwo);
    return dp[ind];
}

int main() {

    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    vector<int> dp(n, -1);

    int ans = frogJump(n-1, arr, dp);
    cout << ans << endl;

    return 0;
}