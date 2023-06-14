class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0; i<image.size(); i++)
        {
            int s=0, e=image[i].size()-1;
            while(s<=e)
            {
                int temp=image[i][s];
                image[i][s]=image[i][e];
                image[i][e]=temp;
                s++;
                e--;
            }
        }
        for(int i=0; i<image.size(); i++)
        {
            for(int j=0; j<image[i].size(); j++)
            {
                if(image[i][j]==0)
                 image[i][j]=1;
                else
                 image[i][j]=0 ;
            }
        }
        return image;
        
    }
};