class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size() ; 
        int profit = 0 ; 
        int minPrice = prices[0] ; 
        for(int i = 1 ; i < n  ; i++){
            int check = prices[i] - minPrice ; 
            profit = max(profit , check) ; 
            minPrice = min(minPrice , prices[i]) ;
        } 
        return profit ;
    }
};