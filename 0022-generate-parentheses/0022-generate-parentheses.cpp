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
        l+=1;
        sol(n,a,l,r,ans);
        a.pop_back();
        l-=1;
        a+=")";
        r+=1;
        sol(n,a,l,r,ans);
    }
    vector<string> generateParenthesis(int n) {
         vector<string> ans;
         sol(n,"(",1,0,ans);
         return ans;
    }
};