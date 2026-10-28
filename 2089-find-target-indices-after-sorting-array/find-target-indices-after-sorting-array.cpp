class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> result ;
        int n = nums.size();
        //int left = 0  , right = n - 1 ; 
        sort(nums.begin() , nums.end()) ;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] == target) {
                result.push_back(i) ;
            }
        }
        return result ;
    }
};