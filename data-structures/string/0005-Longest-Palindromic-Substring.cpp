/*
Link : https://leetcode.com/problems/longest-palindromic-substring/?envType=problem-list-v2&envId=two-pointers
Tags: String, Two-Pointer
*/

/*
Time Complexity : T(n) = n x O(n) = O(n^2)
Space Complexity : S(n) = O(1)
*/
class Solution
{
public:
    string longestPalindrome(string s)
    {
        int start = 0;
        int maxLen = 1;
        auto expand = [&](int left, int right)
        {
            while (left >= 0 && right < s.length() && s[left] == s[right])
            {
                if (right - left + 1 > maxLen)
                {
                    start = left;
                    maxLen = right - left + 1;
                }
                left--;
                right++;
            }
        };
        for (int i = 0; i < s.length(); i++)
        {
            expand(i, i);
            expand(i, i + 1);
        }
        return s.substr(start, maxLen);
    }
};
