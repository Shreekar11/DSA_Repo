#include<bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int> &v, int n){
    // initialising carry element to 1
    int carry=1;
    // loop from end of the array as addition is generally done from the right side
    for(int i=n-1; i>=0; i--){
        // if v element != 9 then 1 is added to the element and break out of the loop
        // Ex - 1,2,3 = 123 . output - 1,2,4 = 124
        if(v[i] != 9){
            v[i] += 1;
            break;
        }
        // if v element == 9 then replacing 9 with 0.
        // Ex - 1,2,9 = 129 . outptut - 1,2,0 = 120
        // so next element is 2 therefore the first if condition will be executed 
        // Ex - 1,2,0 = 120 . output = 1,3,0 == 130.
        else{
            int num;
            num = v[i]+1;
            num = num%10;
            v[i] = num;
        }
    }
    // if all array elements are 9.
    // Ex - 9,9,9 = 999. so after loop & if-else execution o/p = 0,0,0.
    // if 1st ele is 0 then 1 is added to the array.
    // arraya is reversed to form the correct o/p.
    // Ex - 0,0,0 = 000. output - 1,0,0,0 = 1000.
    if(v[0] == 0){
        v.push_back(1);

        reverse(v.begin(), v.end());
    }
    return v;
}

int main(){
    vector<int> v;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }
    plusOne(v, n);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}