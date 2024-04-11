<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

void twoUniqueElements(int n, int a[]){
    int xorVal=0;
    for(int i=0; i<n; i++){
        xorVal ^= a[i];
    }
    // Now to find the index of the set bit or difference in bit index
    int cnt=0;
    while(xorVal){
        if(xorVal & 1){
            break;
        }
        cnt++;
        xorVal = xorVal >> 1;
    }
    
    int xor1=0, xor2=0;
    for(int i=0; i<n; i++){
        if(a[i] & (1 << cnt)){  // to check if the bit is set or not 
            xor1 ^= a[i];
        }
        else{
            xor2 ^= a[i];
        }
    }
    cout<<xor1<<" "<<xor2<<endl;
}

bool checkPowerOfTwo(int n){
    int cnt=0;
    while(n != 0){
        if(n & 1){
            cnt++;
        }
        n = n >> 1;
    }
    bool flag = false;
    if(cnt == 1){
        flag = true;
    }
    return flag;
}

int main(){
    int n; cin>>n;
    // int a[n];
    // for(int i=0; i<n; i++){
    //     cin>>a[i];
    // }
    // twoUniqueElements(n, a); 
    if(checkPowerOfTwo(n)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
=======
#include<bits/stdc++.h>
using namespace std;

void twoUniqueElements(int n, int a[]){
    int xorVal=0;
    for(int i=0; i<n; i++){
        xorVal ^= a[i];
    }
    // Now to find the index of the set bit or difference in bit index
    int cnt=0;
    while(xorVal){
        if(xorVal & 1){
            break;
        }
        cnt++;
        xorVal = xorVal >> 1;
    }
    
    int xor1=0, xor2=0;
    for(int i=0; i<n; i++){
        if(a[i] & (1 << cnt)){  // to check if the bit is set or not 
            xor1 ^= a[i];
        }
        else{
            xor2 ^= a[i];
        }
    }
    cout<<xor1<<" "<<xor2<<endl;
}

bool checkPowerOfTwo(int n){
    int cnt=0;
    while(n != 0){
        if(n & 1){
            cnt++;
        }
        n = n >> 1;
    }
    bool flag = false;
    if(cnt == 1){
        flag = true;
    }
    return flag;
}

int main(){
    int n; cin>>n;
    // int a[n];
    // for(int i=0; i<n; i++){
    //     cin>>a[i];
    // }
    // twoUniqueElements(n, a); 
    if(checkPowerOfTwo(n)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
>>>>>>> e3122a25e58fa3cbcd50d5e509a94659125a93e9
}