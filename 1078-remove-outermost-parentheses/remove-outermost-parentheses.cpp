class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        int count1 = 0, count2 = 0;
        int ptr1 = 0;
        string ans = "";

        for (int i = 0; i < n; i++) {
            if (s[i] == '(') count1++;
            else count2++;

            if (count1 == count2) {
                // primitive substring found: from ptr1 to i
                ans += s.substr(ptr1 + 1, i - ptr1 - 1); // remove outermost ()
                ptr1 = i + 1; // start new primitive
            }
        }
        return ans;
    }
};
