class Solution {
public:void solve(vector<int> nums, int i, set<vector<int>> &ans,vector<int> output )
    {
        if(i>=nums.size())
        {
            sort(output.begin(),output.end());
            ans.insert(output);
            return;
        }
        //exclude
        solve(nums, i+1, ans, output);

        //include
       
        output.push_back(nums[i]);
        solve(nums,i+1,ans,output);
    }
 
        
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> output;
        int i=0; 
        solve(nums, i, ans, output);
        vector<vector<int>>answer(ans.begin(), ans.end());
        return answer;
    }
};