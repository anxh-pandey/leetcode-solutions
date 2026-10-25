class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0,mxx=0;
        vector<int> mx(prices.size());
        for(int i=prices.size()-1;i>=0;i--){
            mxx=max(prices[i],mxx);
            mx[i]=mxx;
        }
        for(int i=0;i<prices.size();i++){
            ans=max(ans,mx[i]-prices[i]);
        }
        return ans;
    }
};