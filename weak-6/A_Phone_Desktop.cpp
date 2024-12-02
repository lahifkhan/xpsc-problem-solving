#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
       long long int x,y;
        cin>> x>> y;
        long long ans = ((y+1)/2);
        long long int rem = 0;
        if(y%2 !=0){
            rem = (y/2)*7 +11;
        }
        else{
            rem = (y/2)*7;
        }

        if(x <= rem){
            cout << ans <<"\n";
        }
        else{
            long long int r= x-rem;
            cout <<((r+14)/15) +ans <<"\n";
        }
    }
    return 0;
}