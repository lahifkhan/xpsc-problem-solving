#include<bits/stdc++.h>
using namespace std;
#define ll long long int
long long int inv(vector<ll>a,ll n){
   long long  int ans=0,  one=0;
    for(int i=0; i<n; i++){
        if(a[i]==1){
            one++;
        }
        else{
            ans +=one;
        }

    }
    return ans;
}
int main(){

    int t;
    cin>> t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin>> v[i];
        }

        ll ans =inv(v,n);
        int id=-1;
        for(int i=0; i<n; i++){
            if(v[i]==0){
                id =i;
                v[i]=1;
                break;

            }
        }
        ll ans2 = inv(v,n);
        ans = max(ans,ans2);
        if(id !=-1){
            v[id]=0;
        }

        for(int i=n-1; i>=0; i--){
            if(v[i]==1){
                v[i]=0;
                break;
            }
        }
        ll ans3= inv(v,n);
        ans = max(ans,ans3);
        cout << ans<<"\n";

    }
    return 0;
}