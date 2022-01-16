/*----------Special Positions in a Binary Matrix*/
class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
     int i,j,flag,count=0,c,s;
        for(i=0;i<mat.size();i++)
        {
            flag=1;
            c=0; s=0;
            for(j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                {
                    c++;
                    s=j;
                }
                if(c>1)
                    break;
            }
            if(c==1)
            {
                c=0;
                for(j=0;j<mat.size();j++)
                {
                    if(mat[j][s]==1)
                        c++;
                    if(c>1)
                    {
                        flag=1;
                        break;
                    }
                    else if(c==1)
                        flag=0;
                }
            }
            if(flag==0)
                count++;
        }
        return count;
    }
};