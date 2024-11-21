#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n;
    ll k;
    cin>> n>> k;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>> a[i];

    }

    ll ans= 0;
    multiset<ll>ml;
    ll l=0,r=0;
    while(r<n){
        ml.insert(a[r]);
        if(*ml.rbegin()-*ml.begin() <=k ){
            ans += r-l+1;
        }

        else{
            while(l<=r){
                ll mx = *ml.rbegin();
                ll mn = *ml.begin();
                if(mx-mn<=k){
                    break;
                }
                ml.erase(ml.find(a[l]));
                l++;
            }
            if(*ml.rbegin()-*ml.begin() <=k ){
            ans += r-l+1;
        }

        }
        r++;

    }
    cout << ans<<"\n";

    return 0;
}