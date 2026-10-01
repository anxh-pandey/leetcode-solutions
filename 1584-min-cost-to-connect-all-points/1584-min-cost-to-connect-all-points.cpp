class Solution {
public:
    vector<int> p;
    vector<int> s;
    void make(int n){
        for(int i=0;i<n;i++){
            p[i]=i;
            s[i]=1;
        }
    }
    int find(int n){
        if(p[n]==n) return n;
        return p[n]=find(p[n]);
    }
    void un(int a,int b){
        int p1=p[a];
        int p2=p[b];
        if(p1==p2){
            return;
        }
        if(s[p1]>s[p2]){
            p[p2]=p1;
            s[p1]+=s[p2];
        }
        else{
            p[p1]=p2;
            s[p2]+=s[p1];
        }
    }
    int minCostConnectPoints(vector<vector<int>>& points) {
        vector<pair<int,pair<int,int>>> ab;
        for(int i=0;i<points.size();i++){
            ab.push_back({0,{i,i}});
            for(int j=0;j<points.size();j++){
                int x=abs(points[i][0]-points[j][0]);
                int y=abs(points[i][1]-points[j][1]);
                int a=x+y;
                ab.push_back({a,{i,j}});
            }
        }
        sort(ab.begin(),ab.end());
        p.resize(points.size());
        s.resize(points.size());
        make(points.size());
        int ans=0;
        for(int i=0;i<ab.size();i++){
            int u=ab[i].second.first;
            int v=ab[i].second.second;
            int wt=ab[i].first;
            if(find(u)!=find(v)){
                un(u,v);
                ans+=wt;
            }
        }
        return ans;
    }
};