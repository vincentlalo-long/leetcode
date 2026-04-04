
/*
Link : https://leetcode.com/problems/merge-sorted-array/?envType=problem-list-v2&envId=two-pointers
*/

// Solution 1 :
/*
Time Complexity : T(n) = O((m+n)log(m+n))
Space Complexity : S(n) = O(1)
*/
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int startArray = 0;
        int endArray1 = m - 1;
        for (int i = m; i < m + n; i++)
        {
            nums1.pop_back();
        }
        for (int i = 0; i < n; i++)
        {
            nums1.push_back(nums2.at(i));
        }
        sort(nums1.begin(), nums1.end());
    }
};

// Solution 2 :
/*
Time Complexity : T(n) = O(m+n)
Space Complexity : S(n) = O(1)
*/
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int endArray1 = m - 1;
        int endArray2 = n - 1;
        int endArray = m + n - 1;

        while (endArray1 >= 0 && endArray2 >= 0)
        {
            if (nums1.at(endArray1) > nums2.at(endArray2))
            {
                nums1.at(endArray--) = nums1.at(endArray1--);
            }
            else
            {
                nums1.at(endArray--) = nums2.at(endArray2--);
            }
        }
        while (endArray2 >= 0)
        {
            nums1.at(endArray--) = nums2.at(endArray2--);
        }