#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t;
    cin>> t;
    while(t--){
         int n,q;
        cin>>n>>q;
        vector<ll>a(n+1);
        vector<ll>pref(n+1);
        vector<ll>maxi(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            pref[i] = pref[i-1]+a[i];
            maxi[i] = max(maxi[i-1],a[i]);
        }
        for(int i=0;i<q;i++){
            ll ans=0;
            ll x;
            cin>>x;
            int k = upper_bound(maxi.begin(),maxi.end(),x) - maxi.begin() -1;
            if(k>=0){
                ans = pref[k];
            }
            cout<<ans<<" ";
        }
        cout<<"\n";
    }

    
    return 0;
}