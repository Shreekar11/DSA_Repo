#include<bits/stdc++.h>
using namespace std;

void pointerArray(int *arr, int n, int k){
    for(int i=1; i<=n; i++){
        if(i == k){
            cout<<*(arr + k);
        }
    }
cout<<endl;
}
int sumArray(int *arr, int n, int* ptr){
    int sum=0;
    for(int i=0; i<n; i++){
        sum += *ptr;
        ptr++;
    }
    return sum;
}
void reverseArray(int *arr, int n){
    for(int i=n-1; i>=0; i--){
        cout<<*(arr + i)<<" ";
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int k = 3;
    pointerArray(arr, n+1, k-1);
    int *ptr = arr;
    int ans = sumArray(arr, n, ptr);
    cout<<"Sum = "<<ans<<endl;
    cout<<"Reverse Array - ";
    reverseArray(arr, n);
    cout<<endl;

    return 0;
}