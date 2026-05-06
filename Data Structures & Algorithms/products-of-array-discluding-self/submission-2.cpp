class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size());
        vector<int>prev(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            prev[i]=prev[i-1]*nums[i-1];
        }
        int postfix = 1;
        for(int i=nums.size()-1;i>=0;i--){
            prev[i]*=postfix;
            postfix*=nums[i];
        }
        return prev;
    }
};
