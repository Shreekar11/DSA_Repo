#include<bits/stdc++.h>
using namespace std;

/*

Problem : To allocate books to m students such that maximum no. of pages allocated to m students should be minimum. 

Linear Search : TC - O(sum-mx) * O(N)
                SC - O(1)

                EX : arr = [25, 46, 28, 49, 24] , m = 4 

Approach : First to determine the minimum no. of pages that can be allocated to m student. i.e maximum no. of the array till the sum of the array.
           i = 49 till i = sum of array.

           Now we need to allocate n books to m students such that maximum pages to the students is minimum
        EX : 1) arr = [{25,46}, 28, 49, 24] -> max. pages = 71.
             2) arr = [25, {46,28}, 49, 24] -> max. pages = 74.
             3) arr = [25, 46, {28,49}, 24] -> max. pages = 77.
             4) arr = [25, 46, 28, {49,24}] -> max. pages = 73.

             So, minimum no. of pages among the books allocation is 71. Therefore Output is 71.


           For linear search traverse thru the search space and check if the no. of pages at which the count of students the books can be allocated is equal to 
           the given m students then it is the minimum no. of pages allocated. 


*/

int canBeAllocated(vector<int> &v, int n, int students, int capacity){
    int studentCnt = 1;
    int books = 0;
    for(int i=0; i<n; i++){

        // if no. of pages of books is greater than capacity then allocate the book to next student else add the books until it exceeds the capacity.
        if((books + v[i]) > capacity){
            studentCnt++;
            books = v[i];
        }else{
            books += v[i];
        }
    }

    return studentCnt;
}

/*

Binary Search : TC - O(log(sum - mx)) * O(N).
                SC - O(1).

Approach : The approach is same but in the search space for the above example it is clear that 71 is the minimum no. after which books can be allocated 
           to m students.
           Thus Binary Search is applied with same approach from search space of maximum - 49 -> Sum - 172
           In this search space from 49 - 70 the books ca be allocated to more than m students and from 71 to 172 
           books can be allocated to students more than equal to m students. Therefore the minimum will be 71.

*/

int bookAllocation_BinarySearch(vector<int> &v, int n, int students){
    int low = *max_element(v.begin(), v.end());
    int high = 0;
    for(int i=0; i<n; i++){
        high += v[i];
    }

    int ans;
    while(low <= high){
        int mid = (low + high)/2;

        if(canBeAllocated(v, n, students, mid) <= students){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }

    return ans;
}

int bookAllocation_LinearSearch(vector<int> &v, int n, int students){

    if(students > n){
        return -1;
    }

    int ans;

    int i = *max_element(v.begin(), v.end());
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += v[i];
    }

    for(; i<sum; i++){
        if(canBeAllocated(v, n, students, i) <= students){
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

    int m; cin>>m;

    int ans = bookAllocation_BinarySearch(v, n, m);
    cout << ans << endl;
}