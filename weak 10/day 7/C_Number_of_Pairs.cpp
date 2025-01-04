#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
       ll n, l, r;
    cin >> n >> l >> r;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll ans = 0;
    for (ll i = 0; i < n; i++) {
      ll up = upper_bound(a.begin(), a.end(), r - a[i]) - a.begin();
        ll down = lower_bound(a.begin(), a.end(), l - a[i]) - a.begin();


        if (i < up && i >= down) down++;
        
        if (up > down) {
            ans += (up - down);
        }
    }

    cout << ans / 2 << "\n";
    }

    return 0;
}
