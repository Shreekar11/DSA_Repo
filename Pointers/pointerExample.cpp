#include<bits/stdc++.h>
using namespace std;
void swapNo(int *num1, int *num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int main(){

    // declearation of x and y in memory.
    // some space is allocated to x and y in memory
    int x,y; 
    cin>>x>>y;  // taking input from user for x and y.

    // fetching the address of x and y in ptrX and ptrY.
    int *ptrX = &x;
    int *ptrY = &y;

    int result;
    int *ptrResult = &result;
    *ptrResult = *ptrX + *ptrY;

    cout<<"Addition of x and y - "<<*ptrResult<<endl;

    int a; cin>>a;
    int b; cin>>b;
    int *address_a = &a;
    int *address_b = &b;

    int product;
    int *address_p = &product;

    *address_p = (*address_a) * (*address_b);
    cout<<"Product = "<<*address_p<<endl;

    int num1; cin>>num1;
    int num2; cin>>num2;
    swapNo(&num1, &num2);
    cout<<num1<<" "<<num2;
    
    return 0;
}