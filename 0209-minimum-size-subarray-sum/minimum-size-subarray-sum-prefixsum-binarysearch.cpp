class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size() ;
        int minLength = INT_MAX ;
        vector<int> prefix(n+1 , 0 ) ;
        for(int i = 1 ; i <= n ; i++){
            prefix[i] = prefix[i-1] + nums[i-1] ;
        }
        for(int r = 1 ; r <= n ; r++){
            int need = prefix[r] - target ; 
            auto it = upper_bound(prefix.begin() , prefix.begin() + r , need) ;
            if(it != prefix.begin()) {
                int l = it - prefix.begin() - 1 ;
                minLength = min(minLength , r - l ) ;
            } 
        }
        return  (minLength == INT_MAX)? 0 : minLength ;
    }
};