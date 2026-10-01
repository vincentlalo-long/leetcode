/*
Complexity : O(n)
Space : O(n)*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //vector<int> result;
        unordered_map<int,int> newMap;
        for(int i=0;i<nums.size();i++){
            newMap[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            if(newMap.find(target-nums[i]) !=newMap.end() && newMap[target-nums[i]]!=i){
                return {newMap[target-nums[i]],i};
            }
        }
        return {} ;    
    }
};