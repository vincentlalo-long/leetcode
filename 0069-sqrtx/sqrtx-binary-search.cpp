class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x ==1) return x ;
        int left = 1 , right = x/2 , ans = 0 ;
        while(left <= right) {
            int mid = left + (right - left)/2 ;

            long long sq = (long long) mid * mid ;
            if (sq == x) {
                return mid ;
            }
            else if (sq < x) {
                ans = mid ; 
                left = mid + 1 ;
            }
            else {
                right = mid - 1 ;
            }
        }

        return ans ;
    }
};


