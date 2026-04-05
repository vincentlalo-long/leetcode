/*
Link : https://leetcode.com/problems/defuse-the-bomb/description/?envType=problem-list-v2&envId=sliding-window
*/

/*
Tag : mid level , array , sliding window
Diff : Easy
*/

/*
Time complexity : O(n+k)
Space complexity : O(n)
*/
// Sliding window :
class Solution
{
public:
    vector<int> decrypt(vector<int> &code, int k)
    {
        vector<int> result;
        int sum = 0;
        int n = code.size();
        if (k == 0)
        {
            for (int i = 0; i < n; i++)
            {
                result.push_back(0);
            }
        }
        else if (k > 0)
        {
            for (int i = 1; i <= k; i++)
            {
                sum += code.at(i % n);
            }
            for (int i = 0; i < n; i++)
            {
                result.push_back(sum);
                sum -= code[(i + 1) % n];
                sum += code[(i + 1 + k) % n];
            }
        }
        else
        {
            k = -k;
            for (int i = 1; i <= k; i++)
            {
                sum += code.at((n - i) % n);
            }
            for (int i = 0; i < code.size(); i++)
            {
                result.push_back(sum);
                sum -= code[(i - k + n) % n];
                sum += code[i % n];
            }
        }
        return result;
    }
};
