#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll n, x;
    cin >> n >> x;

   
    vector<pair<ll, ll>> c(n);
    for (ll i = 0; i < n; i++) {
        cin >> c[i].first;
        c[i].second = i + 1; 
    }

    sort(c.begin(), c.end());

   
    for (ll i = 0; i < n - 2; i++) { 
        ll y = c[i].first;         
        ll l = i + 1;              
        ll r = n - 1;              
        while (l < r) {
            ll sum = y + c[l].first + c[r].first;
            if (sum == x) {
                cout << c[i].second << " " << c[l].second << " " << c[r].second;
                return 0; 
            } else if (sum < x) {
                l++;
            } else {
                r--;
            }
        }
    }

    
    cout << "IMPOSSIBLE";
    return 0;
}
