#include<bits/stdc++.h>
using namespace std;

int koko(vector<int> &v, int n, int mid){
    int mn = 0;
    for(int i=0; i<n; i++){
        if(v[i]%mid != 0){
            mn += (v[i]/mid)+1;
        }else{
            mn += (v[i]/mid);
        }
    }
    return mn;
}

int kokoBanana(vector<int> &v, int n, int hrs){
    int low = 1;
    int high = v[n-1];
    int res;
    while(low <= high){
        int mid = (low + high)/2;

        int ans = koko(v, n, mid);

        if(ans <= hrs){
            res = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }

    return res;
}

int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int e; cin>>e;
        v.push_back(e);
    }
    int hrs; cin>>hrs;

    sort(v.begin(), v.end());

    int mn = kokoBanana(v, n, hrs);
    cout <<"Minimum No. : " << mn <<endl;
}