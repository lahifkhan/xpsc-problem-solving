#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int n;
    ll s;
    cin >> n >> s;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int l = 0, r = 0;
    int ans = INT_MAX;
    ll sum = 0;
    bool found = false;

    while (r < n) {
        sum += v[r];
        
        
        while (sum >= s) {
            found = true;
            ans = min(ans, r - l + 1);
            sum -= v[l];
            l++;
        }
        r++;
    }

    if (found) {
        cout << ans;
    } else {
        cout << -1;
    }

    return 0;
}
