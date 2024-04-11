<<<<<<< HEAD
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// TC - O(N^2).

void bubbleSort(vector<int> &a, int n){
    for(int i=0; i<n-1; i++){
        bool flag = false;
        for(int j=0; j<n-i-1; j++){
            if(a[j] > a[j+1]){
                flag = true;
                swap(a[j], a[j+1]);
            }
        }
        if(!flag) break;
    }
    return;
}

int main(){

    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    bubbleSort(a, n);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
=======
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// TC - O(N^2).

void bubbleSort(vector<int> &a, int n){
    for(int i=0; i<n-1; i++){
        bool flag = false;
        for(int j=0; j<n-i-1; j++){
            if(a[j] > a[j+1]){
                flag = true;
                swap(a[j], a[j+1]);
            }
        }
        if(!flag) break;
    }
    return;
}

int main(){

    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    bubbleSort(a, n);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
>>>>>>> e3122a25e58fa3cbcd50d5e509a94659125a93e9
}