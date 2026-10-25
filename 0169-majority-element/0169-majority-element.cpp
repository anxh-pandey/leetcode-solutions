class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0,c=0;
        if(nums.size()==1) return nums[0];
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                c+=1;
            }
            else{
                c=0;
            }
            if(c>=nums.size()/2){
                ans=nums[i];
            }
        }
        return ans;
    }
};