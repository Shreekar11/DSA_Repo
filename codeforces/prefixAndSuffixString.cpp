#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    string s;
    map<string, int> m;

    for(int i=0; i<2*(n-1); i++){
        cin>>s;

        m[s]++;
    }

    bool flag = true;
    for(auto it : m){
        string a = it.first;
        string b = a;

        reverse(b.begin(), b.end());
        if(a != b && m.find(b) == m.end()){
            flag = false;
        }
        if(a == b && it.second != 2){
            flag = false;
        }
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}