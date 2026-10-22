class Solution {
public:
    int minOperations(vector<int>& nums) {
        //nums.push_back(nums[0]) ;
        int checkFw = true , checkBw = true ;
        int n = nums.size() ;
        int p = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] == 0 ) {
                p = i ; 
                break ; 
            }
        }
        for(int i = 0 ; i < n ; i++){
            if(nums[(p+i)%n]!=i) checkFw = false ; 
            if(nums[((p-i)%n+n)%n]!=i) checkBw = false;
        }
        int ans = INT_MAX ; 
        if(checkFw) ans = min(p , n-p+2) ;
        if(checkBw) {
            int c = (p+1)%n ; 
            ans = min(ans , min(c , n-c) + 1);
        }
        return (ans == INT_MAX) ? -1 : ans; 
    }
};