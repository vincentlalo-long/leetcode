class Solution {
public:
    bool isSubsequence(string s, string t) {
        int pt1 = 0 , pt2 = 0 ; 
        int lenS = s.size();
        int lenT = t.size() ;
        while(pt1 < lenS && pt2 < lenT) {
            if(s[pt1] == t[pt2]) {
                pt1++;    
            }
            pt2++;
        }
        return pt1 == lenS ; 
    }
};