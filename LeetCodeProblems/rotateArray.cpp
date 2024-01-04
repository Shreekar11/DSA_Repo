#include<bits/stdc++.h>
using namespace std;
void rotateArray(vector<int> &nums, int n, int k, vector<int> &ans){

    int j=0; int p=0;
    for(int i=0; i<n; i++){
        ans[j++] = nums[i];
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    // for(int i=n-k; i<n; i++){
    //     nums[p++] = nums[i];
    // }
    // for(int i=0; i<n-k; i++){
    //     nums[p++] = ans[i];
    // }
    // for(int i=0; i<n; i++){
    //     cout<<nums[i];
    // }
    
}
int main(){
    vector<int> nums;
    vector<int> ans;

    int n; cin>>n;
    for(int i=0; i<n; i++){
        int ele; cin>>ele;
        nums.push_back(ele);
    }
    int k; cin>>k;
    rotateArray(nums, n, k, ans);
    return 0;
}