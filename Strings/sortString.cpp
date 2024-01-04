#include<iostream>
#include<string>
#include<vector>
using namespace std;

string sortString(string s){

    // creating a frequency array to store frequency of each character in a string
    // initially freq array has all element as 0
    vector<int> freq(26, 0);

    // loop to store frequency of string
    for(int i=0; i<s.length(); i++){
        int index = s[i] - 'a'; 
        freq[index]++;
        /* Now this operation is done to store frequency of character
        in the array in lexiographical order or from a-z, using its 
        Ascii value, by subtracting the ascii value of char w/ 
        ascii value of a.

        For Ex :- s = "abcd";   freq = [1, 1, 1, 1].
            for i=0;
            index = 'a'-'a' -> ascii(a) - ascii(a) -> 97 - 97 = 0  (this is the index)              
            freq[0] = 1;
            for i=1;
            index = 'b'-'a' -> asc(b) - asc(a) -> 98 - 97 = 1 (this is the index)
            freq[1] = 1;
            */ 
    }
    int j=0;
    for(int i=0; i<26; i++){
        while(freq[i]--){
            s[j++] = i+'a';
        }
    }
    return s;
}

int main(){
    string s; cin>>s;
    cout<<sortString(s)<<endl;
}