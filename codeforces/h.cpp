#include<bits/stdc++.h>
#define ll  long long
#define ff  first
#define ss  second
using namespace std;

/*---------------------------------------------------------------------*/
void solve(){
    ll int n; cin>>n;
    ll int a[n];

    ll int mn = INT_MAX;
    for(ll int i=0; i<n; i++){
        cin>>a[i];
        mn = min(mn, a[i]);
    }

    bool flag = false;
    for(ll int i=0; i<n-1; i++){
        if((a[i]%2) != a[i+1]%2){
            flag = true;
            break;
        }
    }

    if(!flag){
        cout<<"YES"<<endl;
    }else{
        if(mn%2 == 1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}