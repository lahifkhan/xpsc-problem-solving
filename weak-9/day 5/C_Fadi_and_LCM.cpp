#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    
    ll x;
        cin >> x;
        vector<ll> lcm;
        ll i = 2;
        while (i * i <= x)
        {
            if (x % i == 0)
            {
                ll cur = 1;
                while (x % i == 0)
                {
                    x /= i;
                    cur *= i;
                }
                lcm.push_back(cur);
            }
            i++;
        }

        if (x > 1)
        {
            lcm.push_back(x);
        }
        ll n = lcm.size();
        ll ans_A = 1e18;
        ll ans_B = 1e18;

        ll k = 0;
        while (k < (1 << n))
        {
            ll a = 1;
            ll b = 1;

            ll j = 0;
            while (j < n)
            {
                if ((k >> j) & 1)
                {
                    a *= lcm[j];
                }
                else
                {
                    b *= lcm[j];
                }
                j++;
            }

            if (max(a, b) < max(ans_A, ans_B))
            {
                ans_A = a;
                ans_B = b;
            }
            k++;
        }
        cout << ans_A << " " << ans_B <<"\n";
    return 0;
}