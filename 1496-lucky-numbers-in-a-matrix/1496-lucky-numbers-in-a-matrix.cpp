class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> row, column, ans;
        for (int i=0; i<n; i++)
        {
            int minr=matrix[i][0];
            for(int j=0; j< m; j++)
            {
                if(matrix[i][j]<minr)
                  minr=matrix[i][j]; 
            }
            row.push_back(minr);
        }
         for (int i=0; i<m; i++)
        {
            int maxc=matrix[0][i];
            for(int j=0; j< n; j++)
            {
                
                if(matrix[j][i]>maxc)
                  maxc=matrix[j][i];  
            }
            column.push_back(maxc);
        }
        for (int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(matrix[i][j]==row[i] && matrix[i][j]==column[j])
                 {ans.push_back(matrix[i][j]);
                 break;}
            }
        }
        return ans;
        
    }
};