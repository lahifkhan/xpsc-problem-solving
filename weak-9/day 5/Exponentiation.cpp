#include<bits/stdc++.h>
using namespace std;
const int mod= 1e9+7;
int power(int n, int x){
    int ans = 1 %mod;
    while(n){
        if(n&1){
            ans = (1LL* ans%mod * x%mod)%mod;
        }
        x = (1LL*x%mod * x%mod)%mod ;
        n >>=1;
    }
    return ans;

}
int main(){

    int t;
    cin>> t;
    while(t--){
        int x,n;
        cin>> x>> n;
        cout << power(n,x)<<"\n";
      
    }
    return 0;
}