#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin>> v[i];
    }
    sort(v.begin(),v.end());
    ll q;
    cin>> q;
    while(q--){
        ll x;
        cin>> x;
        ll left=0 , right = n-1;
        ll ans=-1;
        while(left<=right){
            ll mid = (left+right)/2;
            if(v[mid]<=x){
                ans = mid;
                left = mid+1;
            }
            else{
                right= mid-1;
            }
            
        }
        cout <<ans+1 <<"\n";
    }


    
    return 0;
}