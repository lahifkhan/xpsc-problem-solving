#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m,k;
    cin>> n>> m>> k;
    vector<int> v(m);
    for(int i=0; i<m; i++){
        cin>>v[i];
    }

    int f;
    cin>> f;
    int c=0;
    for(int i=0; i<m; i++){
        int x =  __builtin_popcount(v[i] ^ f);
        if(x<=k){
            c++;
        }
    }
    cout << c;
    return 0;
}