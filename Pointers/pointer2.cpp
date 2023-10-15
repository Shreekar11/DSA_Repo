#include<bits/stdc++.h>
using namespace std;

void swapNo(int *num1, int *num2){
/* address of x is now stored in num1
   and address of y is now stored in num2 */

   // by dereferencing value stored in address num1 is called 
   // similarly with num2.
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;

}
int main(){
    // swapping with the help of pointers 
    int x; cin>>x;
    int y; cin>>y;

    /* address of num1 is stored in p1 
       and address of num2 is stored in p2 */
    int *p1 = &x;
    int *p2 = &y;

    // p1 and p2 is called in function.
    swapNo(p1, p2);
    cout<<"Swap no. - ";
    cout<<x<<" , "<<y;
    cout<<endl;


    // incrementing and decrementing address
    int a = 20;
    double dec = 9.8;
    // size - 
    cout<<"Size of a = "<<sizeof(a)<<endl;
    cout<<"Size of dec = "<<sizeof(dec)<<endl;

    // storing address
    int *pa = &a;
    double *pdec = &dec;
 
    // incrementing means the address is increased by the size of byte of the data-type.
    // decrementing measn the address is decreased by the size of byte of the data-type.
    cout<<pa<<" "<<(pa + 1)<<endl;
    cout<<pdec<<" "<<(pdec + 1)<<" "<<(pdec + 2)<<endl;

    /* hexadecimal artihmetic - 
    0 1 2 3 4 5 6 7 8 a b c d e f */

    return 0;
}