/*----------Image Smoother---------*/
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
       int r=img.size()+2, c=img[0].size()+2,x,y,i,j,sum,count; 
       vector<vector<int>> new_img(r, vector<int> (c,0));
        for(i=1;i<r-1;i++)
        {
            for(j=1;j<c-1;j++)
                new_img[i][j]=img[i-1][j-1];
        }
        for(i=1;i<r-1;i++)
        {
            for(j=1;j<c-1;j++)
            {
                sum=0; count=0;
                for(x=i-1;x<i+2;x++)
                {                    
                    for(y=j-1;y<j+2;y++)
                    {
                       sum+=new_img[x][y];
                        if(x!=0 && x!=r-1 && y!=0 && y!=c-1)
                            count++;
                    }
                }
                img[i-1][j-1]=sum/count;
            }
        }
        return img;
    }
};