class Solution {
public:
    void sol(vector<vector<int>>& ans,vector<int>& nums,vector<int>& a,int i){
        if(i==nums.size()){
            ans.push_back(a);
            return;
        }
        a.push_back(nums[i]);
        sol(ans,nums,a,i+1);
        a.pop_back();
        sol(ans,nums,a,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> a;
        sol(ans,nums,a,0);
        return ans;
    }
};