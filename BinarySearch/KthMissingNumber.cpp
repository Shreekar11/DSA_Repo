<<<<<<< HEAD
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int KthMissingNumber(vector<int> &v, int n, int k){
    int mx = *max_element(v.begin(), v.end());

    vector<int> freq(mx-1, 0);

    for(int i=0; i<n; i++){
        freq[v[i]]++;
    }
    int cnt = 0;
    int ans;
    for(int i=0; i<freq.size(); i++){

        if(freq[i] != 1){
            cnt++;
        }

        if(cnt == k){
            return i;
        }
    }

    return -1;


}

int main(){
    int n; cin>>n;

    vector<int> v;
    for(int i=0; i<n; i++){
        int e; cin>>e;
        v.push_back(e);
    }

    int k; cin>>k;

    int ans = KthMissingNumber(v, n, k);
    cout << ans << endl;
=======
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int KthMissingNumber(vector<int> &v, int n, int k){
    int mx = *max_element(v.begin(), v.end());

    vector<int> freq(mx-1, 0);

    for(int i=0; i<n; i++){
        freq[v[i]]++;
    }
    int cnt = 0;
    int ans;
    for(int i=0; i<freq.size(); i++){

        if(freq[i] != 1){
            cnt++;
        }

        if(cnt == k){
            return i;
        }
    }

    return -1;


}

int main(){
    int n; cin>>n;

    vector<int> v;
    for(int i=0; i<n; i++){
        int e; cin>>e;
        v.push_back(e);
    }

    int k; cin>>k;

    int ans = KthMissingNumber(v, n, k);
    cout << ans << endl;
>>>>>>> e3122a25e58fa3cbcd50d5e509a94659125a93e9
}