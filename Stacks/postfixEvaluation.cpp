#include<iostream>
#include<stack>
#include<cmath>
using namespace std;

int calculatePostfix(int val1, int val2, char op){
    if(op == '+') return val1 + val2;
    if(op == '-') return val1 - val2;
    if(op == '*') return val1 * val2;
    if(op == '/') return val1 / val2;

    return val1 ^ val2;
}

int evalPostfix(string &str){
    stack<int> st;
    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        if(isdigit(ch)){
            st.push(ch - '0');
        }else{
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();

            st.push(calculatePostfix(val1, val2, ch));
        }
    }

    return st.top();
}

int main(){

    string s = "231*+9-";
    int ans = evalPostfix(s);
    cout << ans << endl;

    return 0;
}