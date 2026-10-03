class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        queue<int> q;
        int c=0;
        int i=0;
        int ans=0;
        while( i<nums.size() ){
            if(nums[i]==0 && c<k){
                nums[i]=1;
                q.push(i);
                c+=1;
            }
            else if(nums[i]==0){
                if(k==0){
                    l=i+1;
                }
                else{
                l=q.front()+1;
                nums[q.front()]=0;
                q.pop();
                nums[i]=1;
                q.push(i);
                }
            }
            i+=1;
            ans=max(ans,i-l);
        }
        return ans;
    }
};