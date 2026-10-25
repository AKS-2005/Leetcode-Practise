class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        bool isr0=false;
        bool isc0=false;
        for(int j=0;j<n;j++){
            if(matrix[0][j]==0){
                isr0=true;
            }
        }
        for(int i=0;i<m;i++){
            if(matrix[i][0]==0){
                isc0=true;
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[0][j]==0 || matrix[i][0]==0)
                    matrix[i][j]=0;
            }
        }
        if(isr0){
            for(int j=0;j<n;j++)
                matrix[0][j]=0;
        }
        
        if(isc0){
            for(int i=0;i<m;i++)
                matrix[i][0]=0;
        }
    }
};