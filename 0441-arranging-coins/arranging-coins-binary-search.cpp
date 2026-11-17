class Solution {
public:
    int arrangeCoins(int n) {
        long long left = 0  , right = (long long) n + 1 ;
        while(left < right){
            long long mid = left +(right - left)/2 ;
            long long check = mid * (mid + 1) /2 ;
            if (check <= n ){
                left = mid + 1 ; 
            } 
            else {
                right = mid  ; 
            }
        }
        return left - 1 ;
    }
};