#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<int> v(n+1);
        for(int i=1; i<=n; i++){
            cin>> v[i];
        }
        bool f=false;
        
        for(int i=1; i<=n; i++){
            int x= v[i];
            if(i== v[x]){
                f=true;
                break;
            }
        }

        if(f){
            cout <<2 <<"\n";
        }
        else{
            cout << 3 <<"\n";
        }
    }
    return 0;
}