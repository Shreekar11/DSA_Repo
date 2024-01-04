#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int e; cin>>e;
        v.push_back(e);
    }

    vector <pair<int, int>> p;
    for(int i=0; i<n; i++){
        p.push_back(make_pair(v[i], i));
    }
}