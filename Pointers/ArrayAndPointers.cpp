<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3] = {15,12,5};
    int n=3; // size of array

    // 'arr' name itself stores the address of the 0th index of the array
    // therefore arr name is type of pointer which stores address
    int *ptr = &arr[0];

    cout<<ptr<<" "<<arr<<endl;
    cout<<(ptr + 1)<<" "<<(arr + 1)<<endl;
    cout<<*(ptr + 1)<<" "<<*(arr + 1)<<endl;


    for(int i=0; i<n; i++){
        cout<<*(arr + i)<<" ";
    }

    
=======
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3] = {15,12,5};
    int n=3; // size of array

    // 'arr' name itself stores the address of the 0th index of the array
    // therefore arr name is type of pointer which stores address
    int *ptr = &arr[0];

    cout<<ptr<<" "<<arr<<endl;
    cout<<(ptr + 1)<<" "<<(arr + 1)<<endl;
    cout<<*(ptr + 1)<<" "<<*(arr + 1)<<endl;


    for(int i=0; i<n; i++){
        cout<<*(arr + i)<<" ";
    }

    
>>>>>>> e3122a25e58fa3cbcd50d5e509a94659125a93e9
}