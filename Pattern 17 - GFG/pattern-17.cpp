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
            for(int c1=1; c1<=r; c1++)
            cout<<(char)(c1+64);
            for(int c2=r-1;c2>=1;c2--)
            cout<<(char)(c2+64);
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