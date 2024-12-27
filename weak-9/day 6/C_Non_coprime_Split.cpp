#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll findPrime(ll n){
    for(ll i=2; i*i<=n; i++){
        if(n%i==0){
            return i;
        }

    }
    return n;
}
int main(){

    ll t;
    cin>> t;
    while(t--){
        ll l ,r;
        cin>> l>> r;
        if(l<=3 && r<=3) 
        {
            cout << -1 <<"\n";
            continue;
        }
        if(l<r){
            if(r%2 !=0 ){
                r--;
            }
            cout << r/2 <<" " << r/2 <<"\n";
        }
        else if(l==r){
            if(findPrime(l) == l) cout << -1 <<"\n";
            else{
                cout << findPrime(l) << " " << l-findPrime(l) <<"\n";
            }

        }
    }
    return 0;
}