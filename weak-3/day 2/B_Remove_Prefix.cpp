#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        set<int> s;
        for(int i=0; i<n; i++){
            cin >> v[i];
            s.insert(v[i]);
        }
        if(n==1){
            cout << 0<<"\n";
            continue;
        }
        map<int,int> mp;
        for(auto val : s){
            mp[val] =2;
        }
       
        int index;
        bool ans = false;
        for(int i=n-1; i>=0; i--){
            if(mp[v[i]] ==2){
                mp[v[i]]=0;
            }
            else if(mp[v[i]] == 0){
                ans =true;
                index= i;
                break;
            }
        }
        if(ans){
            cout << index+1 <<"\n";
        }
        else{
            cout <<0 <<"\n";
        }
    }
    return 0;
}