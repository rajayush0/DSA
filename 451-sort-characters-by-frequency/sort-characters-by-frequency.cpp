class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        map<char,int>freq;
        string ans = "";
        //store each char by key value pair
        for(char c :s){
            freq[c]++;
        }
        //as map is not sorted so we copy map in vector to sort 
        vector<pair<char,int>> vec(freq.begin(),freq.end());
        sort(vec.begin(),vec.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });
        
        //
            for(auto &it : vec) {
                for(int i = 0; i < it.second; i++) {
                    ans += it.first;  // repeat character
                }
            }
        return ans;
        
    }
};