#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>> v[i];
        }

        long long int ans=0;

        for(int i=12; i>=0; i--){
            bool one=false,zero =false;
            for(int j=0; j<n; j++){
                if((v[j]>>i)&1){
                    one=true;
                }
                else{
                    zero=true;
                }
            }
            if(one && zero){
                ans += (1LL<<i);
            }
        }
        cout << ans <<"\n";

       
    }
    return 0;
}