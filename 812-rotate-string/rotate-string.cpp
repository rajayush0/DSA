class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        int m = goal.size();
        if(n != m){
            return false;
        }
        string add = s+s;
        if(add.find(goal) != string::npos){
            return true;
        }
        return false ;
    }
};