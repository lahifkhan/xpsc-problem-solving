#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    cin>> n>>m;
    vector<int> v(n);
    vector<int> v2(m);
    for(int i=0; i<n; i++){
        cin>> v[i];
    }
    for(int i=0; i<m; i++){
        cin>> v2[i];
    }
    multiset<int> ml;
    for(int i=0; i<n; i++){
        ml.insert(v[i]);
    }
    for(int i=0; i<m; i++){
        ml.insert(v2[i]);
    }

    for(auto val : ml){
        cout << val<<" ";
    }
    
    return 0;
}