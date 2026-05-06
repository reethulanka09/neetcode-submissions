class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        vector<int>ans;
        for(auto i:nums){
            mpp[i]++;
        }
        vector<pair<int,int>>vec;
        for(auto i:mpp){
            vec.push_back({i.first,i.second});
        }
        sort(vec.begin(), vec.end(), [](pair<int,int>& a, pair<int,int>& b){
    return a.second > b.second;
});
        for(int i=0;i<k;i++){
            ans.push_back(vec[i].first);
        }
        return ans;
    }
};
