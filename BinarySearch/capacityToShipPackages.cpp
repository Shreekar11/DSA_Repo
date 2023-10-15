#include<bits/stdc++.h>
using namespace std;

/*

Problem : Determine the least or minimum capacity required to ship all the packages within D days. 

Linear Search : TC - O(N^2).
                SC - O(1).

Approach : The optimal search space will be to start from the maximum weight present in the array till the sum of the weights.
           Sum will be the maximum capacity which will ship all packages in 1 day.

           Now traverse thru the possible capacity i.e mx -> sum. We need to find the days required to load all the weights within 
           the minimum capacity In the 'daysRequired' function which returns the days required to load all the weights. 
           If the days is less than the D days so it is a possible answer.
        
*/

int daysRequired(vector<int> &weights, int n, int D, int capacity){
    int days = 1;
    int load = 0;

    for(int i=0; i<n; i++){
        if(load + weights[i] >= capacity){
            days++;
            load = weights[i];
        }else{
            load += weights[i];
        }
    }

    return days;
}

/*

Binary Search : TC - O(log N) * O(log N) = O(N log N).
                SC - O(1).

Approach : In binary search the search space or the minimum capacity is between mx - sum
           The 'daysRequired' function will give the days required to load the weights with given capacity
           mid is the capacity. If the days required for the respective capacity is is than the D days 
           then it can be a possible capacity. So we need minmium therefore we'll do 'high = mid - 1'.
           And opposite if the days required is more than the D days.

*/

int capacityToShipPackages_BinarySearch(vector<int> &weights, int n, int D){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += weights[i];
    }

    int low = *max_element(weights.begin(), weights.end()); 
    int high = sum;
    int ans;

    while(low <= high){
        int mid = (low + high)/2;

        int days = daysRequired(weights, n, D, mid);

        if(days <= D){
            ans = mid; 
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }

    return ans;

}

int capacityToShipPackages_LinearSearch(vector<int> &weights, int n, int D){

    int mx = *max_element(weights.begin(), weights.end());
    int sum= 0;
    for(int i=0; i<n; i++){
        sum += weights[i];
    }

    for(int i=mx, i< sum; i++){
        int res = daysRequired(weights,n,D,i);

        if(res <= D){
            return res;
        }
    }

    return -1;

}

int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int e; cin>>e;
        v.push_back(e);
    }

    int D; cin>>D;

    int ans = capacityToShipPackages_BinarySearch(v,n,D);
    cout << ans << endl;
}