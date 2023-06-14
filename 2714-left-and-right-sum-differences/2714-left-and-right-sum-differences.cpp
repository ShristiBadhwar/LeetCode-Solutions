class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftsum;
        vector<int> rightsum;
        vector<int> ans;
        for (int i=0; i<nums.size(); i++)
        {
            int j=0, k=nums.size()-1;
            int suml=0,sumr=0;
            while(j<i)
            {
                suml+=nums[j];
                j++;
            }
             while(k>i)
            {
                sumr+=nums[k];
                k--;
            }
            leftsum.push_back(suml);
            rightsum.push_back(sumr);
        }
        for (int i=0; i<nums.size(); i++)
        {
            ans.push_back(abs(leftsum[i]-rightsum[i]));
        }
        return ans;
    }
};