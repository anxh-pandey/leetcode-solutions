class Solution {
public:
    int sol(string s){
        vector<int> ans(256,-1);
        int l=0,r=0,a=0;
        while(r<s.size()){
            if(ans[s[r]]!=-1){
                l=max(l,ans[s[r]]+1);
            }
            ans[s[r]]=r;
            a=max(a,r-l+1);
            r++;
        }
        return a;
    }
    int lengthOfLongestSubstring(string s) {
        return sol(s);
    }
};