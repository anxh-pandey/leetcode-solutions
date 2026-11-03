class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int t=nums[nums.size()-1];
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=t-nums[i];
        }
        return ans;
    }
};