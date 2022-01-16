/*----------Determine Whether Matrix Can Be Obtained By Rotation---------*/
class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
       int i,j,temp,x=0,k;
        int n=mat.size();
        while(x<4)
        {
            for(i=0;i<n;i++)
            {
                for(j=n-1;j>=0;j--)
                {
                    if(i<j)
                    {
                        temp=mat[i][j];
                        mat[i][j]=mat[j][i];
                        mat[j][i]=temp;
                    }
                    else
                        break;
                }
            }
            for(i=0;i<n;i++)
            {
                for(j=n-1,k=0;k<j;k++,j--)
                {
                    temp=mat[i][k];
                    mat[i][k]=mat[i][j];
                    mat[i][j]=temp;
                }
            }
            if(mat==target)
                return true;
            x++;
        }
        return false;
    }
};