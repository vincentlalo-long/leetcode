class Solution {
public:
    int minCost(int n) {
        vector<int> dp(n+1) ;
        dp[1] = 0 ;
        if (n<2) return 0; 
        dp[2] = 1 ;
        for(int i = 3 ; i <= n ;i++){
            dp[i] = i - 1 + dp[i-1] ;
        }
        return dp[n]; 
    }
};