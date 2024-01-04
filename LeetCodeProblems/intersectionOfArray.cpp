#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> intersectionOfArray(vector<int> &nums1, vector<int> &nums2, vector<int> &ans, int count){
    int i=0; int j=0;
    while(i<nums1.size() || j<nums2.size()){
        if(nums1[i] < nums2[j]) i++;
        else if(nums1[i] > nums2[j]) j++;
        else{
            ans.push_back(nums1[i]);
            count++;

        }
    }
    return ans;
}
int main(){
    cout<<"Hello World"<<endl;
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
    vector<int> ans;
    int count=0;
    intersectionOfArray(nums1, nums2, ans, count);
    for(int i=0; i<count+1; i++){
        cout<<ans[i]<<" ";
    }

}