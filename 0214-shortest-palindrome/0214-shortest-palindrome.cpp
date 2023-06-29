class Solution {
    string rev(string s,int st, int e)
    {
        
        while(st<=e)
        {
            swap(s[st],s[e]);
            st++;
            e--; 
        }
        return s;
    }
public:
    string shortestPalindrome(string s) {
        //reverse string and add to existing string, then find lps(kmp algo) table for it. 
        string ans=s;
        s+='#'+rev(s,0,s.length()-1);
        int n=s.length();
        int i=1, j=0;
        int arr[n];
        fill_n(arr,1,0);
        while(i<n)
        {
            if(s[i]==s[j])
                {
                    j++;
                    arr[i]=j;
                    i++;
                }
            else
            {
                if(j!=0)
                 j=arr[j-1];
                else
                {
                    arr[i]=0;
                    i++;
                } 
            } 
        }
        string k=ans.substr(arr[n-1],ans.length());
        ans=rev(k,0,k.length()-1)+ans;
        return ans;
    }
};