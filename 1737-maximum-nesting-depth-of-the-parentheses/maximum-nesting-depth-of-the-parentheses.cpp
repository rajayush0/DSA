class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int ptr2=0;
        int count = 0;
        int max = 0;
        while(ptr2<n){
            if(s[ptr2]=='('){
             count++;
             if(count>max){
                max = count;
             }
            }
            else if (s[ptr2]==')') count--;

            ptr2++;
        }
        return max;
        
    }
};