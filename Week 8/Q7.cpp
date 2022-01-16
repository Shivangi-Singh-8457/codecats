/*----------- Reshape the Matrix----------*/
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
       int n=mat.size(), m=mat[0].size();
        vector<vector<int>> ans(r, vector<int> (c));
        if(m*n!=r*c)
            return mat;
        int i,j,x=0,y=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(x<r)
                {
                    ans[x][y]=mat[i][j];
                    y++;
                    if(y==c)
                    {
                        x++;
                        y=0;
                    }
               }
            }
        }
        return ans;
    }
};