
#include <bits/stdc++.h>
using namespace std;
#define ll long long int



int  main(){

    ll t;
    cin >> t;
    while (t--){
        ll a, b;
    cin >> a >> b;
    vector<ll> s(a);
    for (ll i = 0; i < a; ++i) {
        cin >> s[i];
    }
    
    vector<ll> c(a + 1, 1);
    for (ll i : s) {
        c[i] = 0;
    }
    for(ll i = 0; i < a + 1; ++i) {
        if(c[i] == 1) {
            s.push_back(i);
            break;
        }
    }
    ll d = (b * a) % (a + 1);
    vector<ll> ans;
    
    for(ll i = 0; i < a; ++i) {
        ans.push_back(s[d]);
        d = (d + 1) % (a + 1);
    }
    for(ll i = 0; i < a; ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;

    }
    return 0;

}