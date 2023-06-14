class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans;
        int count=1;
        for(int i=0; i<s.length(); i++)
        {
            if(count<=k)
            {
                if(s[i]!=' ')
                 ans+=s[i];
                else
                {
                    ans+=' ';
                    count++;
                } 
            }
        }
        if(ans[ans.length()-1]==' ')
        return ans.substr(0,ans.length()-1);
        else
        return ans;
    }
};