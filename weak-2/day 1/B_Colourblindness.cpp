#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >>n;
        char s[n];
        char s2[n];
        for(int i=0; i<n; i++){
            cin >> s[i];
            if(s[i]=='G'){
                s[i]='B';
            }
        }
        for(int i=0; i<n; i++){
            cin >> s2[i];
            if(s2[i]=='G'){
                s2[i]='B';
            }
        }

       bool ans= true;
       for(int i=0; i<n; i++){
        if(s[i] !=s2[i]){
            ans=false;
            break;
        }
       }
       if(ans){
        cout <<"YES" <<"\n";
       }
       else{
        cout <<"NO" <<"\n";
       }
    }
    return 0;
}