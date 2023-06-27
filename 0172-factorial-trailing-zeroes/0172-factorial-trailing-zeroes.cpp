class Solution {
    int alternate(int n)
    {
        if(n<4)
         return 0;
        else
        {
            int count=0;
            while(n>1)
            {
                count+=n/5;
                n/=5;
            }
            return count;
        } 
    }
public:
    int trailingZeroes(int n) {
        //return alternate(n);
        if(n<4)
         return 0;
        else
        {
            int ans=0;
            int i=1;
            while(pow(5,i)<=n)
            {
                ans+=n/pow(5,i);
                i++;
            }
            return ans;
        } 
        
    }
};