class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();
        for(int i=0; i<mat.size(); i++)
        {
            
                sum+=mat[i][i];
                if(i!=(n-i-1))
                 sum+=mat[i][n-i-1];
            
        }
        return sum;
        
        
    }
};