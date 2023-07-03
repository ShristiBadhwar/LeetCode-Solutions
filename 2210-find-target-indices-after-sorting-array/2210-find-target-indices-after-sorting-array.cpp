class Solution {
    int searchFirst(vector<int> nums, int target)
    {
       int s=0,e=nums.size()-1,mid,ans=-1;
       while(s<=e)
       {
           mid=s+(e-s)/2;
           if(nums[mid]==target)
           {
               ans=mid;
               e=mid-1;
           }
           else if(nums[mid]>target)
           {
               e=mid-1;
           }
           else
            s=mid+1;

       }
       return ans;
    }

     int searchSecond(vector<int> nums, int target)
    {
       int s=0,e=nums.size()-1,mid,ans=-1;
       while(s<=e)
       {
           mid=s+(e-s)/2;
           if(nums[mid]==target)
           {
               ans=mid;
               s=mid+1;
           }
           else if(nums[mid]>target)
           {
               e=mid-1;
           }
           else
            s=mid+1;

       }
       return ans;
    }

public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
       int first=searchFirst(nums,target);
       int second=searchSecond(nums,target);
       if(first ==-1 && second==-1)
        return ans;
       while(first<=second)
        ans.push_back(first++);
       return ans; 
    }
};