class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans(2);
        unordered_map<int,int> mp;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                mp[grid[i][j]]++;
            }
        }
        for(int i=1;i<=grid.size()*grid.size();i++){
            if(mp.find(i)!=mp.end()){
            if(mp[i]>1){
                ans[0]=i;
            }
            }
            else{
                ans[1]=i;
            }
        }
        return ans;
    }
};