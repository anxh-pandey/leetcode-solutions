class Solution {
public:
    void sol(vector<int>& nums,vector<int>& a,vector<vector<int>>& ans,int i){
        if(i==nums.size()){
            ans.push_back(a);
            return;
        }
        a.push_back(nums[i]);
        sol(nums,a,ans,i+1);
        a.pop_back();
        sol(nums,a,ans,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> a;
        sol(nums,a,ans,0);
        return ans;
    }
};