#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>> n;
        if(n%2 !=0){
            cout <<"NO" <<"\n";
            continue;
        }
        cout <<"YES"<<"\n";

        int v= n/2;
        for(int i=1; i<=v; i++){
            if(i%2 !=0){
                cout << "AA";
            }
            else{
                cout <<"BB";
            }
        }
        cout <<"\n";
    }
    return 0;
}