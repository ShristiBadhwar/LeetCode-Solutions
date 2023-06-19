class Solution {

   
public:
    bool isPalindrome(string s) {
        string s1;
        for(auto i:s)
        {

            if(isalnum(i))
              {if(isupper(i))
               s1+=tolower(i);
              else 
               s1+=i; }
        }
       
        int st=0, e=s1.length()-1;
        while(st<=e)
        {
            if(s1[st]!=s1[e])
             return false;
            st++;
            e--; 
        }
        return true;
    }
};
