class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        map<char,int>freq;
        string ans = "";
        for(char c :s){
            freq[c]++;
        }
        vector<pair<char,int>> vec(freq.begin(),freq.end());
        sort(vec.begin(),vec.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });

        for(auto it : vec){
            ans.append(it.second,it.first);
        }
        return ans;
    }
};