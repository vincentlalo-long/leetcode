class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        vector<int> prefixSum(nums.size() + 1 , 0 ) ;
        for(int i = 1 ; i <= nums.size() ; i++){
            prefixSum[i] = prefixSum[i-1] + nums[i-1] ;
        }
        int ans = INT_MAX ; 
        int found  = 0 ; 
        for(int k =  l ; k <= r ; k++){
            for(int i = 0 ; i <= nums.size() - k ; i++){
                int check = prefixSum[i+k] - prefixSum[i] ;
                if(check > 0){
                    ans = min (ans , check) ;
                    found = 1 ; 
                    //cout << ans << " " ;
                }
            }
        }
        return (found) ? ans : -1 ;
    }
};