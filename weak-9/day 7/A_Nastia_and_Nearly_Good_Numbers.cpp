#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t;
    cin>> t;
    while(t--){
        ll A,B;
        cin>> A>> B;
       if(B!=1){
        cout<<"YES"<<"\n";
        ll x= A*B;
        cout<<x<<" "<<A<<" "<<(B+1LL)*A<<"\n";
        
    }
    else{
        cout<<"NO"<<"\n";
        
    }
    }
    return 0;
}
