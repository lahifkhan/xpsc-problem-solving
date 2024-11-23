#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        string s;
        cin >> s;

        vector<long long int> prefix(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            prefix[i + 1] = prefix[i] + a[i];
        }

      long long int ans = 0;
        int l = 0, r = n - 1;

        
        while (l < r) {
           
            while (l < n && s[l] != 'L') {
                l++;
            }
            
            while (r >= 0 && s[r] != 'R') {
                r--;
            }

          
            if (l < r) {
               
                ans += prefix[r + 1] - prefix[l];
               
                l++;
                r--;
            }
        }
        cout << ans<<"\n";

        
    }

    return 0;
}
