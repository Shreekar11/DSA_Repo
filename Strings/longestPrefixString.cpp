<<<<<<< HEAD
#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

string longestPrefixSum(vector<string> &s){
    /* Sorting string in the lexiographical order
       Ex :- str = [flower, flight, flow]
       sorted array of string
             str = [flight, flow, flower]
        
        now we will compare 1st and last strings of the array.
        The character same in these two strings will have the 
        same character in every string.

        let s1 = "flight", s2 "flower"
        so commmon char are "fl".
        o/p = "fl"    
    */
    sort(s.begin(), s.end());
   
    string ans = "";
    string s1 = s[0];
    string s2 = s[s.size()-1];
    int i=0; int j=0;
    while(i<s1.size() and j<s2.size() ){
        if(s1[i] == s2[j]){
            ans += s1[i];
            i++; j++;
        }
        else{
            break;
        }
    }
    return ans;
}

int main(){
    int n; cin>>n;
    cout<<"Length of string array : "<<n<<endl;

    vector<string> s(n);
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    cout<<longestPrefixSum(s)<<endl;
=======
#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

string longestPrefixSum(vector<string> &s){
    /* Sorting string in the lexiographical order
       Ex :- str = [flower, flight, flow]
       sorted array of string
             str = [flight, flow, flower]
        
        now we will compare 1st and last strings of the array.
        The character same in these two strings will have the 
        same character in every string.

        let s1 = "flight", s2 "flower"
        so commmon char are "fl".
        o/p = "fl"    
    */
    sort(s.begin(), s.end());
   
    string ans = "";
    string s1 = s[0];
    string s2 = s[s.size()-1];
    int i=0; int j=0;
    while(i<s1.size() and j<s2.size() ){
        if(s1[i] == s2[j]){
            ans += s1[i];
            i++; j++;
        }
        else{
            break;
        }
    }
    return ans;
}

int main(){
    int n; cin>>n;
    cout<<"Length of string array : "<<n<<endl;

    vector<string> s(n);
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    cout<<longestPrefixSum(s)<<endl;
>>>>>>> e3122a25e58fa3cbcd50d5e509a94659125a93e9
}