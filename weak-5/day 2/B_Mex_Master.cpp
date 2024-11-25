#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<int> v(n);
        int mx= INT_MIN;
        int cnt0=0,cnt1=0;
        for(int i=0; i<n; i++){
            cin>> v[i];
            if(v[i]==0){
                cnt0++;
            }
            else{
                cnt1++;
            }
            mx = max(mx,v[i]);
        }

        if(cnt1>=cnt0-1){
            cout <<0 <<"\n";
            
        }
        else{
            if(mx==1){
                cout <<2 <<"\n";
            }
            else{
                cout <<1 <<"\n";
            }
        }



    }
        
    return 0;
}