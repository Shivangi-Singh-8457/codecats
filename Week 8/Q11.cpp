/*----------Toeplitz Matrix----------*/
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
      int i,j,temp,k;
        int r=matrix.size(), c=matrix[0].size();
        for(i=0;i<c;i++)
        {
            k=0; j=i;
            temp=matrix[0][i];
            while(k<r && j<c)
            {
                if(temp!=matrix[k][j])
                    return false;
                k++; j++;
            }
        }
        for(i=1;i<r;i++)
        {
            k=i; j=0;
            temp=matrix[i][0];
            while(k<r && j<c)
            {
                if(temp!=matrix[k][j])
                    return false;
                k++; j++;
            }
        }
        return true;
    }
};