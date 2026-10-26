class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size() ;
        vector<int> left(n,0) ;
        vector<int> right(n,0);
        int res = - 1;
        for(int i = 1 ; i < n ; i++){
            left[i] = left[i-1] + nums[i-1] ;
            right[n-i-1] = right[n-i] + nums[n-i] ;
        }
        for(int i = 0 ; i < n ; i++){
            if (left[i] == right[i]) {
                res = i ; 
                break;
            }
        }
        return res ;
    }
};