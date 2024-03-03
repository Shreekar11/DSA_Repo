#include<bits/stdc++.h>
using namespace std;

void printSubsequence(int ind, vector<int> &ans, int sum, int k, vector<int> &arr, int n){
    if(ind == n){
        if(k == sum){
            for(auto it : ans){
                cout << it <<" ";
            }cout << endl;
        }
        return;
    }

    ans.push_back(arr[ind]);
    sum += arr[ind];
    printSubsequence(ind+1, ans, sum, k, arr, n);

    ans.pop_back();
    sum -= arr[ind];
    printSubsequence(ind+1, ans, sum, k, arr, n);
}

int countSubsequence(int ind, vector<int> &ans, int sum, int k, vector<int> &arr, int n){
    if(ind == n){
        if(k == sum){
            return 1;
        }

        return 0;
    }

    ans.push_back(arr[ind]);
    sum += arr[ind];

    int left = countSubsequence(ind+1, ans, sum, k, arr, n);

    ans.pop_back();
    sum -= arr[ind];

    int right = countSubsequence(ind+1, ans, sum, k, arr, n);

    return left+right;
}

int main(){

    int n, k; cin>>n>>k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    vector<int> ans;
    int res = countSubsequence(0, ans, 0, k, arr, n);
    cout << res << endl;

    return 0;
}