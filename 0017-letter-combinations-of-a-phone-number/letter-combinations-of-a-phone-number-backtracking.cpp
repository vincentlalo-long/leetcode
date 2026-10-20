class Solution {
private:
    void backtrack(string digits, string current , int index, vector<string>& ans,
               string mapping[]) {
        if (index >= digits.length()) {
            ans.push_back(current);
            return;
        }

        int num = digits[index] - '0';
        string value = mapping[num];

        for (int j = 0; j < value.length(); j++) {
            current.push_back(value[j]);
            backtrack(digits, current , index + 1, ans, mapping);
            current.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.length() == 0) {
            return ans;
        }
        int i = 0;
        string output;
        string mapping[10] = {"",    "",    "abc",  "def", "ghi",
                              "jkl", "mno", "pqrs", "tuv", "wxyz"};
        backtrack(digits, output, i, ans, mapping);
        return ans;
    }
};