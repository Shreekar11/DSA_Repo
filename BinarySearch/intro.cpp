#include<bits/stdc++.h>
#define int long long int
typedef int int32_t
using namespace std;

/* Binary Search - It is search algorithm which is implemented on a sorted search space.
                   The portion between low and high is defined as search space.

   TC - O(log N).
*/

// * ITERATIVE CODE *

// int binarySearch(vector<int> &v, int n, int target){
//     int low = 0;
//     int high = n-1;
//     int ans = -1;

//     while(low <= high){
//         int mid = (low + high)/2;

//         if(v[mid] == target){
//             ans = v[mid];
//             return  ans;
//         }else if(target > v[mid]){
//             low = mid + 1;
//         }else{
//             high = mid - 1;
//         }
//     }

//     return ans;
// }

// * RECURSIVE CODE *

int recursiveBinarySearch(vector<int>  &v, int n, int target, int low, int high){

    if(low > high){
        return -1;
    }

    int mid = (low + high)/2;
    int ans;

    if(v[mid] == target){
        ans = v[mid];
        return ans;
    }else if(v[mid] < target){
        recursiveBinarySearch(v, n, target, mid+1, high);
    }else{
        recursiveBinarySearch(v, n, target, low, mid-1);
    }
}

int binarySearch(vector<int> &v, int n, int target){
    return recursiveBinarySearch(v, n, target, 0, n-1);
}


int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int e; cin>>e;
        v.push_back(e);
    }

    int target; cin>>target;

    cout<< "Answer = "<< binarySearch(v, n, target) << endl;
}