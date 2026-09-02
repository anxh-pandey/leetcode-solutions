class Solution {
public:
    int sol(vector<int>& nums,int k){
        unordered_map<int,int> mp;
        int l=0,r=0,ans=0;
        while(r<nums.size()){
            mp[nums[r]]++;
            while(mp[nums[r]]>k){
                mp[nums[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
    int maxSubarrayLength(vector<int>& nums, int k) {
       return sol(nums,k); 
    }
};