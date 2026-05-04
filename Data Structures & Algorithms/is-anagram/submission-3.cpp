class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>vec(26,0);
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++){
            vec[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            vec[t[i]-'a']--;
        }
        for(int i=0;i<vec.size();i++){
            if(vec[i]>0) return false;
        }
        return true;
    }

};
