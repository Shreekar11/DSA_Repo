<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums, int n){
    for(auto num : nums){
        int count=0;
        for(auto ele : nums){
            if(ele == num) count++;
        }
        if(count > n/2){
            return num;
        } 
    }
    return 0;
}


int main(){
    int n; cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int no; cin>>no;
        nums.push_back(no);
    }
    int ans = majorityElement(nums, n);
    cout<<"Answer = "<<ans<<endl;
=======
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums, int n){
    for(auto num : nums){
        int count=0;
        for(auto ele : nums){
            if(ele == num) count++;
        }
        if(count > n/2){
            return num;
        } 
    }
    return 0;
}


int main(){
    int n; cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int no; cin>>no;
        nums.push_back(no);
    }
    int ans = majorityElement(nums, n);
    cout<<"Answer = "<<ans<<endl;
>>>>>>> e3122a25e58fa3cbcd50d5e509a94659125a93e9
}