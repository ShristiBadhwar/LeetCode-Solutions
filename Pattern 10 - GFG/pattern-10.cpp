//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution{
public:
    void printTriangle(int n) {
        // code here
          for(int r=1; r<=n; r++)
        {
            
            for(int c=1; c<=r; c++)
              cout<<"* ";
            
             cout<<endl; 
        }
          for(int r=1; r<=n-1; r++)
        {
            for(int c=n-1; c>=r; c--)
              cout<<"* ";
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