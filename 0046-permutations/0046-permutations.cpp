class Solution {
    void solve (vector<int> nums, int i, vector<vector<int>> &ans)
    {
            int n=nums.size();
            if(i>=n)
            {
                ans.push_back(nums);
                return;
            }
            else
            {
                for(int j=i; j<n; j++)
                {
                    swap(nums[i],nums[j]);
                    solve(nums,i+1,ans);
                    swap(nums[i],nums[j]);
                }
            } 
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> ans;
        int i=0;
        solve(nums, i, ans);
        return ans;
        
    }
};