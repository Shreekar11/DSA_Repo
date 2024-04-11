<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

// a = [5, 5, 1, 2, 3, 4, 5]

int rotatedArray(vector<int> &v, int n, int target){
    int low =0, high = n-1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(v[mid] == target) return mid;
    /*
        if the array containes duplicates then the code will be as following - 

        if(v[low] == v[mid] && v[mid] == v[high]){
            low++;
            high--;
        }
    */

        // identifying the sorted part is the array

        // left is sorted
        if(v[low] <= v[mid]){
            if(v[low] <= target && target <= v[mid]){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        // right is sorted
        else{
            if(v[mid] <= target && target <= v[high]){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
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

    int target; cin>>target;

    int idx = rotatedArray(v, n, target);

    cout << "Index : " << idx << endl;
=======
#include<bits/stdc++.h>
using namespace std;

// a = [5, 5, 1, 2, 3, 4, 5]

int rotatedArray(vector<int> &v, int n, int target){
    int low =0, high = n-1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(v[mid] == target) return mid;
    /*
        if the array containes duplicates then the code will be as following - 

        if(v[low] == v[mid] && v[mid] == v[high]){
            low++;
            high--;
        }
    */

        // identifying the sorted part is the array

        // left is sorted
        if(v[low] <= v[mid]){
            if(v[low] <= target && target <= v[mid]){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        // right is sorted
        else{
            if(v[mid] <= target && target <= v[high]){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
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

    int target; cin>>target;

    int idx = rotatedArray(v, n, target);

    cout << "Index : " << idx << endl;
>>>>>>> e3122a25e58fa3cbcd50d5e509a94659125a93e9
}