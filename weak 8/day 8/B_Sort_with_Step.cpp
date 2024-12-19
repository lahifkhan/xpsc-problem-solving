#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int n,k;
        cin>> n>> k;
        vector<int> v(n+1);
        bool sort=true;
        for(int i=1; i<=n; i++){
            cin>> v[i];
            if(v[i]!=i){
                sort = false;

            }

        }
        if(sort){
            cout <<0 <<"\n";
            continue;
        }
        int cnt=0;
        for(int i=1; i<=n; i++){
            if(abs(v[i]-i) %k){
                cnt++;
            }
        }
        if(cnt>2){
            cout <<"-1" <<"\n";
        }
        else if(cnt==2) cout << 1 <<"\n";
        else cout <<0<<"\n";
    }
    return 0;
}