class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if(numRows==1)
        {
            vector<int> a;
            a.push_back(1);
            ans.push_back(a);
            return ans;
        }
            
        if(numRows==2)
        {
            vector<int> b;
            b.push_back(1);
            ans.push_back(b);
            b.push_back(1);
            ans.push_back(b);
            return ans; 
        }
        else
        {
           vector<int> b;
            b.push_back(1);
            ans.push_back(b);
            b.push_back(1);
            ans.push_back(b); 
            for(int i=2; i<numRows; i++ )
        {
             
             vector<int> y;
             y.push_back(1);
             int n=ans[i-1].size();
             for(int j=0; j<n-1; j++)
             {
                 int sum=ans[i-1][j]+ans[i-1][j+1];
                 y.push_back(sum);
             }
             y.push_back(1);
             ans.push_back(y);
        }
        return ans;
        }
           
   
        
    }
};