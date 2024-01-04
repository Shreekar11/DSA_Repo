#include<bits/stdc++.h>
using namespace std;

#define ll     long long
#define ff     first
#define ss     second
#define no     cout<<"NO"<<endl;
#define yes    cout<<"YES"<<endl;

void solve(){
	ll int n; cin>>n;
	ll int b[n];
	for(int i=0; i<n; i++){
		cin>>b[i];
	}

	ll int pos=0;
	ll int neg=0;

	for(int i=0; i<n; i++){
		if(b[i]==1){
			pos += i+1;
		}else{
			neg += i+1;
		}
	}

	ll int ans = abs(pos - neg);
	cout<<ans<<endl;
}

int main() {
	int t; cin>>t;
	while(t--){
		solve();
	}
	
	return 0;
}