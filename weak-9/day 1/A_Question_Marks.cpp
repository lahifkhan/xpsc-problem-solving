#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        string s;
        cin>> s;
        map<char,int>mp;
        for(auto x: s){
            if(x=='?') continue;
            mp[x]++;
        }
        int ans=0;
        for(auto p:mp){
            ans +=min(n,p.second);

        }
        cout << ans<<"\n";
    }
    return 0;
}