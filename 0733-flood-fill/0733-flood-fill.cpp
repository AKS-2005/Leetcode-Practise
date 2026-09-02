class Solution {
public:
    void dfs(int sr,int sc,int n,int m,vector<vector<int>>& image,int oc,int color){
        if(sr<0 || sr>=n || sc<0 || sc>=m || image[sr][sc]==color || image[sr][sc]!=oc) return ;
        image[sr][sc]=color;
        dfs(sr,sc-1,n,m,image,oc,color);
        dfs(sr,sc+1,n,m,image,oc,color);
        dfs(sr-1,sc,n,m,image,oc,color);
        dfs(sr+1,sc,n,m,image,oc,color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oc=image[sr][sc];
        if(oc==color) return image;
        int n=image.size();
        int m=image[0].size();
        dfs(sr,sc,n,m,image,oc,color);
        return image;
    }
};