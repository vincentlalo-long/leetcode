class Solution {
public:
    bool checkString(string s) {
        //bool ans = true ; 
        int n = s.size() ; 
        for(int i = 0 ; i < n-1 ; i++){
            if(s[i] == 'b') {
                if (s[i+1] == 'a') return false ;
            }
        }
        return true ;
    }
};