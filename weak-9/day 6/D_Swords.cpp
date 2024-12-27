#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll mx = INT_MIN;
    int n;
    cin>> n;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin>> v[i];
        mx = max(mx,v[i]);
    }

    ll gc = 0;
    ll sum =0;
    for(int i=0; i<n; i++){
        if(v[i]<mx){
            ll x = mx-v[i];
            sum += x;
            gc = __gcd(gc,x);

        }
    }
    cout << sum/gc <<" "  << gc ;
    return 0;
}