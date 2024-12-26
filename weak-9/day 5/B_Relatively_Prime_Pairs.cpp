#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll l,r;
    cin>> l>> r;
    cout <<"YES" <<"\n";
    for(int i=l; i<r+1; i=i+2){
        cout << i << " " << i+1 <<"\n";
    }
    return 0;
}