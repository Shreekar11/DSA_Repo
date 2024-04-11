<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

bool isValid(string &s){
    stack<char> st;

    for(int i=0; i<s.size(); i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            st.push(s[i]);
            continue;
        }

        if(s[i] == ')' && !st.empty() && st.top() == '('){
            st.pop();
        }else if(s[i] == ']' && !st.empty() && st.top() == '['){
            st.pop();
        }else if(s[i] == '}' && !st.empty() && st.top() == '{'){
            st.pop();
        }else{
            return false;
        }
    }

    return true;
}

int main(){

    string s; cin>>s;
    if(isValid(s)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
=======
#include<bits/stdc++.h>
using namespace std;

bool isValid(string &s){
    stack<char> st;

    for(int i=0; i<s.size(); i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            st.push(s[i]);
            continue;
        }

        if(s[i] == ')' && !st.empty() && st.top() == '('){
            st.pop();
        }else if(s[i] == ']' && !st.empty() && st.top() == '['){
            st.pop();
        }else if(s[i] == '}' && !st.empty() && st.top() == '{'){
            st.pop();
        }else{
            return false;
        }
    }

    return true;
}

int main(){

    string s; cin>>s;
    if(isValid(s)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
>>>>>>> e3122a25e58fa3cbcd50d5e509a94659125a93e9
}