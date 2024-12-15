#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<int> a(n),b(n);
        for(int i=0; i<n; i++){
            cin>> a[i];
        }
        for(int i=0; i<n; i++){
            cin>> b[i];
        }
        bool f=false;
        int dif = INT_MIN;
        for(int i=0; i<n; i++){
            dif = max(dif,a[i]-b[i]);
            if(a[i]<b[i]){
                f=true;
                break;
            }



        }

        if(f){
            cout <<"NO" <<"\n";
            continue;
        }

        bool c=false;
        for(int i=0; i<n; i++){
            int x=0;
            if(a[i]-dif<0){
                x=0;

            }
            else{
                x=a[i]-dif;
            }
            if(x!=b[i]){
                c=true;
                break;
            }
        }

        if(c){
            cout <<"NO" <<"\n";
        }
        else{
            cout <<"YES" <<"\n";
        }
    }
    return 0;
}