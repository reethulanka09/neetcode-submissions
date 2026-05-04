class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        vector<int>visited(strs.size(),0);
        for(int i=0;i<strs.size();i++){
            vector<string>vec;
            if(visited[i]==0) vec.push_back(strs[i]); visited[i]+=1;
            for(int j=i+1;j<strs.size();j++){
                string res = strs[j];
                if(strs[i].size()==strs[j].size()){
                    sort(strs[i].begin(),strs[i].end());
                    sort(strs[j].begin(),strs[j].end());
                    if(strs[i]==strs[j] and visited[j]==0){
                        vec.push_back(res);
                        visited[j]+=1;
                    }
                }
                strs[j]=res;
            }
            
            if (vec.size() > 0 ) ans.push_back(vec);
        }
        return ans;
    }
};
