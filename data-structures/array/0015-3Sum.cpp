/*
Link : https://leetcode.com/problems/3sum/?envType=problem-list-v2&envId=two-pointers
Tags: Array, Two-Pointer
*/

/*
Time complexity : T(n) = O(n^2)
Space complexity : S(n) = O(n^2) (output counted - O(1)  if output not counted)
*/
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> results;
        for (int i = 0; i < nums.size() - 2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right)
            {
                if (nums[left] + nums[i] + nums[right] == 0)
                {
                    results.push_back({nums[left], nums[i], nums[right]});
                    while (left < right && nums[left] == nums[left + 1])
                        left++;
                    while (left < right && nums[right] == nums[right - 1])
                        right--;
                    left++;
                    right--;
                }
                else if (nums[left] + nums[i] + nums[right] < 0)
                    left++;
                else
                    right--;
            }
        }
        return results;
    }
};
