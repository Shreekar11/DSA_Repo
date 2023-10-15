#include<bits/stdc++.h>
using namespace std;

// TC - O(N logN)

int partition(int v[], int low, int high){

    int pivot = v[high];
    int i = low - 1;
    int j = low;

    for(; j<high; j++){
        if(v[j] < pivot){
            i++;

            swap(v[i], v[j]);
        }
    }

    swap(v[i+1], v[high]);
    return i+1;
}

void quickSort(int v[], int low, int high){

    if(low >= high) return;

    int pIndex = partition(v, low, high);

    quickSort(v, low, pIndex-1);
    quickSort(v, pIndex+1, high);

}

int main(){
    int n; cin>>n;
    int v[n];

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    quickSort(v, 0, n-1);

    for(int i=0; i<n; i++){
        cout << v[i] <<" ";
    }

    return 0;
}