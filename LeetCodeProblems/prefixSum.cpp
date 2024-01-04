#include<bits/stdc++.h>
#include<vector>
using namespace std;

// Ex. - arr = {1,3,5}
int oddCountArray(vector<int> &v){
    // initialising sum=0 to find the sum of array
    int sum=0;
    // initialising oddCount=0 to find the no. of odd no.s in array
    int oddCount=0;

    // loop for iterating in array
    for(int i=0; i<v.size(); i++){

        // checking condition if element is odd and incrementing value by oddCount ++
        if(v[i]%2 != 0){
            // so the odd sub-array are - {1}, {3}, {5}
            oddCount++;
            // thus oddCount = 3
        }
    }
    // Now also dividing the sub-array in sum of consecutive and total sum

    // loop for calculating sum of array
    for(int i=0; i<v.size(); i++){
        sum += v[i];
        // sum  = 9 - {1,3,5}
        // thus sum of array is odd so {1,3,5} will also be a sub-array
    }
    // now checking if the sum of array is odd then incrementing value by oddCount ++
    if(sum%2 != 0){
        oddCount++;
        // oddCount = 4
    }

    /* checking for every consecutive element in array if the sum is odd
       then it will be considered as another sub-array. */
    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            if((v[i] + v[j])%2 != 0){
                oddCount++;
                // thus oddCount = 4
            }
        }
    }
    return oddCount;  // output = 4
}
int main(){
    int size;
    cin>>size;
    vector<int> v;
    for(int i=0; i<size; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    int ans = oddCountArray(v);

    cout<<"No. of odd count = "<<ans<<endl;

     return 0;
}