class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size() ;
        vector<int> left(n+1 , 0) ;
        int sum = 0 ; 
        for(int i = 0 ; i < n ; i++){
            sum += nums[i] ;
            left[i+1] = left[i] + nums[i] ;
        }
        for(int i = 0 ; i < n ; i++){
            int right = sum - left[i] - nums[i] ;
            if (left[i] == right) {
                return i ; 
                break ;
            } 
        }
        return - 1;
    }
};