#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> mp;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(v.begin(), v.end());
        int r =0;
        for(int i=0; i<n; i++){
            int val = v[i];
            if(mp[val] !=0){
                r++;
                while(mp[val]>0){
                    mp[val]--;
                    val++;
                }
            }
        }
        cout << r <<"\n";
    }
    return 0;
}