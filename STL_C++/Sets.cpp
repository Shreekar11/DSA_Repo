#include<bits/stdc++.h>
using namespace std;

/* Set is a type of container which stores data in a key
   and prints in a sorted order. Set is used to print the 
   unique elements. 
   for ex.  nums = [1,2,2,3,5]
            o/p = [1,2,3,5]

   Set type - 
   1) Set - i.e  set <data_type> set_name
   2) Unordered Set - i.e  unordered_set <data_type> set_name
   3) Multiset - i.e  multiset <data_type> set_name
   */

int main(){
    int n = 5;
    vector<int> nums = {1,2,2,3,5};
    set<int> s;
    for(int i=0; i<n; i++){

        s.insert(nums[i]);
    }
    // auto it = s.find(target);

    // if(it != s.end()){
    //     s.erase(it);
    // }
    // else{
    //     cout<<"No Value"<<endl;
    // }

    for(auto i:s){
        cout<<i<<" "; // Output - [1,3,5] 
    }

    return 0;
}