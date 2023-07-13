class Solution {
    int solve(vector<int> cost, int n, vector<int> &dp)
    {
        if(n==0)
         return cost[0];
        else if(n==1)
          return cost[1];
        if(dp[n]!=-1)
             return dp[n];
        else
            dp[n]=cost[n]+min(solve(cost,n-1,dp), solve(cost,n-2,dp));
            return dp[n];   
    }
   
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1, -1);
        int ans=min(solve(cost,n-1,dp), solve(cost,n-2,dp)); 
        return ans;   
        }   
};