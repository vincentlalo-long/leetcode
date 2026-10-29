class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int wp1 = 0 ; 
        int wp2 = 0 ; 
        int n1 = word1.size() ; 
        int n2 = word2.size() ; 
        //int total = n1 + n2 ;
        string result; 
        int i = 0 ;
        while(wp1 < n1 || wp2 < n2){
            if(wp1 < n1) {
                result += word1[wp1++] ;
            }
            if(wp2 < n2){
                result += word2[wp2++] ;
            }
          ;

        }
        return result ;
    }
};