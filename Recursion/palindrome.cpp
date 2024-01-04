#include<bits/stdc++.h>
using namespace std;

bool palindrome(int num, int *temp){

    // base case
    if(num >=0 && num <= 9){
        int last = (*temp)%10;
        (*temp) /= 10; 
        return (num == last);
    }
 
    bool result = palindrome(num/10, temp) and (num%10 == (*temp)%10);       
    (*temp) = (*temp)/10;


    return result;

}
bool palindrome2(int num){
    string s = to_string(num);
    int i=0; int j=s.length()-1;
    while(i<s.length() and j>=0){
        if(s[i] != s[j]){
            return false;
            i++; j--;
        }
        else{
            i++; j--;
        }
    }
    return true;
}

int main(){
    int n=1021;
    int temp =n;
    int *another = &temp;
    cout<<palindrome(n, another)<<endl;
    if(palindrome2(n) == 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}