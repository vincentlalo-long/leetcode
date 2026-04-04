/*
Link : https://leetcode.com/problems/remove-duplicates-from-sorted-array/?envType=problem-list-v2&envId=two-pointers
Tags: Array, Two-Pointer
*/

/*
Time complexity : T(n) = O(n)
Space complexity : S(N) = O(1)
*/
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.empty())
            return 0;

        int j = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[j])
            {
                j++;
                nums[j] = nums[i];
            }
        }
        return j + 1;
    }
};
