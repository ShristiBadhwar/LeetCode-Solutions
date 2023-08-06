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
            for(int c1=1; c1<=r; c1++)
            cout<<"*";
            for(int sp=n-1; sp>=r; sp--)
            cout<<" ";
            for(int sp=n-1; sp>=r; sp--)
            cout<<" ";
            for(int c2=1;c2<=r;c2++)
            cout<<"*";
            cout<<endl;
        }
        for(int r=2; r<=n; r++)
        {
            for(int c1=n; c1>=r; c1--)
            cout<<"*";
            for(int sp=2; sp<=r; sp++)
            cout<<" ";
            for(int sp=2; sp<=r; sp++)
            cout<<" ";
            for(int c2=n;c2>=r;c2--)
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