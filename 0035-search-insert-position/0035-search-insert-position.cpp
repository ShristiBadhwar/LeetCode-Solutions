class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1, mid,ans,flag=0;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(nums[mid]==target)
                return mid;
            else if (nums[mid]<target)
            {
                s=mid+1;
            }
            else
            {
                ans=mid;
                e=mid-1;
                flag=1;
            }    
        }
        if (flag)
         return ans;
        else 
         return nums.size() ;
    }
};
        
