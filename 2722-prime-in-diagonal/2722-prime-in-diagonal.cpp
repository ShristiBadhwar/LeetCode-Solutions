class Solution {
public:
    bool isPrime(int n)
    {
        if(n==0 || n==1)
        return false;
        bool flag=true;
        for(int i=2; i<=n/2; i++)
        {
            if(n%i==0)
             return false;
        }
        return flag;
    }
    int diagonalPrime(vector<vector<int>>& nums) {

       set<int, greater<int> > prime;
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=0; j<nums.size(); j++)
            {
                 if(i==j || (i+j)==nums.size()-1)
                  prime.insert(nums[i][j]);

            }
        }
        set<int, greater<int> >::iterator itr;
        for(itr=prime.begin(); itr!=prime.end(); itr++)
                if(isPrime(*itr))
                 return (*itr);
        return 0;
        
    }
};