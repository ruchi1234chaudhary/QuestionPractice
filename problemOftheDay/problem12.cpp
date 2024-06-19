//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
#include <iostream>
#include <cmath>
#include <algorithm>

class Solution {
public:
    long long gcd(long long a, long long b) {
        while (b != 0) {
            long long temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    
    long long triangleArea(long long p[], long long q[], long long r[]) {
        return std::abs(p[0] * (q[1] - r[1]) + q[0] * (r[1] - p[1]) + r[0] * (p[1] - q[1]));
    }
    
    long long boundaryLatticePoints(long long p[], long long q[]) {
        return gcd(std::abs(q[0] - p[0]), std::abs(q[1] - p[1])) + 1;
    }
    
    long long InternalCount(long long p[], long long q[], long long r[]) {
        // Calculate the area (multiplied by 2 for integer arithmetic)
        long long area = triangleArea(p, q, r);
        
        // Calculate boundary points B
        long long B = boundaryLatticePoints(p, q) + boundaryLatticePoints(q, r) + boundaryLatticePoints(r, p) - 3;
        
        // Calculate interior points I using Pick's Theorem
        long long I = (area - B + 2) / 2;
        
        return I;
    }
};






//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int p[2], q[2], r[2];
        cin >> p[0] >> p[1] >> q[0] >> q[1] >> r[0] >> r[1];
        Solution ob;
        long long int ans = ob.InternalCount(p, q, r);
        cout << ans << "\n";
    }
}
// } Driver Code Ends
