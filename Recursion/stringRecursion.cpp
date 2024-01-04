#include<bits/stdc++.h>
using namespace std;

string removeChar(string &s, int i, int n){
    // base case
    if(i == n) return "";

    // assumption and self work.
    if(s[i] != 'a') return s[i] + removeChar(s, i+1, n);
    return "" + removeChar(s, i+1, n);
}


string iterativeAns(string &s){
    string ans;
    for(int i=0; i<s.length(); i++){
        if(s[i] != 'a') ans.push_back(s[i]);
    }
    return ans;
}
int main(){
    string s = "abcax";
    int i=0; 
    int n=s.length();
    cout<<"String = "<<removeChar(s, i, n)<<endl;
    cout<<"Iterative ans = "<<iterativeAns(s)<<endl;
    return 0;
}