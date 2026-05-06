class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        vector<vector<string>>ans;
        for(auto i : strs){
            string s = i;
            sort(i.begin(),i.end());
            mpp[i].push_back(s);
        }
        for(auto i:mpp){
            ans.push_back(i.second);
        }
        return ans;
    }
};
