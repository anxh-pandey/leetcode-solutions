class Solution {
public:
    int findCheapestPrice(int V, vector<vector<int>>& edges, int src, int dst, int k) {
        vector<int> dis(V,1e8);
        dis[src]=0;
        for(int i=0;i<=k;i++){
            vector<int> temp=dis;
            for(auto x:edges){
                int u=x[0];
                int n=x[1];
                int wt=x[2];
                if(dis[u]!=1e8 && dis[u]+wt<temp[n]){
                    temp[n]=dis[u]+wt;
                }
            }
            dis=temp;
        }
        if(dis[dst]==1e8) return -1;
        return dis[dst];
    }
};