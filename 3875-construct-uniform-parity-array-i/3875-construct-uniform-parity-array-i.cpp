class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> o;
        vector<int> e;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                e.push_back(nums[i]);
            }
            else{
                o.push_back(nums[i]);
            }
            for(int j=i+1;j<n;j++){
                if((nums[i]-nums[j])%2==0){
                    e.push_back(nums[i]-nums[j]);
                }
                else{
                    o.push_back(nums[i]-nums[j]);
                }
            }
        }
        if(e.size()>=n || o.size()>=n) return true;
        return false;
    }
};