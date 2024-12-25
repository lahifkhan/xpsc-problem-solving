#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll n,a,b,p,q;
    cin>> n>> a>> b>> p>> q;
    ll divsible_by_a = n/a;
    ll divsible_by_b = n/b;
    ll lc = ((a/(__gcd(a,b)))*b);
    ll divsible_by_both = n/lc;
    if(p<q){
        divsible_by_a = divsible_by_a-divsible_by_both;
        cout << (divsible_by_a*p)+(divsible_by_b*q);
    } 
    else{
        divsible_by_b = divsible_by_b-divsible_by_both;
        cout << (divsible_by_a*p)+(divsible_by_b*q);
    }

    
    return 0;
}