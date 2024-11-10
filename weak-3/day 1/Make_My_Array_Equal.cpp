#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        map<int,int> mp;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            if(x !=0){
                mp[x]++;
            }
        }   
        if(mp.size()==1 || mp.size()==0){
            cout <<"YES"<<"\n";
        }
        else{
            cout <<"NO" <<"\n";
        }
    }
    return 0;
}