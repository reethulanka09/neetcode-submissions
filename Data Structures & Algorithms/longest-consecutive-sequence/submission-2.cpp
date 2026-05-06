class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        map<int, set<vector<int>>> vals;
        for (int i = 0; i < nums.size(); i++) {
            vector<int> res;
            res.push_back(nums[i]);
            int x = nums[i];
            while (mpp.find(x + 1) != mpp.end()) {
                res.push_back(x + 1);
                x++;
            }
            vals[nums[i]].insert(res);
        }
        int ma = 0;
        for (auto i : vals) {
            for (auto& vec : i.second) {
                ma = max(ma, (int)vec.size());
            }
        }
        return ma;
    }
};
