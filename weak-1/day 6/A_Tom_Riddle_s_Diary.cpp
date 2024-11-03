#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    map<string,int> mp;
    while(t--){
        string s;
        cin >> s;
        if(mp[s] > 0){
            cout <<"YES" <<"\n";
            mp[s]++;
        }
        else{
            cout <<"NO"<<"\n";
            mp[s]++;
        }


    }
    return 0;
}