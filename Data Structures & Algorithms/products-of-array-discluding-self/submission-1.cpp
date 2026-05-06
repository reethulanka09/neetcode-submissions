class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size());
        vector<int>prev(nums.size());
        prev[0]=1;
        for(int i=1;i<nums.size();i++){
            prev[i]=prev[i-1]*nums[i-1];
        }
        vector<int>suff(nums.size());
        suff[0]=1;
        reverse(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            suff[i]=suff[i-1]*nums[i-1];
        }
        reverse(suff.begin(),suff.end());
        for(int i=0;i<suff.size();i++){
            ans[i]=prev[i]*suff[i];
        }
        return ans;
    }
};
