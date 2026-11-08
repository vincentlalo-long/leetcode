// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long left = 0 , right = (long long)n + 1  ;
        while(left < right) {
            int mid = left + (right - left)/2 ;
            if(! isBadVersion(mid)) {
                left = mid + 1 ; 
            }
            else {
                right = mid ; 
            }
        }
        return left ; 
    }
};