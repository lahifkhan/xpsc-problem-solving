#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0; i<n; i++){
            cin>> v[i];
            mp[v[i]]++;
        }

        int max_feq = 0;
        for(auto p: mp){
            max_feq = max(max_feq,p.second);
        }

        int ans =0;
        while(max_feq<n){
            int rem = n-max_feq;
            int add = max_feq;
            ans++;
            ans += min(rem,add);
            max_feq += min(rem,add);
        }
        cout << ans<<"\n";

 }
    return 0;
}