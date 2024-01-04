#include<bits/stdc++.h>
using namespace std;

vector<int> mergeArray (vector<int> &nums1, vector<int> &nums2, vector<int> &nums3){
    for(int i=0; i<nums1.size(); i++){
        nums3.push_back(nums1[i]);
    }
    for(int i=0; i<nums2.size(); i++){
        nums3.push_back(nums2[i]);
    }
    sort(nums3.begin(), nums3.end());
    return nums3;


}
int main(){
    // merging array
    vector<int> nums1;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int ele; cin>>ele;
        nums1.push_back(ele);
    }

    vector<int> nums2;
    int m; cin>>m;
    for(int i=0; i<m; i++){
        int ele1; cin>>ele1;
        nums2.push_back(ele1);
    }
    // int k; cin>>k;

    vector<int> nums3;
    mergeArray(nums1, nums2, nums3);
    for(int i=0; i<n+m; i++){
        cout<<nums3[i]<<" ";
    }
    return 0;
}