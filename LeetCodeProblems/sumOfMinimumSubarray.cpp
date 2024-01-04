const int MOD = 1e9+7;

class Solution {
public:
    int sumSubarrayMins(vector<int>& a) {

        int n = a.size();
        int ans = 0;
        for(auto it : a){
            ans += it;
        }

        for(int i=0; i<n-1; i++){
            int mn = a[i];
            int j = i+1;
            while(j < n){
                mn = min(mn, a[j]);
                ans += mn;	
                ans %= MOD;		
                j++;
            }
        }

        int res = ans % MOD;
        
        return res;
    }

};