#include<iostream>
#include<vector>
using namespace std;

// TC - O(N^2).

void insertionSort(vector<int> &v, int n){
    for(int i=1; i<n-1; i++){
        int current = v[i];
        int j = i-1;

        while(j>=0 && v[j] > current){
            v[j+1] = v[j];
            j--;
        }

        v[j+1] = current;
    }
    return;
}

int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    insertionSort(v, n);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}