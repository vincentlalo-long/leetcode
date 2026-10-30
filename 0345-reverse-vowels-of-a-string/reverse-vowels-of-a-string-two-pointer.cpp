class Solution {
public:
    string reverseVowels(string s) {
        set<char> vowel = {'a','e','i','o','u','A','E','I','O','U'} ;
        int left = 0 , right = s.size() - 1 ; 
        while(left < right) {
            if(!vowel.count(s[left])) left++;
            else if(!vowel.count(s[right])) right--;
            else {
                char temp = s[right] ;
                s[right] = s[left] ; 
                s[left] = temp ;
                left++;
                right--;
            }
        }
        return s;
    }
};