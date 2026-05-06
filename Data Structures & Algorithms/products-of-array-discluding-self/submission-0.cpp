class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size());
        int prevprod = 1;
        for(int i=0;i<nums.size();i++){
            int nextprod = 1;
            for(int j=i+1;j<nums.size();j++){
                nextprod*=nums[j];
            }
            ans[i]=nextprod*prevprod;
            prevprod*=nums[i];
        }
        return ans;
    }
};
