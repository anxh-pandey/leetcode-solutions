class Solution {
public:
    void sol(int n,string a,int l,int r,vector<string>& ans){
        if(r>l) return;
        if(a.size()==n*2 && l==r){
            ans.push_back(a);
            return;
        }
        if(a.size()==n*2) return;
        a+="(";
        sol(n,a,l+1,r,ans);
        a.pop_back();
        a+=")";
        sol(n,a,l,r+1,ans);
    }
    vector<string> generateParenthesis(int n) {
         vector<string> ans;
         sol(n,"",0,0,ans);
         return ans;
    }
};