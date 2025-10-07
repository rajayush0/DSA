class Solution {
public:
    int maxDepth(string s) {
        string ans = "";
        int n = s.size();
        int ptr1 =0;
        int ptr2=0;
        int open = 0;
        int max = 0;
        while(ptr2<n){
            if(s[ptr2]=='('){
             open++;
             if(open>max){
                max = open;
             }
            }
            else if (s[ptr2]==')') open--;

            ptr2++;
        }
        return max;
        
    }
};