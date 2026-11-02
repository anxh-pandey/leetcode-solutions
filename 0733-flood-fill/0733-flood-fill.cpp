class Solution {
public:
    void sol(vector<vector<int>>& image,int i,int j, int color,int ac){
        if(j>=image[0].size() || i>=image.size()){
            return;
        }
        if(i<0 || j<0){
            return;
        }
        if(image[i][j]==ac){
            image[i][j]=color;
        }
        else{
            return;
        }
        sol(image,i,j+1,color,ac);
        sol(image,i+1,j,color,ac);
        sol(image,i-1,j,color,ac);
        sol(image,i,j-1,color,ac);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int ac=image[sr][sc];
        if(ac==color) return image;
        sol(image,sr,sc,color,ac);
        return image;
    }
};