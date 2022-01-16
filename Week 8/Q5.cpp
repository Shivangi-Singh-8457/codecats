/*-----------The K Weakest Rows in a Matrix----------*/
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
      int i,j,x=0;
        int r=mat.size(), c=mat[0].size();
        vector<int> H(r), result(k);
        for(j=0;j<=c;j++)
        {
            for(i=0;i<r;i++)
            {
                if(H[i]==0 && (j==c || mat[i][j]==0))
                {
                    result[x++]=i;
                    H[i]++;
                }
                if(k==x)
                    return result;
            }
        }
        return result;
    }
};