//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
public:
    int padovanSequence(int n)
    {
        const int MOD = 1000000007;  // Define the modulo constant
        if (n <= 2) 
        {
            return 1;  // Base cases: P(0) = P(1) = P(2) = 1
        }
        
        // Initialize base cases
        std::vector<int> P(n + 1, 0);
        P[0] = 1;
        P[1] = 1;
        P[2] = 1;
        
        // Compute Padovan sequence using the recurrence relation
        for (int i = 3; i <= n; ++i) 
        {
            P[i] = (P[i - 2] + P[i - 3]) % MOD;  // Apply modulo at each step
        }
        
        return P[n];
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout<<ob.padovanSequence(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends
