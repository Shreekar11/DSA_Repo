#include<bits/stdc++.h>
using namespace std;

    int countSet(vector<int> &nums, int m, int k, int mid){
        int cnt = 0, set = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] <= mid){
                cnt++;
                // if(cnt == k){
                //     set++;
                //     cnt = 0;
                // }
            }else{
                set += cnt/k;
                cnt = 0;
            }
        }
        set += cnt/k;

        return set;
    }

    int minDays(vector<int>& nums, int m, int k) {
        int mn = INT_MAX;
        int mx = INT_MIN;
        for(auto it : nums){
            mn = min(mn, it);
            mx = max(mx, it);
        }

        int ans = -1;
        int low = mn, high = mx;
        while(low <= high){
            int mid = (low + high)/2;

            int set = countSet(nums, m, k, mid);

            if(set >= m){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
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
    int m,k;
    cin>>m>>k;

    int ans = minDays(v, m, k);
    cout <<"Ans : "<< ans <<endl;
}