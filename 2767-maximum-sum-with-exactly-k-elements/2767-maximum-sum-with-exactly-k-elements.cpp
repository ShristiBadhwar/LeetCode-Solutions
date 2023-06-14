class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int sum=0,n=nums.size()-1;
        for(int i=0; i<k; i++)
       {
           sum+=nums[n];
           nums[n]+=1;
       }
       return sum;
        
    }
};