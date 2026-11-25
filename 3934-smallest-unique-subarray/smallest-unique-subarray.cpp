class Solution {
    typedef unsigned long long u64;
    static const u64 MOD = (1ULL << 61) - 1;

    // Nhân hai số modulo 2^61 - 1
    static u64 mulmod(u64 a, u64 b) {
        __uint128_t c = (__uint128_t)a * b;
        u64 lo = (u64)(c & MOD);   // 61 bit thấp
        u64 hi = (u64)(c >> 61);   // phần còn lại
        u64 r = lo + hi;           // 2^61 ≡ 1 (mod M)
        if (r >= MOD) r -= MOD;
        if (r >= MOD) r -= MOD;
        return r;
    }

public:
    int smallestUniqueSubarray(vector<int>& nums) {
        int n = nums.size();

        mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
        u64 B = rng() % (MOD - 1000) + 500;

        vector<u64> pw(n + 1), P(n + 1, 0);
        pw[0] = 1;
        for (int i = 0; i < n; i++) {
            pw[i + 1] = mulmod(pw[i], B);
            u64 x = (u64)((long long)nums[i] + (1LL << 31)) + 1;
            P[i + 1] = (mulmod(P[i], B) + x) % MOD;
        }

        auto feasible = [&](int L) -> bool {
            int m = n - L + 1;
            vector<u64> h(m);
            for (int i = 0; i < m; i++) {
                u64 sub = mulmod(P[i], pw[L]);
                h[i] = (P[i + L] + MOD - sub) % MOD;
            }
            sort(h.begin(), h.end());
            for (int i = 0; i < m;) {
                int j = i;
                while (j < m && h[j] == h[i]) j++;
                if (j - i == 1) return true;
                i = j;
            }
            return false;
        };

        int lo = 1, hi = n;
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (feasible(mid)) hi = mid;
            else lo = mid + 1;
        }
        return lo;
    }
};