/*
Q. "Spider-Man Saves"
    Spider-Man wants to save a girl who is present at the last building.
    So, there are N buildings and at the ith building A1, A2, .... , An.
    Ai represents the height of the building.

    In order to reach the last building Spider-Man can take following steps :-
    1) Initially Spider-Man has no Spider-Webs so whenever spider-man jumps 
       from a higher building to a shorter building then he receives absolute
       differnce amount of spider-web.
    2) Spidey will have to always jump from higher to shorter building.
    2) If spider-man has enough spider-web to swing from the present building 
       to the next higher building then he will do so.
    3) If no sufficient web is available then spidey will have to jump to 
       next immediate building.
    
    So You need to print the minimum number of steps/jumps it will take 
    spider-man to reach the last building and save the girl.

    Input Format :-
    1) The first line of each test case contains an integer N - the number of buildings.
    2) The second line of each test case contains N space-separated integers A1,A2, ...., An where Ai represents 
       the height of the buildings.

    Output Format :-
    Print the minimum steps/jumps recquired to reach the last building.

    Test Cases :-
    Input                   Output
    7                       4
    16 8 6 12 13 11 12
   
    Explanation :- 
    Initially spider-man has no webs so he will have to jump to the next building.
    spider-man jumps from 16 -> 8. This jump will take 1st step. So after a jump he receives
    webs which is absolute diff. of (16-8) = 8. So Now he can swing to the next higher 
    building directly i.e 13. As he has 8 spider-webs so from 8 -> 13 he will require 
    (13 - 8) = 5 webs. So that will be his 2nd step. Spidey now jumps from 13 -> 11 i.e
    3rd step. From 11 -> 12 spidey will swing w/ web making it 4th step.
    Therefore final output will be 4.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    if(a[0] < a[1]){
        cout<<0<<endl;
    }

    int webs=0;
    int steps=0;
    for(int i=0; i<n; i++){
        webs = abs(a[i] - a[i+1]);
    }
}