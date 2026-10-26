class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> mx(prices.size());
        int mxx=0,ans=0;
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