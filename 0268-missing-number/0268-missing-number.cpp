class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            ans^=nums[i];
        }
        for(int i=0; i<=nums.size(); i++)
        {
            ans^=i;
        }
        return ans;
    }
};