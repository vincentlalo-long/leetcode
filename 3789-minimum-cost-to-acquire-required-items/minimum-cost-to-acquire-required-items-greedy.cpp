class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long totalCost ; 
        if(costBoth <= (cost1 + cost2)) {
            //cout << "loop1\n" ;
            totalCost = 1ll*costBoth * min(need1 , need2) ;
            if(need1 < need2) {
                totalCost += min(1ll*(need2 - need1) * cost2, 1ll*costBoth*(need2 - need1)) ;
            }
            else totalCost += min (1ll*(need1 - need2) * cost1 , 1ll*costBoth *(need1 - need2)) ; 
        }
        else {
            totalCost = 1ll*cost1 * need1 + 1ll*cost2 * need2 ;
        }
        return totalCost ;
    }
    
};