class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int n = s.size();
        int ptr1 = 0;   // start of primitive
        int ptr2 = 0;   // moving pointer
        int open = 0;   // balance counter

        while (ptr2 < n) {
            if (s[ptr2] == '(') open++;
            else open--;

            // Primitive ends when open == 0
            if (open == 0) {
                // Add inner part (exclude outermost '(' and ')')
                ans += s.substr(ptr1 + 1, ptr2 - ptr1 - 1);

                // Move ptr1 to the start of next primitive
                ptr1 = ptr2 + 1;
            }

            // Move ptr2 forward
            ptr2++;
        }

        return ans;
    }
};
