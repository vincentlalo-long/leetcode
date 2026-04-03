/*
Link  : https://leetcode.com/problems/longest-harmonious-subsequence/description/?envType=problem-list-v2&envId=sliding-window
*/

/*
Time complexity : T(n) = O(nlogn)
Space complexity : S(n) =  O(logn)
*/

class Solution
{
public:
    int findLHS(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int maxSub = 0;
        int startPoint = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums.at(i) - nums.at(startPoint) > 1)
            {
                startPoint++;
                i = startPoint + 1;
            }
            if ((nums.at(i) - nums.at(startPoint)) == 1)
            {
                maxSub = max(maxSub, i - startPoint + 1);
            }
        }
        return maxSub;
    }
};