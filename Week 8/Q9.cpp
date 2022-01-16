/*-----------Shift 2D Grid----------*/
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
      int i,j,c,r,x=0,t1,t2;
        r=grid.size(); c=grid[0].size();
        k=k%(r*c);
        while(x<k)
        {
            t1=grid[0][0];
            for(i=0;i<r;i++)
            {
                for(j=1;j<c;j++)
                {
                    t2=grid[i][j];
                    grid[i][j]=t1;
                    t1=t2;
                }
                if(i+1<r)
                {
                    t2=grid[i+1][0];
                    grid[i+1][0]=t1;
                    t1=t2;
                }
            }
            grid[0][0]=t1;
            x++;
        }
        return grid;
    }
};