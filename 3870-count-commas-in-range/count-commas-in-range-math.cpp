class Solution {
public:
    int countCommas(int n) {
        int count = 0 ; 
        for(int p = 1000 ; p <= n ; p *=1000){
            count += n - p + 1 ;
        }
        return count ;
    }
};