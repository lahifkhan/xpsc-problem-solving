#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end()); // Ensure the array is sorted

    int q;
    cin >> q;
    vector<ll> a(q);
    for (int i = 0; i < q; i++) {
        cin >> a[i];

        // Binary search for largest index where v[mid] <= a[i]
        ll left = 0, right = n - 1;
        ll ans = -1;
        while (left <= right) {
            ll mid = (left + right) / 2;
            if (v[mid] <a[i]) {
                ans = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        // Find the smallest element > a[i] using upper_bound
        auto it = upper_bound(v.begin(), v.end(), a[i]);
        ll ans2 = -1;
        if (it != v.end()) {
            ans2 = *it;
        }

        // Print the result
        if (ans != -1) {
            cout << v[ans] << " ";
        } else {
            cout << "X ";
        }
        if (ans2 != -1) {
            cout << ans2 << "\n";
        } else {
            cout << "X\n";
        }
    }

    return 0;
}
