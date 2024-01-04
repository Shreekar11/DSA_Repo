#include<iostream>
#include<cmath>
using namespace std;

int armstrong(int n, int d){
    // base case
    if(n==0) return 1;

    int power = pow(n%10 , d);
    return power + armstrong(n/10 , d);
}

int main(){
    int n = 153;

    int temp=n;
    int count=1;
    while(true){
        if(temp <= 9){
            break;
        }
        temp = temp/10;
        count++;
    }
    cout<<count<<endl;
    if(n == armstrong(n, count)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}