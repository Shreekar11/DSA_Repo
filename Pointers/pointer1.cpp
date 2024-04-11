<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=10;
    float y=3.14;

    // '&' is address-of operator to find the address of element
    cout<<&x<<endl;
    cout<<&y<<endl;

    // Initialising a special variable pointer to store 
    // address of a data type.
    // *ptr is used to store the address of variable.
    int *ptr = &x; 
    float *ptr2 = &y;

    cout<<"Address of x integer data type - "<<ptr<<endl;
    cout<<"Address of y floating data type - "<<ptr2<<endl;
    
    // '*' is a dereference operator.
    // '*' operator is also used for declearation of the value 
    // persent in the address.

    cout<<"Value present at the address ptr - "<< *ptr<<endl;
    cout<<"Value present at the address ptr2 - "<< *ptr2<<endl;

    // Updating value of x and thus the address of x remains same
    // just the value inside the address is changed.
    x=18;
    cout<<"New value of x - "<<x<<endl;
    cout<<"New value of x stored in ptr is 18 instead of 10 - "<<*ptr<<endl;
     
    // *ptr is the value stored in the address so we can change it
    // and thus the value of x will be changed because x is the same bucket.
    // bucket where the value is stored.
    *ptr = 50;
    cout<<"New value of x in the bucket - "<<x<<endl;


    return 0;
=======
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=10;
    float y=3.14;

    // '&' is address-of operator to find the address of element
    cout<<&x<<endl;
    cout<<&y<<endl;

    // Initialising a special variable pointer to store 
    // address of a data type.
    // *ptr is used to store the address of variable.
    int *ptr = &x; 
    float *ptr2 = &y;

    cout<<"Address of x integer data type - "<<ptr<<endl;
    cout<<"Address of y floating data type - "<<ptr2<<endl;
    
    // '*' is a dereference operator.
    // '*' operator is also used for declearation of the value 
    // persent in the address.

    cout<<"Value present at the address ptr - "<< *ptr<<endl;
    cout<<"Value present at the address ptr2 - "<< *ptr2<<endl;

    // Updating value of x and thus the address of x remains same
    // just the value inside the address is changed.
    x=18;
    cout<<"New value of x - "<<x<<endl;
    cout<<"New value of x stored in ptr is 18 instead of 10 - "<<*ptr<<endl;
     
    // *ptr is the value stored in the address so we can change it
    // and thus the value of x will be changed because x is the same bucket.
    // bucket where the value is stored.
    *ptr = 50;
    cout<<"New value of x in the bucket - "<<x<<endl;


    return 0;
>>>>>>> e3122a25e58fa3cbcd50d5e509a94659125a93e9
}