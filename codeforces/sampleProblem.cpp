/*
Q. "Breaking Bad"

    Walter white a high school chemistry teacher who along with his partner Jesse pinkman
    cook a drug known as methamphetamine (meth). They work with Gustavo Fring who supplies 
    and distributes the meth.

    Walter prepares N batches of meth in which ith batch is the batch and the A(ith) represents 
    the purity of meth. 
    Jesse prepares N batches of meth in which the ith batch is the batch and the B(ith) represents 
    the purity of meth.

    In order to get paid the purity of meth should be above 8. 
    Between Walter and Jesse either of the batch purity is higher gets paid $200 and other 
    one gets paid $100. If the purity of the batches are same then they are paid $100 each.

    Gus pays them on a particular condition - 
    1) The purity of the meth batches should be above 8
    2) The purity of the meth is determined on the scale of 0 - 10.

    You have to determine the maximum amount of money earned between Walter and Jesse.
    Print EQUAL if the amount of money earned is equal.

    Input Format :-
    1) The first line contains a single integer T - the number of test cases. Then the test cases follow.
    2) The first line of each test case contains an integer N - the number of batches prepared by Walter and Jesse.
    3) The second line of each test case contains N space-separated integers A1,A2, ...., An where Ai represents 
       the purity of meth prepared by Walter.
    4) The third line of each test case contains N space-separated integers B1,B2, ...., Bn where Bi represents 
       the purity of meth prepared by Jesse.

    Output Format :-
    For each test case, output in a single line, the maximum amount of money earned between Walter and Jesse.
    Print EQUAL if the amount of money earned is equal.


    Test Cases :-
    Input        Output
    3            300
    3            400
    4 9 10       EQUAL
    5 9 9
    4
    9 9 8 7
    10 8 8 9 
    2
    10 8
    7 9 
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    int waltMeth[n];
    for(int i=0; i<n; i++){
        cin>>waltMeth[i];
    }

    int jessMeth[n];
    for(int i=0; i<n; i++){
        cin>>jessMeth[i];
    }

    int walt=0;
    int jesse=0;
    for(int i=0; i<n; i++){
        if(waltMeth[i] > 8 and jessMeth[i] > 8){
            if(waltMeth[i] > jessMeth[i]){
                walt += 200;
                jesse += 100;
            }
            else if(waltMeth[i] < jessMeth[i]){
                walt += 100;
                jesse += 200;
            }
            else{
                walt += 100;
                jesse += 100;
            }
        }
        else if(waltMeth[i] > 8 and jessMeth[i] <= 8){
            walt += 200;
        }
        else if(waltMeth[i] <= 8 and jessMeth[i] > 8){
            jesse += 200;
        }
    }

    if(walt != jesse){
        cout<<max(walt, jesse)<<endl;
    }
    else cout<<"EQUAL"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}

