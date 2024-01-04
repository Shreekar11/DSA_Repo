#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int n = s.length();
 
        int cnt=0;
 
        if(n == 1){
            if(s[0]=='^'){
                cout<<1<<endl;
                continue;
            }else{
                cout<<2<<endl;
                continue;
            }
        }else{
            if(s[0]!='^'){
                cnt++;
            }
            if(s.back()!='^'){ 
                cnt++;
            }
            for(int i=0; i<n-1; i++){
                if(s[i]=='_' and s[i+1]=='_'){
                    cnt++;
                }
            }
            cout<<cnt<<endl;
        }
 
    }
}