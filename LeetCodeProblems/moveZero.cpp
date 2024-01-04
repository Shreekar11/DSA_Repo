#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> moveZero(vector<int> &nums){
    vector<int> zeroArray;
    int j=0;
    int count=0;
    // Loop for iteration in nums array
    for(int i=0; i<nums.size(); i++){
        // condition to check if element is not equal to 0.
        if(nums[i] != 0){
            // then inserting the non-zero element from starting of the array
            nums[j++] = nums[i];
            count++;
        }
    }
    for(int i=count; i<nums.size(); i++){
        nums[i]=0;
    }
    return nums;
}
int main(){
    int n; cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int ele; cin>>ele;
        nums.push_back(ele);
    
    }
    moveZero(nums);
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}