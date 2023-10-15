#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> v = {1,2,3,4,5,6,7};

    // declaration of an iterator.
    // iterator points to a specific element in the container
    // So using '*' opertor we can fetch the element to which the iterator is pointing
    // It is same as fetching the element from the pointer which stores the address
    vector<int> :: iterator it;

    // points to the beginning of vector
    it = v.begin();
    cout<< *it <<endl;

    // points to the end of the vector
    it = v.end()-1;
    cout<< *it <<endl;

    // 'it' points to the first element of the vector
    for(it = v.begin(); it != v.end(); it++){
        cout<< *it <<" ";
    }

    cout<<endl;
    vector<pair<int, int>> vPair = {{1,2}, {2,3}, {3,4}};
    vector<pair<int, int>> :: iterator iter;

    // here the iterator is pointing towards a pair 
    /* For Ex. -     iter -> {1 , 2}
                (*iter).first = 1. which points to the first element of the pair
                (*iter).second = 2. which points to the second element of the pair    
    */

    for(iter = vPair.begin(); iter != vPair.end(); iter ++){
        cout<< (*iter).first<<" "<< (*iter).second<<endl;
        
        // Another way of writing.
        // cout<< (iter -> first)<< " "<< (iter -> second)<<endl;
    }
    
    return 0;
}