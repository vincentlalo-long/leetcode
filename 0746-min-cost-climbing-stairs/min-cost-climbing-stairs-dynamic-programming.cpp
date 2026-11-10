class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size() ; 
        vector<int> dp(n+1 , INT_MAX) ; 
        dp[0] = 0 ;
        dp[1] = 0 ;
        for(int i = 2 ; i <= n ; i++){
            for(int j = 1 ; j <=2 ; j++){
                if(i - j >= 0 ) {
                    dp[i] = min(dp[i]  , dp[i-j] + cost[i-j]) ;
                }
            }
        }

        return dp[n] ;
    }
};