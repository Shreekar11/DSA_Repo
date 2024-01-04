#include <bits/stdc++.h>
using namespace std;

void nextGreaterElement(vector<int> &arr){
    int n = arr.size();
    vector<int> ans(n, -1);
    stack<int> st;
    st.push(0);

    for(int i=1; i<n; i++){
        while(!st.empty() && arr[i] > arr[st.top()]){
            ans[st.top()] = arr[i];
            st.pop();
        }

        st.push(i);
    }

    for(auto it : ans){
        cout << it <<" ";
    }

    return;
}

int main(){

    int n; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int e; cin>>e;
        v.push_back(e);
    }

    nextGreaterElement(v);
}