#include<bits/stdc++.h>
using namespace std;

int firstOcc(vector<int> &v, int n, int x){
    int low = 0;
    int high = n-1;

    int f = -1;
    while(low <= high){
        int mid = (low + high)/2;

        if(v[mid] == x){
            f = mid;
            high = mid - 1;
        }else if(v[mid] < x){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return f;
}

int lastOcc(vector<int> &v, int n, int x){
    int low = 0;
    int high = n-1;

    int l = -1;

    while(low <= high){
        int mid = (low + high)/2;

        if(v[mid] == x){
            l = mid;
            low = mid + 1;
        }else if(v[mid] < x){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return l;
}

int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int e; cin>>e;
        v.push_back(e);
    }

    int x; cin>>x;

    int first = firstOcc(v, n, x);
    int last = lastOcc(v, n, x);

    cout << first <<" , "<< last << endl;
}