class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        set<int> n1, n2;
        for(int i=0; i<nums1.size(); i++)
        {
            n1.insert(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++)
        {
            n2.insert(nums2[i]);
        }

        set<int> :: iterator it1, it2;
        it1=n1.begin(), it2=n2.begin();
        while(it1!=n1.end() && it2!=n2.end())
        {
            if(*it1==*it2)
            { ans.push_back(*it1);
             it1++, it2++;}
            else if (*it1<*it2)
             it1++;
            else
             it2++; 
        }
        return ans;
    }
};