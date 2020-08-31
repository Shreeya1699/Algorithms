class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();
        for(int i=1;i<n;i++){
            mat[i][0]+=mat[i-1][0];
        }
        for(int j=1;j<m;j++){
            mat[0][j]+=mat[0][j-1];
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                mat[i][j]+=(mat[i-1][j]+mat[i][j-1]-mat[i-1][j-1]);
            }
        }
        vector<vector<int>>ans(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int r1=max(0,i-k),r2=min(n-1,i+k);
                int c1=max(0,j-k),c2=min(m-1,j+k);
                if(r1!=0 && c1!=0){
                    ans[i][j]=mat[r2][c2]-mat[r2][c1-1]-mat[r1-1][c2]+mat[r1-1][c1-1];
                }else if(r1==0 && c1==0){
                    ans[i][j]=mat[r2][c2];
                }else if(r1==0){
                    ans[i][j]=mat[r2][c2]-mat[r2][c1-1];
                }else if(c1==0){
                    ans[i][j]=mat[r2][c2]-mat[r1-1][c2];
                }
            }
        }
        return ans;
    }
};