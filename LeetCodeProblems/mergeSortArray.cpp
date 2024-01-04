#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> mergeSortArray(vector<int> &nums1, int n, vector<int> &nums2, int m){

    // 1st Method
    for(auto ele : nums2){
        nums1.push_back(ele);
    }
    sort(nums1.begin(), nums1.end());

    for(int i=0; i<n+m; i++){
        cout<<nums1[i]<<" ";
    }
}
int main(){
    int n; cin>>n;
    vector<int> nums1;
    for(int i=0; i<n; i++){
        int ele1; cin>>ele1;
        nums1.push_back(ele1);
    }

    int m; cin>>m;
    vector<int> nums2;
    for(int i=0; i<m; i++){
        int ele2; cin>>ele2;
        nums2.push_back(ele2);
    }

    mergeSortArray(nums1, n, nums2, m);
    return 0;
}