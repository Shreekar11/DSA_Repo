<<<<<<< HEAD
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits>
using namespace std;

/*

Problem : Number of cows placed at certain position such that the mimimum distance is maximum in the array.

*/

/*
Linear Search  : TC - O((max. - min.) * N ).
                 SC - O(1). 

Approach : Assume if it is possible to place all cows at minimum distance of 1. Now check if it is possible to maximise the it.
           Now check if all cows can be placed at minimum distance of 2. Check if it can be maximise.
           Check for 3 and so on ......
           If at a certain distance where all the cows cannot be placed return.
           Output the previous no. at which it was possible to place all cows with maximum of the minimum distance.

           EX : arr = [0, 3, 4, 7, 9, 10], cows = 4.
                1) Assume the distance between the cows to be 1. And all the cows can be placed at 1, Now check for higher no.
                2) Assume the distance 2. At 2 also all cows can be placed
                3) At 3 also all the cows can be placed
                4) At 4, only 3 cows can be placed. So further for 5 also it will not be possible to place all the cows.

            Therefore the output will be 3. As it the maximum no. at which all the cows can be placed.
*/

bool canBePlaced(vector<int> &v, int n, int cows, int distance){

    int cntCow = 1; // the count of cows to be placed, Initially the first cow is always placed at first position
    int last = v[0]; // position of last cow which is placed
    
    for(int i=1; i<n-1; i++){
        if((v[i] - last) >= distance){
            cntCow++;
            last = v[i];
        }
    }

    if(cntCow >= cows){
        return true;
    }

    return false;

}

/*
Binary Search : TC - O(N log N) + [ O(log N) * O(N) ].  
                SC - O(1).

Approach : In binary search - The approach is same. 

        EX : arr = [0, 3, 4, 7, 10, 9], cows = 4

        the search spcace will be low = 1, high = max. - min.

        search space - [ 1 2 3 4 5 6 7 8 9 10 ]
        Therefore possible at position [ 1 2 3 ] and not possible further.
        Therefore binary search can be applied
*/

int aggressiveCows_BinarySearch(vector<int> &v, int n, int cows){

    sort(v.begin(), v.end());

    int low = 1; int high = v[n-1] - v[0];
    int ans;
    while(low <= high){
        int mid = (low + high)/2;

        if(canBePlaced(v, n, cows, mid)){
            // if the all the cows can be placed, So increase the low to check for maxmimum value
            low = mid + 1;
            // and store the possible ans;
            ans = mid;
        }else{
            high = mid - 1;
        }
    }

    return ans;
}

int aggressiveCows_LinearSearch(vector<int> &v, int n, int cows){

    sort(v.begin(), v.end());

    int ans;

    int lmt = v[n-1] - v[0]; // that is maximum - minimum

    // Assuming the no. of cows to be placed
    for(int i=1; i<=lmt; i++){
        // now check if it is possible to place all the cows at respective ith position
        if(canBePlaced(v, n, cows, i)){
            continue;
        }else{

            // if more cows cannot be placed so output the last position at which the maximum cows can be placed
            ans = i;
            break;
        }
    }

    return ans;

}

int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int e; cin>>e;
        v.push_back(e);
    }

    int cows; cin>>cows;

    int ans = aggressiveCows_BinarySearch(v,n,cows);
    cout << ans << endl;
=======
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits>
using namespace std;

/*

Problem : Number of cows placed at certain position such that the mimimum distance is maximum in the array.

*/

/*
Linear Search  : TC - O((max. - min.) * N ).
                 SC - O(1). 

Approach : Assume if it is possible to place all cows at minimum distance of 1. Now check if it is possible to maximise the it.
           Now check if all cows can be placed at minimum distance of 2. Check if it can be maximise.
           Check for 3 and so on ......
           If at a certain distance where all the cows cannot be placed return.
           Output the previous no. at which it was possible to place all cows with maximum of the minimum distance.

           EX : arr = [0, 3, 4, 7, 9, 10], cows = 4.
                1) Assume the distance between the cows to be 1. And all the cows can be placed at 1, Now check for higher no.
                2) Assume the distance 2. At 2 also all cows can be placed
                3) At 3 also all the cows can be placed
                4) At 4, only 3 cows can be placed. So further for 5 also it will not be possible to place all the cows.

            Therefore the output will be 3. As it the maximum no. at which all the cows can be placed.
*/

bool canBePlaced(vector<int> &v, int n, int cows, int distance){

    int cntCow = 1; // the count of cows to be placed, Initially the first cow is always placed at first position
    int last = v[0]; // position of last cow which is placed
    
    for(int i=1; i<n-1; i++){
        if((v[i] - last) >= distance){
            cntCow++;
            last = v[i];
        }
    }

    if(cntCow >= cows){
        return true;
    }

    return false;

}

/*
Binary Search : TC - O(N log N) + [ O(log N) * O(N) ].  
                SC - O(1).

Approach : In binary search - The approach is same. 

        EX : arr = [0, 3, 4, 7, 10, 9], cows = 4

        the search spcace will be low = 1, high = max. - min.

        search space - [ 1 2 3 4 5 6 7 8 9 10 ]
        Therefore possible at position [ 1 2 3 ] and not possible further.
        Therefore binary search can be applied
*/

int aggressiveCows_BinarySearch(vector<int> &v, int n, int cows){

    sort(v.begin(), v.end());

    int low = 1; int high = v[n-1] - v[0];
    int ans;
    while(low <= high){
        int mid = (low + high)/2;

        if(canBePlaced(v, n, cows, mid)){
            // if the all the cows can be placed, So increase the low to check for maxmimum value
            low = mid + 1;
            // and store the possible ans;
            ans = mid;
        }else{
            high = mid - 1;
        }
    }

    return ans;
}

int aggressiveCows_LinearSearch(vector<int> &v, int n, int cows){

    sort(v.begin(), v.end());

    int ans;

    int lmt = v[n-1] - v[0]; // that is maximum - minimum

    // Assuming the no. of cows to be placed
    for(int i=1; i<=lmt; i++){
        // now check if it is possible to place all the cows at respective ith position
        if(canBePlaced(v, n, cows, i)){
            continue;
        }else{

            // if more cows cannot be placed so output the last position at which the maximum cows can be placed
            ans = i;
            break;
        }
    }

    return ans;

}

int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int e; cin>>e;
        v.push_back(e);
    }

    int cows; cin>>cows;

    int ans = aggressiveCows_BinarySearch(v,n,cows);
    cout << ans << endl;
>>>>>>> e3122a25e58fa3cbcd50d5e509a94659125a93e9
}