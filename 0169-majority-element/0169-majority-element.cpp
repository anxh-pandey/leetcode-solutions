class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans = 0;
        for(auto x : nums){
            mp[x]++;
        }
        for(auto x : mp){
            if(x.second>nums.size()/2){
                ans = x.first;
            }
        }
        return ans;
    }
};