#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll n;
    cin>> n;
    vector<ll>v(n);
    for(int i=0; i<n; i++){
        cin>> v[i];
    }
    vector<ll> pre(n+1);
    pre[0]=v[0];
    for(int i=1; i<n; i++){
        pre[i] = pre[i-1]+v[i];
    }
    map<ll,ll> mp;
    for(int i=0; i<n; i++){
        mp[pre[0]] =i+1;
    }

    sort(pre.begin(),pre.end());

    ll q;
    cin>> q;
    while(q--){
        ll x;
        cin>> x;
        auto idx = lower_bound(pre.begin(),pre.end(),x);
        cout << (idx-pre.begin()) <<"\n";

    }

    
    return 0;
}