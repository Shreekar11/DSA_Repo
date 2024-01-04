#include<bits/stdc++.h>
#define int long long int
using namespace std;

/*
    Lower bound :- It is a smallest index such that arr[idx] >= target.
    TC - O(log N).
*/

int lowerBound(vector<int> &v, int n, int target){
    int low = 0;
    int high = n-1;
    int ans = n;

    while(low <= high){
        int mid = (low + high)/2;

        if(v[mid] >= target){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }

    return ans;
}

/*
    Upper bound :- It is a smallest index such that arr[idx] > target.
    TC - O(log N). 
*/

int upperBound(vector<int> &v, int n, int target){
    int low = 0;
    int high = n-1;
    int ans = n;

    while(low <= high){
        int mid = (low + high)/2;

        if(v[mid] > target){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }

    return ans;
}

int32_t main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int e; cin>>e;
        v.push_back(e);
    }

    int target; cin>>target;

    cout << "Lower bound index : " << lowerBound(v, n, target) << endl;

    cout << "Upper bound index : " << upperBound(v, n, target) << endl;

    return 0;
}