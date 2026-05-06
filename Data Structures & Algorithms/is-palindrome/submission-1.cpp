class Solution {
public:
    bool isPalindrome(string s) {
        string res;
        for(auto i:s){
            if(i!=' ' and (isalpha(i) or isdigit(i))) res+=tolower(i);
        }
        cout<<res;
        int i=0,j=res.size()-1;
        while(i<=j){
            if(res[i]!=res[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
