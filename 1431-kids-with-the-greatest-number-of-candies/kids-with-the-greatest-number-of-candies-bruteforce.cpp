class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res (candies.size() , false) ; 
        int maxCandies = 0 ; 
        for(auto& x : candies) maxCandies = max(x , maxCandies) ;
        for(int i = 0 ; i < candies.size() ; i++) {
            if(candies[i] + extraCandies >= maxCandies) res[i] = true ; 
        }
        return res ; 
    }
};