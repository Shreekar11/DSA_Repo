#include<bits/stdc++.h>
using namespace std;

int  findKthPositive(vector<int>& arr, int k, int n) {
    vector<int> arr2;
    int l = arr[n-1];
    int j=0;
    for(int i=1; i<l+k; i++){
        arr2.push_back(i);
    }
    for(int i=0; i<)
}

int main(){
    int n; cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int term; cin>>term;
        arr.push_back(term);
    }
    int k; cin>>k;
    cout<<findKthPositive(arr, k, n);
}