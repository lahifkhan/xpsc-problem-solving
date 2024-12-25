#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin>> v[i];
        }
        ll g1 =0, g2=0;
        for(int i=0; i<n; i+=2){
            g1 =__gcd(g1,v[i]);
        }
        for(int i=1; i<n; i+=2){
            g2 =__gcd(g2,v[i]);
        }

        bool find =true;
        for(int i=1; i<n; i+=2){
           if(v[i]%g1==0){
            find=false;
            break;
           }
        }
        if(find){
            cout << g1 <<"\n";
        }
        else{
            bool ok=true;
            for(int i=0; i<n; i+=2){
                if(v[i]%g2==0){
                    ok=false;
                    break;
                }
            
             }
             if(ok){
                cout << g2 <<"\n";
             }
             else{
                cout << 0 <<"\n";
             }

        }

    }
    return 0;
}