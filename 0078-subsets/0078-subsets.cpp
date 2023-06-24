class Solution {
public:
    void solve(vector<int> nums, int i, vector<vector<int>> &ans,vector<int> output )
    {
        if(i>=nums.size())
        {
            ans.push_back(output);
            return;
        }
        //exclude
        solve(nums, i+1, ans, output);

        //include
        output.push_back(nums[i]);
        solve(nums,i+1,ans,output);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        /*vector<vector<int>> ans;
        vector<int> output;
        int i=0; 
        solve(nums, i, ans, output);
        return ans;*/
        vector<vector<int>> ans;
        
        
        int n=nums.size();
        for(int i=0; i<1<<n; i++ )
        {
            vector<int> output;
            for(int j=0; j<n; j++)
            {
                if(i&(1<<j))
                 output.push_back(nums[j]);
            }
            ans.push_back(output);
        }
        return ans;
        
    }
};