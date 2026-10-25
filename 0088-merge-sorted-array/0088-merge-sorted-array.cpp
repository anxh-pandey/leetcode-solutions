class Solution {
public:
    vector<int> sol(vector<int>& a,int m,vector<int>& b,int n,vector<int>& ab,int i,int j){
        if(i==m){
            for(int k=j;k<n;k++){
                ab.push_back(b[k]);
            }
            return ab;
        }
        else if(j==n){
            for(int k=i;k<m;k++){
                ab.push_back(a[k]);
            }
            return ab;
        }
        if(a[i]<b[j]){
            ab.push_back(a[i]);
            return sol(a,m,b,n,ab,i+1,j);
        }
        else{
            ab.push_back(b[j]);
            return sol(a,m,b,n,ab,i,j+1);
        }
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ab;
        vector<int> ans=sol(nums1,m,nums2,n,ab,0,0);
        for(int i=0;i<ans.size();i++){
            nums1[i]=ans[i];
        }
    }
};