#include<bits/stdc++.h>
using namespace std;

string zigZag(string s, int rows){
    vector<string> ans(rows);

    if(rows == 1){
        return s;
    }

    bool ok = false;
    int ptr = 0;
    for(int i=0; i<s.size(); i++){
        if(ptr == 0 || ptr == rows - 1){
            ok = !ok;
        }

        ans[ptr] += s[i];

        if(ok){
            ptr += 1;
        }else{
            ptr -= 1;
        }
    }

    string res;
    for(auto it : ans){
        res += it;
    }

    return res;
}

int main(){
    string s; cin >> s;
    int rows; cin >> rows;

    string ans = zigZag(s, rows);
    cout << ans << endl;

    return 0;
}
 