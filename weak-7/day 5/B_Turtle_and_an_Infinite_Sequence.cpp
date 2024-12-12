#include <bits/stdc++.h>

using namespace std;

int  main() {
 

    int t;
    cin >> t;
    while (t--) {
        long long int n, m;
        cin >> n >> m;

        long long int l = max(n - m, 0LL);
       long long int r = n + m;
       long long int ans = 0;

        for (int i = 0; i < 32; i++) {
           long long int c = r / (1LL << i);
            if (c % 2) {
                ans |= 1LL << i;
                continue;
            }
            if (l == 0) {
                if (c) ans |= 1LL << i;
                continue;
            }
           long long int c2 = l / (1LL << i);
            if (c != c2) ans |= 1LL << i;
        }

        cout << ans << '\n';
    }

   return 0;
}
