#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
       long long int n,m,h;
        cin >> n>>m>>h;
        vector<long long int> v(n);
        vector<long long int> c(m);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        for(int i=0; i<m; i++){
            cin >> c[i];
        }
        sort(v.begin(), v.end(), greater<long long int>());
        sort(c.begin(), c.end(), greater<long long int>());
       long long int ans =0;
        for(int i=0; i<min(n,m); i++){
            long long int x = min(v[i],c[i]*h);
            ans = ans+x;

        }
        cout << ans <<"\n";
    }
    return 0;
}