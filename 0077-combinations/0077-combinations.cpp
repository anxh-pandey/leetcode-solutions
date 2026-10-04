class Solution {
public:
    void sol(int n,int k,vector<vector<int>>& ans,vector<int>& a,int i){
        if(a.size()==k){
            ans.push_back(a);
            return;
        }
        if(i>n){
            return;
        }
        a.push_back(i);
        sol(n,k,ans,a,i+1);
        a.pop_back();
        sol(n,k,ans,a,i+1);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> a;
        sol(n,k,ans,a,1);
        return ans;
    }
};