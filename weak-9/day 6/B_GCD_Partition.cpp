#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t;
    cin>> t;
    while(t--){
        ll n;
        cin>> n;
        vector<ll> v(n);
        for(ll i=0; i<n; i++){
            cin>> v[i];
        }

        vector<ll> pre(n);
        pre[0] = v[0];
        for(ll i=1; i<n; i++){
            pre[i] = v[i]+pre[i-1];
        }

        ll total  = pre[n-1];
        ll mxGcd = 0;
        for(ll i=0; i<n-1; i++){
            ll x = __gcd(pre[i], total-pre[i]);
            mxGcd= max(mxGcd,x);



        }
        cout <<mxGcd <<"\n";
    }
    return 0;
}