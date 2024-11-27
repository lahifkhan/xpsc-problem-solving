#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        map<char,int> mp;
        for(auto c: s){
            mp[c]++;
        }

        while(n!=0){
            for(auto p : mp){
               if(mp[p.first] !=0){
                cout << p.first;
                mp[p.first]--;
               }
            }
            n--;
        }
        
        cout<<"\n";

        

    }
}

