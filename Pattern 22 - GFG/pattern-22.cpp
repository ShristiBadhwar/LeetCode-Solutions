//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        // code here
        for(int r=n; r>=1; r--)
        {
            for(int c=n; c>=1;c--)
                {
                    if(c<=r)
                      cout<<r<<" ";
                    else
                     cout<<c<<" ";
                }    
                
             for(int c=2; c<=n;c++)
                {
                    if(c<=r)
                      cout<<r<<" ";
                    else
                     cout<<c<<" ";
                } 
             cout<<endl;
        }
        for(int r=2; r<=n; r++)
        {
            for(int c=n; c>=1;c--)
                {
                    if(c>=r)
                      cout<<c<<" ";
                    else
                     cout<<r<<" ";
                }    
                
             for(int c=2; c<=n;c++)
                {
                    if(c>=r)
                      cout<<c<<" ";
                    else
                     cout<<r<<" ";
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