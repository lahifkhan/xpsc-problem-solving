#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        map<int,int> mp;
        for(int i=0; i<n; i++){
            int x;
            cin>> x;
            mp[__lg(x)]++;
        }

      long long  int sum=0;
        for(auto p: mp){
            int y= p.second;
            if(p.second>1){
                sum += (y*(y-1))/2;
            }
        }
        cout << sum <<"\n";
    }
    return 0;
}