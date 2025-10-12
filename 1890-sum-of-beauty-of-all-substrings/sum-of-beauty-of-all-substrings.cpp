class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int ans = 0;

        for(int i = 0;i<n ;i++){
            map<char,int> freq ;
            for(int j = i;j<n;j++){
               freq[s[j]]++;

               int maxvalue = 0;
               int minvalue = INT_MAX;




               for(auto& p : freq ){
                maxvalue = max(maxvalue,p.second);
                minvalue = min(minvalue,p.second);
               }
               ans += (maxvalue-minvalue);
            }
        }
        return ans;

    }
};