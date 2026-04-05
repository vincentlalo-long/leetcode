/*
Link : https://leetcode.com/problems/contains-duplicate-ii/description/?envType=problem-list-v2&envId=sliding-window
*/

/*
Tag : array , hashtable , sliding window
*/

/* sliding window
Time complexity : O(n)
Space complexity : O(k)
*/
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_set<int> window;
        for (int i = 0; i < nums.size(); i++)
        {
            if (window.count(nums[i]))
                return true;
            window.insert(nums[i]);
            if (window.size() > k)
            {
                window.erase(nums[i - k]);
            }
        }
        return false;
    }
};

/* Brute force
Time complexity : O(nk)
Space complexity : O(1)
*/
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            int j = i + 1;
            for (int j = i + 1; j <= i + k && j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                    return true;
            }
        }
        return false;
    }
};

/* Hash Table
Time complexity : O(n)
Space complexity : O(n)
*/

class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            if (map.count(nums[i]))
            {
                if (i - map[nums[i]] <= k)
                {
                    return true;
                }
            }
            map[nums[i]] = i;
        }
        return false;
    }
};