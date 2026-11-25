class Solution {
public:
    vector<int> tempArr;
    vector<int> nums ;
    int result = 0;
    void Try(int k) {

        if(k == nums.size()){
            int add = std::accumulate(tempArr.begin(), tempArr.end(), 0, std::bit_xor<int>());
            result += add ;
            return ;
        }   
        tempArr.push_back(nums[k]);
    
        Try(k+1);
        tempArr.pop_back();
        Try(k+1);

    }
    int subsetXORSum(vector<int>& nums) {
        this->nums = nums;
        Try(0);
        return result;
    }
};