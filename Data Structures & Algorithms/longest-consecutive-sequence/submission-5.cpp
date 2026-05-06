class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int largest = 0;
        for(auto val:st){
            if(st.find(val-1)==st.end()){
                int curr=val;
                int count=1;
                while(st.find(curr+1)!=st.end()){
                    curr++;
                    count++;
                }
                largest = max(largest,count);
            }
        }
        return largest;
    }
};
