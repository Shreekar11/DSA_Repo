#include<iostream>
#include<algorithm>
#include<climits>
#include<string>
#include<vector>
#define ll long long 
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()  // sort function
#define rev(x) (x).begin(), (x).end()  // reverse function
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
using namespace std;

/*---------------------------------------------------------------------*/

void solve(){
    ll int n; cin>>n;
    ll int a[n];
    ll int mn = INT_MAX;
    ll int even=0, odd=0;
    for(ll int i=0; i<n; i++){
        cin>>a[i];

        mn = min(mn, a[i]);

        if(a[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }

    if(even==0 || odd==0){
        cout<<"YES"<<endl;
    }else{
            if(mn%2 != 0){
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