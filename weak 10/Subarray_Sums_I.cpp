#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll x;
    cin >> n >> x;

    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

  
    ll sum = 0;
    int count = 0, l = 0;

    for (int r = 0; r < n; r++) {
        
        sum += a[r];

       
        while (sum > x) {
            sum -= a[l];
            l++;
        }

       
        if (sum == x) {
            count++;
        }
    }


    cout << count << endl;

    return 0;
}
