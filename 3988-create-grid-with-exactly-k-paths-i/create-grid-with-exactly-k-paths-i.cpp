class Solution {
public:
    vector<string> createGrid(int m, int n, int k) {
        if (m == 1 || n == 1) {
            if (k != 1) return {};
            return vector<string>(m, string(n, '.'));
        }
        if (k <= m) return buildByColumn(m, n, k);
        if (k <= n) {
            vector<string> t = buildByColumn(n, m, k);   
            vector<string> g(m, string(n, '#'));
            for (int i = 0; i < m; i++)
                for (int j = 0; j < n; j++)
                    g[i][j] = t[j][i];                   
            return g;
        }
        if (m == 3 && n == 3 && k == 4)
            return {"..#", "...", "#.."};
        return {};
    }

private:
    vector<string> buildByColumn(int m, int n, int k) {
        vector<string> g(m, string(n, '#'));
        for (int j = 0; j < n; j++) g[0][j] = '.';       
        for (int i = 0; i < m; i++) g[i][n - 1] = '.';   
        for (int i = 1; i <= k - 1; i++)
            g[i][n - 2] = '.';                           
        return g;
    }
};