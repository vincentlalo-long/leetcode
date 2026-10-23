class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result ; 
        unordered_set<int> s(nums1.begin() , nums1.end()) ;
        for(int x : nums2){
            if(s.erase(x)){
                result.push_back(x) ; 
            }
        }
        return result; 
    }
};