#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int n;

    ll s;
    cin >> n>> s;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin>> v[i];
    }
    ll sum =0;
    int ans =0;
    int l=0, r=0;
    while(r<n){
        sum +=v[r];
        if(sum <=s){
            ans = max(ans,r-l+1);

        }
        else{
            sum -=v[l];
            l++;
        }
        r++;
    }
    cout << ans;
        return 0;
}