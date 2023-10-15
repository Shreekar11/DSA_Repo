#include<bits/stdc++.h>
using namespace std;

/*
    sorted array
    arr = [1, 2, 3, 4, 5];

    rotated sorted array
    arr = [4, 5, 1, 2, 3];  rotated by three elements.
*/

// Approach 1 :-
int minimumElement(vector<int> &v, int n){
    int low = 0, high = n-1;
    int ans = INT_MAX;
    while(low <= high){
        int mid = low + (high - low)/2;

        if(v[low] <= v[mid]){
            ans = min(ans, v[low]);
            low = mid + 1;
        }else{
            ans = min(ans, v[mid]);
            high = mid - 1;
        }
    }

    return ans;
}


// Approach 2 :-
int minElement(vector<int> &v, int n){
    int low=0, high = n-1;

    // array is sorted.
    if(v[low] < v[high]) return low;

    // array is rotated sorted.
    while(low <= high){
        int mid = low + (high - low)/2;

        if(v[mid] > v[mid+1]) return mid+1;
        if(v[mid-1] > v[mid]) return mid;

        if(v[mid] > v[low]){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return -1;
}

int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int e; cin>>e;
        v.push_back(e);
    }

    // int x; cin>>x;1


    int minIndex = minimumElement(v, n);
    cout << minIndex << endl;

    return 0;
}