#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string t){
    int i=0; int j=t.length()-1;
    bool flag = false;
    while(i<j){
        if(t[i] == t[j]){
            flag = true;
            i++; j--;
        }
        else{
            flag = false;
            break;
        }
    }
    return flag;
}

int main(){
    string s; cin>>s;
    if(checkPalindrome(s) == true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
