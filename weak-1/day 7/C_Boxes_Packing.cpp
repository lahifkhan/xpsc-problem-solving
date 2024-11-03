#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    vector<int> v(n);
    map<int,int> mp;
    for(int i=0; i<n; i++){
        cin >> v[i];
        mp[v[i]]++;
    }
    int mx = INT_MIN;

    for(auto it=mp.begin(); it!=mp.end(); it++){
        mx= max(it->second,mx);

    }
    cout << mx;
    



    return 0;
}