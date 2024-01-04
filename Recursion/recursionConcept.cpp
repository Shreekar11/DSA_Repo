#include<bits/stdc++.h>
using namespace std;

// Q. Factorial using recursion.

int factorial(int n){
    // base case - 
    // base case is used to stop the recursive term.
    if(n==1){
        return 1;
    }
    // the bigger problem i.e factorial(n) is sub divided into smaller problems
    // i.e factorial(n-1) by the function calling itself.

    // factorial(n) -> n * factorial(n-1)
    /* ans = 5 * factorial(4).
       ans = 5 * 4 * factorial(3).
       ans = 5 * 4 * 3 * factorial(2).
       ans = 5 * 4 * 3 * 2 * factorial(1).
       base case is met where n == 1 then return 1.
       so now backtracking of stack will take place ans output will be returned .*/
    int ans = n * factorial(n-1);
    return ans;
}


// Q. Power of a number using recursion.

int power(int x, int m){
    // base case 
    // when power is 0 return 1 ex. 2^0 = 1.
    if (m == 0){
        return 1;
    }
    // Ex. power(2, 5) == 32.
    // result = 2 * power(2, 4).
    // result = 2 * 2 * power(2, 3).
    int result = x * power(x, m-1);
    return result;

}
int main(){
    // Factorial
    int n; cin>>n; // number of which factorial is to be find
    cout<<"Factorial = "<<factorial(n);
    cout<<endl;

    // Power
    int x; cin>>x; // base number 
    int m; cin>>m; // raise to the power number.
    cout<<"Power of number = "<<power(x, m);

    return 0;


}