class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mpp;
        vector<int>ans;
        for(auto i:nums){
            mpp[i]++;
        }
        vector<pair<int,int>>vec;
        for(auto i:mpp){
            vec.push_back({i.first,i.second});
        }
        sort(vec.begin(), vec.end(), [](pair<int,int>& a, pair<int,int>& b){
    return a.second < b.second;
});
reverse(vec.begin(),vec.end());
        for(auto i:vec){
            if(k>0){
                ans.push_back(i.first);
                k--;
            }
        }
        return ans;
    }
};
