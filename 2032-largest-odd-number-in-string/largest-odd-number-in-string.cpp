class Solution {
public:
    string largestOddNumber(string num) {
        if(num.back()%2==1)return num ;
        int n = num.size();
        int i = n-1;
        while(i>=0){
            int currn = num[i];
            if(currn % 2 == 1) return num.substr(0,i+1);
            i--;
        }
        return "";
        
    }
};