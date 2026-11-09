
class Solution {
private:
    struct Node {
        long long cnt = 0;
        long long sum = 0;
    };

    string s;
    Node dp[7][11][11][2][2];
    bool vis[7][11][11][2][2];

    Node solve(int pos, int prev2, int prev1,
               int tight, int started) {

        if (pos == (int)s.size()) {
            return {1, 0};
        }

        if (vis[pos][prev2][prev1][tight][started]) {
            return dp[pos][prev2][prev1][tight][started];
        }

        vis[pos][prev2][prev1][tight][started] = true;

        Node res;

        int limit = tight ? s[pos] - '0' : 9;

        for (int d = 0; d <= limit; d++) {
            int ntight = tight && (d == limit);

            if (!started && d == 0) {
                Node nxt = solve(pos + 1, 10, 10,
                                 ntight, 0);

                res.cnt += nxt.cnt;
                res.sum += nxt.sum;
            }
            else if (!started) {
                Node nxt = solve(pos + 1, 10, d,
                                 ntight, 1);

                res.cnt += nxt.cnt;
                res.sum += nxt.sum;
            }
            else {
                int inc = 0;

                if (prev2 != 10) {
                    if ((prev1 > prev2 && prev1 > d) ||
                        (prev1 < prev2 && prev1 < d)) {
                        inc = 1;
                    }
                }

                Node nxt = solve(pos + 1, prev1, d,
                                 ntight, 1);

                res.cnt += nxt.cnt;
                res.sum += nxt.sum + inc * nxt.cnt;
            }
        }

        return dp[pos][prev2][prev1][tight][started] = res;
    }

    int F(int n) {
        if (n <= 0) return 0;

        s = to_string(n);
        memset(vis, 0, sizeof(vis));

        return solve(0, 10, 10, 1, 0).sum;
    }

public:
    int totalWaviness(int num1, int num2) {
        return F(num2) - F(num1 - 1);
    }
};
