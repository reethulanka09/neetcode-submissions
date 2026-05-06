class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        for(auto i : strs){
            string s = i;
            sort(i.begin(),i.end());
            if(mpp.find(i)!=mpp.end()){
                mpp[i].push_back(s);
            }
            else{
                mpp[i].push_back(s);
            }
        }
        vector<vector<string>>ans;
        for(auto i:mpp){
            vector<string>temp;
            for(auto val:i.second){
                temp.push_back(val);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
