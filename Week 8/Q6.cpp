/*----------Lucky Numbers in a Matrix----------*/
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
       int i,j,s;
        vector<int> ans(1); 
        for(i=0;i<matrix.size();i++)
        {
            s=0;
            for(j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]<matrix[i][s])
                    s=j;
            }
            int f=1;
            for(j=0;j<matrix.size();j++)
            {
                if(matrix[j][s]>matrix[i][s])
                { f=0;   break; }
            }
            if(f==1)
            {ans[0]=matrix[i][s];
            return ans;}
        }
        return {};
    }
};