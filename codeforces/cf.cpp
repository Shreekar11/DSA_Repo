#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void omkar(int n,vector<int>&a){
	vector<int>b;
	for(int i=0;i<n;i++){
		b.push_back(a[i]);
	}
	int sum1 = 0;
	int sum2 = 0;
	for(int j=0;j<n;j++){
		for(int i=1;i<n;i++){
			sum1 = a[i-1]+b[i-1];
			sum2 = a[i]+b[i];
			if(sum1 > sum2){
				swap(b[i-1],b[i]);
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}cout<<endl;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>a;
		for(int i=0;i<n;i++){
			int e;cin>>e;
			a.push_back(e);
		}
		omkar(n,a);
	}
}