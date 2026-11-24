class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        vector<vector<long long>> primes(n);
        for (int i = 0; i < n; i++)
            primes[i] = factorize(nums[i]);

        unordered_map<long long, int> cnt;
        int bad = 0;                 
        int left = 0, best = 0;

        for (int right = 0; right < n; right++) {
            for (long long p : primes[right]) {
                if (++cnt[p] == 2) bad++;
            }
            while (right - left + 1 > 2 && bad > 0) {
                for (long long p : primes[left]) {
                    if (cnt[p]-- == 2) bad--;
                }
                left++;
            }
            best = max(best, right - left + 1);
        }
        return best;
    }

private:
    vector<long long> factorize(long long x) {
        vector<long long> res;
        for (long long p = 2; p * p <= x; p++) {
            if (x % p == 0) {
                res.push_back(p);
                while (x % p == 0) x /= p;
            }
        }
        if (x > 1) res.push_back(x);
        return res;
    }
};