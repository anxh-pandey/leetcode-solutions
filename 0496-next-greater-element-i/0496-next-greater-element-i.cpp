class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        vector<int> ans(nums1.size(),-1);
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]=i;
        }
        for(int i=0;i<nums1.size();i++){
            int k=-1;
            if(mp.find(nums1[i])!=mp.end()){
                k=mp[nums1[i]];
            }
            if(k!=-1){
            for(int j=k;j<nums2.size();j++){
                if(nums2[j]>nums2[k]){
                    ans[i]=nums2[j];
                    break;
                }
            }                
            }
        }
        return ans;
    }
};