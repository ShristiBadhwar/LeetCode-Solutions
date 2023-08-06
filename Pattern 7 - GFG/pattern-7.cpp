//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int r=1; r<=n; r++)
        {
            for(int sp=n-1; sp>=r; sp--)
                cout<<" ";
            for(int c=1; c<=r; c++)
              cout<<"*";
            for(int c=2; c<=r; c++)
              cout<<"*";  
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends