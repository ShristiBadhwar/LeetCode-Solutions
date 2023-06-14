class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0,l=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='L')
             l++;
            else if(s[i]=='R')
             l--; 

            if(l==0)
             count++;   
        }
        return count;
    }
};