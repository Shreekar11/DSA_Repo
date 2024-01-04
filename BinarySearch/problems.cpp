// Problem Solving - College Wallah
#include<bits/stdc++.h>
using namespace std;

int firstOcc(vector<int> &v, int n, int target){
    int low = 0, high = n-1;
    int f = n;

    while(low <= high){
        int mid = (low + high)/2;

        if(v[mid] == target){
            f = mid;
            high = mid - 1;
        }else if(v[mid] > target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return f;
}

int lastOcc(vector<int> &v, int n, int target){
    int low = 0, high = n-1;
    int l = n;

    while(low <= high){
        int mid = (low + high)/2;

        if(v[mid] == target){
            l = mid;
            low = mid + 1;
        }else if(v[mid] > target){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }

    return l;
}

void problem1(vector<int> &v, int n, int target, vector<int> &temp){
    int first = firstOcc(v, n, target);
    int last = lastOcc(v, n, target);

    if(first == n || v[first] != target){
        // cout << -1 <<"," << -1<<endl;

        temp.push_back(-1);
        temp.push_back(-1);
        return;
    }

    // cout << first <<"," << last <<endl
    temp.push_back(first);
    temp.push_back(last);
    return;
}

int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int e; cin>>e;
        v.push_back(e);
    }

    int target; cin>>target;

    vector<int> temp;

    problem1(v, n, target, temp);

    for(int i=0; i< temp.size(); i++){
        cout << temp[i] <<" ";
    }

    return 0;
}