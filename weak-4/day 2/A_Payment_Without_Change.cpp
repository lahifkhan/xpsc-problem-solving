#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int a,b,n,s;
        cin>> a>> b>> n>> s;
        int x= min(a,s/n);
        int r= s- x*n;
        if(r<=b){
            cout <<"YES"<<"\n";
        }
        else{
            cout <<"NO" <<"\n";
        }
    }
    return 0;
}