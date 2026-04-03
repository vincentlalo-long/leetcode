/*
Link  : https://leetcode.com/problems/longest-harmonious-subsequence/description/?envType=problem-list-v2&envId=sliding-window
*/
// Solution 1 : sliding + sort
/*
Time complexity : T(n) = O(nlogn)
Space complexity : S(n) =  O(logn) (including recursion stack)
S(n) = O(1)
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

// Solution 2 : Hash :
/*
Time complexity : O(n)
Space Complexity : O(n)
*/
class Solution
{
public:
    int findLHS(vector<int> &nums)
    {
        unordered_map<int, int> freqNumber = {};
        int res = 0;
        for (int num : nums)
        {
            freqNumber[num]++;
        }

        for (auto &pair : freqNumber)
        {
            if (freqNumber.find(pair.first + 1) != freqNumber.end())
            {
                res = std::max(res, pair.second + freqNumber[pair.first + 1]); // các số x và x+1 là thành 1 dãy thỏa mãn
            }
        }

        return res;
    }
};