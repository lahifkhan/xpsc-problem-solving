//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
       int sum = 0;
        int n = arr.size();
        int len = 0;

        int l = 0; // Left pointer
        for (int r = 0; r < n; r++) { // Right pointer
            sum += arr[r];

            // Shrink the window until sum <= k
            while (sum > k && l <= r) {
                sum -= arr[l];
                l++;
            }

            // Check if the current subarray has a sum equal to k
            if (sum == k) {
                len = max(len, r - l + 1);
            }
        }
        return len;
    }
};
        
  

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.lenOfLongestSubarr(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends