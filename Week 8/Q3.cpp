/*----------Flipping an image----------*/
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
       int i,j,k,temp;
        for(i=0;i<image.size();i++)
        {
            for(k=0,j=image[i].size()-1;k<j;k++,j--)
            {
                temp=image[i][k];
                image[i][k]=image[i][j];
                image[i][j]=temp;
            }
            for(j=0;j<image[i].size();j++)
            {
                if(image[i][j]==0)
                    image[i][j]=1;
                else
                    image[i][j]=0;
            }
        }
        return image;
    }
};