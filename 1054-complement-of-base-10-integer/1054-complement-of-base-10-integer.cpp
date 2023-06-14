class Solution {
public:
    int bitwiseComplement(int n) {
        int ans=0,k=0,num=n;
   if(n==0)
       return 1;
    
   while(n!=0)
   {
       ans+=((~n)&1)*pow(2,k);
       n=n>>1;
       k++;
       
   }

  return ans;
        
    }
};