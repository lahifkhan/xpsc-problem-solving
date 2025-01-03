#include <bits/stdc++.h>
using namespace std;

int main() {
    int caseNumber = 1; // Keep track of the case number
    while (true) {
        int n, q;
        cin >> n >> q;
        if (n == 0 && q == 0) {
            break;
        }

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        cout << "CASE# " << caseNumber << ":\n";
        caseNumber++; // Increment the case number for the next test case

        for (int i = 0; i < q; i++) {
            int x;
            cin >> x;

            // Binary search for x
            int left = 0, right = n - 1;
            int ans = -1; // Store the position if found
            while (left <= right) {
                int mid = (left + right) / 2;
                if (v[mid] == x) {
                    ans = mid;
                    right = mid - 1; // Find the first occurrence
                } else if (v[mid] > x) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }

            // Output the result for the current query
            if (ans != -1) {
                cout << x << " found at " << ans + 1 << "\n";
            } else {
                cout << x << " not found\n";
            }
        }
    }

    return 0;
}
