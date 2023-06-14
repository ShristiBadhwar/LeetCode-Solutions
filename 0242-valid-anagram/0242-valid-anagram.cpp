class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> alpha(26);
        if(s.length()!=t.length())
            return false;
        for(int i=0; i<s.length(); i++)
        {
            int x=(char)s[i] - 'a';
            int y=(char)t[i] - 'a';
            alpha[x]++;
            alpha[y]--;
        }  
        sort(alpha.begin(),alpha.end());
        if(alpha[0]!=0 || alpha[25]!=0)
         return 0;
        else return 1;   

    }
};