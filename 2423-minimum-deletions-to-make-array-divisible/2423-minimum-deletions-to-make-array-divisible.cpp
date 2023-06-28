class Solution {
   int calc(int a, int b)
    {
    return b == 0 ? a : gcd(b, a % b);   
    }
    int hcf(vector<int> nums)
    {
        int ans=0;
        for(auto i:nums)
          ans=calc(ans,i);
        return ans;  
    }
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        sort(numsDivide.begin(),numsDivide.end());
        sort(nums.begin(), nums.end());
        int x=hcf(numsDivide);
        int i=0; 
        while(i<nums.size())
        {
            if(x%nums[i] == 0)
            {
                return i;
            }
            i++;
        }
         return -1;
       
    }
};