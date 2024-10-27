#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c;
    cin >> a>>b>>c;
    bool find= false;
    for(int i=1; i<1000; i++){
       long long  int r= i*c;
        if(r>=a && r<=b){
            cout<<r ;
            find =true;
            return 0;
        }
    }
    if(find==false){
        cout<<"-1";
    }
    return 0;
}