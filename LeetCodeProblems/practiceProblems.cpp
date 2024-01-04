#include <bits/stdc++.h>
#include<vector>
using namespace std;

int problems(vector<int> &nums, int count){
	for(int i=0; i<nums.size(); i++){
	    if(nums[i] >= 10){
	        count++;
	    }
	}
    cout<<count;
	return count;
    
}

int main() {
	// your code goes here
	int n; cin>>n;
	vector<int> nums;
	for(int i=0; i<n;i++){
	    int ele; cin>>ele;
	    nums.push_back(ele);
	}
	int count=0;
	problems(nums, count);
	return 0;
}