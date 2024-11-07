#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        int mn = 1;
        int mx = n;
        int i=0,j=n-1;
        bool ans =false;
        int l,r;
        while(i<j){
            if(v[i]==mn){
                i++;
                mn++;
            }
            else if(v[i]==mx){
                i++;
                mx--;
            }
            if(v[j]==mn){
                j--;
                mn++;
            }
            else if(v[j]==mx){
                j--;
                mx--;
            }
            if((v[i]!=mn && v[i] !=mx) && (v[j] !=mn &&v[j] !=mx)){
                l=i+1;
                r= j+1;
                ans =true;
                break;
                
            }
        }
        if(ans){
            cout <<l <<" " <<r <<"\n";
        }
        else {
            cout <<"-1" <<"\n";
        }
    }
    return 0;
}