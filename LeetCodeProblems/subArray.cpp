#include<bits/stdc++.h>
#include<vector>
using namespace std;
int subArray(vector<int> &v){
    // initialising totalSum=0 to find the sum of complete array
    int totalSum=0; 
    // initialising prefixSum=0 to find sum of 1st sub-array                
    int prefixSum=0;
    // initialising suffixSum=0 to get the sum of 2nd sub-array
    int suffixSum=0;

    // Loop for the total sum of array
    for(int i=0; i<v.size(); i++){
        totalSum += v[i];
    }

    // initialising the pointer at left position
    int left_ptr=0;
    // pointer at right position for satisfying the loop condition
    int right_ptr=v.size()-1;

    while(left_ptr < right_ptr){
        // find the sum of elements till leftPtr < rgtPtr which will give the sum for 1st sub-array 
        prefixSum += v[left_ptr];

        // now to find and check the suffixSum 
        suffixSum = totalSum - prefixSum;

        // condition is true then sum of 1st sum-array == sum of 2nd sub-array
        if(prefixSum == suffixSum){
            return left_ptr+1;
        }
        left_ptr++;
    }
    return -1;

}
int main(){
    int size;
    cin>>size;
    vector<int> v;
    for(int i=0; i<size; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    int ans = subArray(v);
    cout<<"Sub-Array position - "<<ans;

return 0;
}