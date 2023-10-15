#include<bits/stdc++.h>
#define ff first
#define ss second
#define pb push_back
using namespace std;

// TC - O(N^2).

void selectionSort(int v[], int n){
    for(int i=0; i<n-1; i++){
        int mini = i;

        for(int j=i; j<n; j++){
            if(v[j] < v[mini]){
                mini = j;
            } 
        }

        swap(v[mini], v[i]);
    }

    return;
}

int main(){
    int n; cin>>n;
    int v[n];
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    selectionSort(v, n);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}