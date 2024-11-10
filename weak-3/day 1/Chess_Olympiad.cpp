#include<bits/stdc++.h>
using namespace std;
int main(){

    int x,y,z;
    cin>> x>>y>>z;
    float ans = 0.5*y+z;
    if(ans>=2){
        cout <<"No" <<"\n";
    }
    else{
        cout <<"Yes" <<"\n";
    }
    return 0;
}