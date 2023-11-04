#include<bits/stdc++.h>
using namespace std;

#define all(x)  (x).begin(), (x).end()

void stockSpan(vector<int> &arr){

    // first calculating previous greater number

    int n = arr.size();
    reverse(all(arr));
    vector<int> ans(n, -1);
    stack<int> st;
    st.push(0);

    for(int i=1; i<n; i++){
        while(!st.empty() && arr[i] > arr[st.top()]){
            ans[st.top()] = n - i - 1;
            st.pop();
        }

        st.push(i);
    }

    reverse(all(ans));
    reverse(all(arr));

    for(int i=0; i<ans.size(); i++){
        cout << i - ans[i] <<" ";
    }
    cout << endl;

    return;
}

int main(){

    int n; cin>>n;
    vector<int> a;
    for(int i=0; i<n; i++){
        int e; cin>>e;
        a.push_back(e);
    }

    stockSpan(a);

    return 0;
}