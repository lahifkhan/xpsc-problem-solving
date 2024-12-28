#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t;
    cin>> t;
    while(t--){
        ll a,b;
        cin>> a>> b;
        if(a*2>b){
            cout <<-1 <<" " <<"-1" <<"\n";
        }
        else{
            cout << a <<" " << a*2 <<"\n";
        }
    }
    return 0;
}