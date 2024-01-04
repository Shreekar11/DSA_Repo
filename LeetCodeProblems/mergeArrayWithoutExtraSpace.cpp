#include<bits/stdc++.h>
#include<vector>
using namespace std;

// Q. Merging array without creating extra space.

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
     int j=0;

     // loop executed from the last element of the array
     // and elements are inserted
     for(int i=m; i<m+n; i++){
        nums1[i] = nums2[j++];
     }
     // sorting array.
     sort(nums1.begin(), nums1.end());
    }
int main(){
    int m; cin>>m;
    vector<int> nums1;
    for(int i=0; i<m; i++){
        int ele; cin>>ele;
        nums1.push_back(ele);
    }

    int n; cin>>n;
    vector<int> nums2;
    for(int i=0; i<n; i++){
        int ele1; cin>>ele1;
        nums2.push_back(ele1);
    }
    merge(nums1, m, nums2, n);

      for(int i=0; i<m+n; i++){
            cout<<nums1[i]<<" ";
        }

}