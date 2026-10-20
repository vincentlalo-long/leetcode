class Solution {
private:
    void backtrack(int n , int open , int close, string current , 
    vector<string>& result ){
        if(current.length() == 2*n){
            result.push_back(current);
            return ;
        }
        if (open < n ) {
            current.push_back('(') ;
            backtrack(n , open + 1 , close , current , result) ;
            current.pop_back();
        }
        if (close < open) {
            current.push_back(')') ;
            backtrack(n , open , close + 1 , current , result) ; 
            current.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        int open = 0 , close = 0 ;
        string current = "";
        vector<string> result ;
        backtrack(n , open , close , current , result) ;
        return result ; 
    }
};