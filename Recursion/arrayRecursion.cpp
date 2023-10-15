#include<bits/stdc++.h>
using namespace std;

void funct(int arr[], int n, int i){
    // base case
    if (i == n) return;

    // self work
    cout<< arr[i]<<" ";

    //assumption
    funct(arr, n, i+1);
}

int maxArray(int arr[], int n, int i){
    // base case
    if(i == n-1) return arr[i];

    // assumption ans self work
    return max(arr[i] , maxArray(arr, n, i+1));
}

int sumArray(int arr[], int n, int i){
    // base case
    if(i == n-1) return arr[i];

    //assumption and self work
    return arr[i] + sumArray(arr, n, i+1);
}
int main(){
    int arr[] = {3,10,3,2,5};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int i=0;
    funct(arr, n, i);
    cout<<endl;
    cout<<"Maximum = "<<maxArray(arr, n, i)<<endl;
    cout<<"Sum = "<<sumArray(arr, n, i)<<endl;
}