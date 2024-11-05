#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    cin >> n >>m;
    vector<int> v(n) , count(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    set<int> s;
    for(int i=n-1; i>=0; i--){
        s.insert(v[i]);
        count[i]=s.size();
    }

    while(m--){
       int x;
       cin >> x;
       cout << count[x-1] <<"\n";
       
    }
    return 0;
}