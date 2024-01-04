#include<bits/stdc++.h>
#include<vector>
using namespace std;
double findMedianSortedArray(vector<int> &nums1, vector<int> &nums2, vector<int> &mergeArray){
    // initialising iterative term in new array.
    int k=0; 

    // loop for inserting elements in new array from 1st array
    for(int i=0; i<nums1.size(); i++){
        mergeArray[k++] = nums1[i];
    }
    // loop for inserting elememts in new array from 2nd array 
    for(int j=0; j<nums2.size(); j++){
        mergeArray[k++] = nums2[j];
    }

    // sorting the array using sort function
    sort(mergeArray.begin(), mergeArray.end());
    
    // initialising median of new array 
    double median = 0.0;
    // middle term of an array
    int middleTerm = mergeArray.size()/2;

    // if the size of new array is odd then the if condition is satisfied
    if(mergeArray.size()%2 != 0){

        // odd size array will have a single middle term
        median = mergeArray[middleTerm];
    }
    // else condition array is of even size
    else{
        /* even size array will have two middle term 
           and average of both the term is the median */
        int sum = mergeArray[middleTerm]+mergeArray[middleTerm-1];
        double(median) = sum/2.0;
    }
    return median;
}
int main(){
    int m; cin>>m;
    vector<int> nums1;
    for(int i=0; i<m; i++){
        int ele; cin>>ele;
        nums1.push_back(ele);
    }

    int n; cin>>n;
    vector<int> nums2;
    for(int i=0; i<n; i++){
        int ele1; cin>>ele1;
        nums2.push_back(ele1);
    }
    vector<int> mergeArray(m+n);
    double ans = findMedianSortedArray(nums1, nums2, mergeArray);
    cout<<"Merge Array - ";
    for(int i=0; i<mergeArray.size(); i++){
        cout<<mergeArray[i]<<" ";
    }
    cout<<endl;

    cout<<"Median of merged sorted array = "<<ans<<endl;
}
