#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

// Sliding window approach
int longestOnes(string str, int k1){
    int start = 0;
    int end = 0;
    int zeroCount = 0;
    int maxLength = 0;

    for(; end<str.length(); end++){
        if(str[end] == '0') zeroCount++;

        while(zeroCount > k){
            
            if(str[start]=='0') zeroCount--;
            start++;
        }
        maxLength = max(maxLength, end-start+1);

    }
    
    return maxLength;
}

int main(){
    string s; cin>>s;
    int k; cin>>k;
    cout<<longestOnes(s, k)<<endl;
}