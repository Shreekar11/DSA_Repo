#include<bits/stdc++.h>
using namespace std;

int longestPalindromicSubsequence(string s, int i, int j){
    // base case - if only one char is remaining
    if(i == j){
        return 1;
    }

    // base case - if two char and both are same
    if(s[i] == s[j] && i+1 == j){
        return 2;
    }

    if(s[i] == s[j]){
        longestPalindromicSubsequence(s, i+1, j-1) + 2;
    }

    return max(longestPalindromicSubsequence(s, i, j-1), longestPalindromicSubsequence(s, i+1, j));

}

int main(){

    string s; cin>>s;
    int ans = longestPalindromicSubsequence(s, 0, s.size()-1);

    cout << ans << endl;

    return 0;
}