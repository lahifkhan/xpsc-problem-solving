#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<int> v(n);
        int total= 0;
        for(int i=0; i<n; i++){
            cin>> v[i];
            total =total ^ v[i];
        }

        int mn =total;
        for(int i=0; i<n; i++){
            mn = min(mn,total^v[i]);
        }
        cout << mn<<"\n";
    }
    return 0;
}