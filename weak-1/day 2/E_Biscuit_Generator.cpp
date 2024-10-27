#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,t;
    cin >> a>>b>>t;
     int finalResult=0;
    if(a>t){
        cout <<0;
    }
    else{
        for(int i=1; ; i++){
            int r= a*i;
            if(r<=t){
                finalResult +=b;

            }
            else{
                cout<<finalResult;
                break;
            }
        }
    }
    return 0;
}