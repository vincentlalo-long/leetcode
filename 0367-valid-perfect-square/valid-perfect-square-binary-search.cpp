class Solution {
public:
    bool isPerfectSquare(int num) {
        long long left = 0 , right = (long long)num + 1 ; 
        while(left <= right) {
            long long mid = left + (right - left)/2 ;
            if(mid * mid < num) {
                left = mid + 1 ; 
            }
            else if(mid * mid > num) {
                right = mid - 1 ; 
            } 
            else return mid ;
        }
        return false ;
    }
};