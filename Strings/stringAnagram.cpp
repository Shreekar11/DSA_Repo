#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isAmagram(string s1, string s2){
    // creating a frequaency array
    vector<int> freq(26,0);

    /* if the length of both strings are not equal
       then directly the answer will br false 
    */
    if(s1.length() != s2.length()) return false;
    

    /* we find the frequency of characters from string s1 and increment the freq.
       then with the help of string s2 we will decrement freq. if the same char is present.
       If the frequency of the charater is 0 then it means that the character is present 
       in both the strings and hence the strings are anagrams.
    */
    // For. Ex:- s1="anagram", s2="nagaram"
    for(int i=0; i<s1.length(); i++){//   a  g  m  n  r
        freq[s1[i] - 'a']++;   // freq = [3, 1, 1, 1, 1]
        freq[s2[i] - 'a']--;   // freq = [0, 0, 0, 0, 0]
    //  as freq of char are 0 which means the strings s1 & s2 contains same char.
    }
    for(int i=0; i<s1.length(); i++){
        if(freq[i] != 0) return false;
    }
    return true;
}

int main(){
    string s1; cin>>s1;
    string s2; cin>>s2;

    if(isAmagram(s1, s2)){
        cout<<"Strings are amagram"<<endl;
    }
    else{
        cout<<"Strings are not amagram"<<endl;
    }
}