<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int squareRoot(int n){
    int ans = 1;
    int low = 1;
    int high = n;

    while(low <= high){
        int mid = (low + high)/2;

        if(mid*mid <= n){
            ans = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return ans;
}

int main(){
    int n; cin>>n;
    int ans = squareRoot(n);
    cout << ans << endl;
=======
#include<bits/stdc++.h>
using namespace std;

int squareRoot(int n){
    int ans = 1;
    int low = 1;
    int high = n;

    while(low <= high){
        int mid = (low + high)/2;

        if(mid*mid <= n){
            ans = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return ans;
}

int main(){
    int n; cin>>n;
    int ans = squareRoot(n);
    cout << ans << endl;
>>>>>>> e3122a25e58fa3cbcd50d5e509a94659125a93e9
}