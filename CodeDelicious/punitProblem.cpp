#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    bool flag = false;
    string str = ""; 
    ll size;
    while(!flag){
        string s; cin>>s;

        str += s;
        string stop = "STOP";
        size = str.size();
        string temp = str.substr(size-4, 4);

        if(stop == temp){
            flag = true;
        }
    }
    str = str.substr(0, size-4);
    cout << str << endl;

    return 0;
}