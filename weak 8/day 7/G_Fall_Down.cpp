#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;

        char a[n][m];
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        char ans[n][m];
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < m; j++) {
                ans[i][j] = '.';
            }
        }

        for (ll i = 0; i < m; i++) {
            ll sum = 0;
            for (ll j = 0; j < n; j++) {
                if (a[j][i] == '*') {
                    sum++;
                } else if (a[j][i] == 'o') {
                    ans[j][i] = 'o';
                    for (ll k = 1; k <= sum; k++) {
                        ans[j - k][i] = '*';
                    }
                    sum = 0;
                }
            }

           
            if (sum > 0) {
                for (ll k = 1; k <= sum; k++) {
                    ans[n - k][i] = '*';
                }
            }
        }

        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < m; j++) {
                cout << ans[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}
