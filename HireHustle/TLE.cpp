#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "4128599415";

    int cnt = 0;
    int n = 5;

    for(int i=0;i<s.size();i++)
    {
        if(s[i] - '0' < n)
        {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}