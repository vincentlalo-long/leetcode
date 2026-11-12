class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int numInc = 1 , numDcr = 1 ; 
        int result = 1 ; 
        for(int i = 1 ; i < nums.size() ; i++){
            int check = nums[i] - nums[i-1] ;
            if (check > 0 ) {
                numInc++;
                numDcr = 1 ;
            }
            else if (check < 0) {
                numInc = 1 ; 
                numDcr++ ; 
            }
            else {
                numInc = 1 ; 
                numDcr = 1 ;
            }
            result = max(result , max(numInc , numDcr)) ; 
        }
        return result ; 
    }
};