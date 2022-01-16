/*----------Matrix Diagonal Sum----------*/
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int i,j,sum1=0,sum2=0;
        int n=mat.size();
        i=0; j=0;
        while(i<n)
        {
            sum1+=mat[i][j];
            i++; j++;
        }
        
        for(i=0,j=n-1;i<n;i++,j--)
        {
            if((n&1)==1 && i==j)
              continue;
            else
            sum2+=mat[i][j];
        }
        return sum1+sum2;
    }
};
