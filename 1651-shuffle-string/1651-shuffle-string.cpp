class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans;
        
        for(int i=0; i<indices.size(); i++)
        {
            for(int j=0; j<indices.size(); j++)
            {
                if(i==indices[j])
                {
                   ans+= s[j];
                }
            }
        }
        return ans;
    }
};