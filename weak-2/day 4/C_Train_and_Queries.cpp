#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >>t ;
    while(t--){
        map<int,set<int>>mp;
        int n,x;
        cin >> n>> x;
        for(int i=0; i<n; i++){
            int a;
            cin >>a;
            mp[a].insert(i);
        }
        for(int i=0; i<x; i++){
            int c,d;
            cin >> c >> d;
            if(mp.find(c) == mp.end() || mp.find(d) ==mp.end()){
                cout <<"NO" <<"\n";
                continue;
            }
            int starting = *mp[c].begin();
            int ending = *mp[d].rbegin();
            if(starting< ending){
                cout <<"YES" <<"\n";
            }
            else{
                cout <<"NO" <<"\n";
            }
        }

    }
    return 0;
}