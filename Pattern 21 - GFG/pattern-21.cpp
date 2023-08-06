//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        // code here
        for(int r=1; r<=n; r++)
        {
            
            for(int c1=1; c1<=n; c1++)
            {
                if(r==1 || r==n)
                  cout<<"*";
                else
                {
                    if(c1==1 || c1==n)
                      cout<<"*";
                    else
                      cout<<" ";
                }
            }
             cout<<endl;
            
           
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends