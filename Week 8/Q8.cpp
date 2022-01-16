/*---------Transpose Matrix----------*/
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int i,j,temp;
        int r=matrix.size(), c=matrix[0].size();
        vector<vector<int>> ans(c,vector<int> (r));
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
              ans[j][i]=matrix[i][j];  
            }
        }
        return ans;
    }
};