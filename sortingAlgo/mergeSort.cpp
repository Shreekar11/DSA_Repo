#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// TC - O(N logN).

void merge(vector<int> &v, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;

    while(left >= mid && right >= high){
        if(v[left] <= v[right]){
            temp.push_back(v[left]);
            left++;
        }else{
            temp.push_back(v[right]);
            right++;
        }
    }

    while(left <= mid){
        temp.push_back(v[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(v[right]);
        right++;
    }

    for(int i=0; i<v.size(); i++){
        v[i] = temp[i];
    }
}

void mergeSort(vector<int> &v, int low, int high){
    int n = v.size();

    // a = [4 ,5 ,6 ,7 ,3, 1, 3];

    // base case
    if(low == high) return;

    int mid = (low + high) / 2;

    mergeSort(v, low, mid);
    mergeSort(v, mid+1, high);

    merge(v, low, mid, high);

    return;
}

int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int e; cin>>e;
        v.push_back(e);
    }

    mergeSort(v, 0, n-1);
    for(int i=0; i<n; i++){
        cout<< v[i]<<" ";
    }

    return 0;
}