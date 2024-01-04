#include<bits/stdc++.h>
using namespace std;

void removeElement(vector<int> &nums, int val, int count){
    int j=0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] != val){
            nums[j++] = nums[i];
            count++;
        }
    }
    cout<<count;
}
int main(){
    int n; cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int ele; cin>>ele;
        nums.push_back(ele);
    }
    int val; cin>>val;
    int count=0;
    removeElement(nums, val, count);
    cout<<endl;



    int arr[] = {1,3,5,7};
    int size = 3;
    int mid = size/2;
    cout<<mid;
    return 0;

}
