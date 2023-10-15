#include<bits/stdc++.h>
using namespace std;

int minNumber(vector<int> &nums, int min){
    for(int i=0; i<nums.size(); i++){
        if(nums[i] < min){
            min = nums[i];
        }
    }
    return min;
}
int appendElement(vector<int> &nums, int k){
    int min=nums[0];
    int sum=0;
    minNumber(nums, min);
    while(k--){
        min++;
        for(auto ele : nums){
            if(ele == min) min++;
        }
        sum += min;
    }
    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    
    return sum;
}

int main(){
    int n; cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int term; cin>>term;
        nums.push_back(term);
    }
    int k; cin>>k;
    int ans= appendElement(nums, k);
    cout<<"Sum of elements = "<<ans<<endl;
}