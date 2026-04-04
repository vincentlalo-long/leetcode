/*
Link : https://leetcode.com/problems/container-with-most-water/?envType=problem-list-v2&envId=two-pointers
Tags: Array, Two-Pointer
*/

/*
Time Complexity : T(n) = O(n)
Space Complexity : S(n) = O(1)
*/
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left = 0, right = height.size() - 1;
        long long maxRes = 0;

        while (left < right)
        {
            long long area = (long long)(right - left) * min(height[left], height[right]);
            maxRes = max(maxRes, area);

            if (height[left] < height[right])
                left++;
            else
                right--;
        }

        return maxRes;
    }
};
