#include<bits/stdc++.h>
using namespace std;

#define output(x)   for(auto &i : (x)) cout << i <<" ";

void printAllSubsequence(int ind, vector<int> &arr, vector<int> &ans){
    int n = arr.size();
    // base case
    if(ind >= n){
        output(ans);
        cout << endl;
        return;
    }
    

    // take the element
    ans.push_back(arr[ind]);
    printAllSubsequence(ind+1, arr, ans);

    // not take the element
    ans.pop_back();
    printAllSubsequence(ind+1, arr, ans);
}

int main(){

    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    vector<int> ans;
    printAllSubsequence(0, arr, ans);
    cout << endl;

    return 0;
}