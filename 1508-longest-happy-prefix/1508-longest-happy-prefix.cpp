class Solution {
public:
    string longestPrefix(string s) {
        int n=s.length();
        int arr[n];
        fill_n(arr,1,0);
        int i=1, j=0;
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
        int k=arr[n-1];
        return s.substr(0,k);
    }
};