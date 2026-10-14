class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        stack<int> st;
        int n = x;

        while (n > 0) {
            st.push(n % 10);
            n /= 10;
        }

        n = x;

        while (n > 0) {
            if (n % 10 != st.top()) {
                return false;
            }

            st.pop();
            n /= 10;
        }

        return true;
    }
};
