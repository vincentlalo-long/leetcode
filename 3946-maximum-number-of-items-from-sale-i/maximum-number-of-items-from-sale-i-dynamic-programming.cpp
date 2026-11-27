class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int count = 0 ;
        int currentBudget = 0 ;
        vector<int> numDivisor(items.size(),0);
        int pMin = INT_MAX ;
        for(int i = 0 ; i < items.size();i++){
            for(int j = 0 ; j < items.size() ;j++){
                if(i != j && (items[j][0] % items[i][0] == 0)){
                    numDivisor[i]++;
                }
            }
        }
        for(int i = 0 ; i < items.size() ;i++){
            pMin = min(pMin , items[i][1]);
        }
        vector<int> dp(budget+1,0);
        for(int i = 0  ; i < items.size() ;i++){
            int p = items[i][1];
            for(int b = budget ; b >= p ; b--){
                dp[b] = max (dp[b], dp[b - items[i][1]] + numDivisor[i] + 1);
            }
        }
        for(int b = pMin ; b <= budget ; b++){
            count = max(count , dp[b] + (budget-b)/pMin);
        }
        return count ;
    }
};