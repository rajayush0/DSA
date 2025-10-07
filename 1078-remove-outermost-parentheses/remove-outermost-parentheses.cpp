class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int n = s.size();
        int start = 0;  // start of primitive
        int end = 0;    // moving pointer
        int open = 0;

        while (end < n) {
            if (s[end] == '(') open++;
            else open--;

            // When open == 0, we found a complete primitive
            if (open == 0) {
                // Add inner part (exclude outermost '(' and ')')
                ans += s.substr(start + 1, end - start - 1);

                // Move start to next primitive
                start = end + 1;
            }

            end++;
        }

        return ans;
    }
};
