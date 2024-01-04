#include<bits/stdc++.h>
using namespace std;

string zigZag(string s, int rows){
    vector<string> ans(rows);
    if(rows == 1){
        return s;