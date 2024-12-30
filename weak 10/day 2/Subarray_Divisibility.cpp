#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll n;
    cin>> n ;
    vector<ll> v(n);

    for(int i=0; i<n; i++){
        cin>> v[i];
    }
  
    map<ll,ll>mp;
    ll cnt=0;
    mp[0]++;
    ll sum =0;
    for(int i=0; i<n; i++){
        sum +=v[i]%n;
        sum = (sum+n)%n;
        cnt += mp[sum];
        mp[sum]++;
    }
    cout << cnt ;

    return 0;
}