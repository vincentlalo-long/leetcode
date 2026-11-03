class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size() ;
        int maxG = 0 ; 
        vector<int> prefix(n+1 , 0) ;
        for(int i = 0 ; i < n ; i++){
            prefix[i+1] = prefix[i] + gain[i] ;
            maxG = max(maxG , prefix[i+1]) ;
        }
        return maxG ;
    }
};