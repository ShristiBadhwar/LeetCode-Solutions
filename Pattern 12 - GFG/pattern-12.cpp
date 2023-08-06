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
            for(int c1=1;c1<=r;c1++)
              cout<<c1<<" ";
            for(int sp1=n-1; sp1>=r; sp1--)
              cout<<"  ";
            for(int sp2=n-1; sp2>=r; sp2--)
              cout<<"  "; 
            for(int c2=r;c2>=1;c2--)
              cout<<c2<<" "; 
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