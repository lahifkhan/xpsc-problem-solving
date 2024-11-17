#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>> x>>y;
        if(x<3 && y<3){
            cout << x <<"\n";
        }
       else{
        cout <<x%3 <<"\n";
       }
    
}
return 0;
}