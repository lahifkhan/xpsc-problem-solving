#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int a = v[n-2]-v[1];
        int b= v[n-1]-v[2];
        int c = v[n-3]-v[0];
        int x = min(a,b);
        int y = min(x,c);
        cout << y <<"\n";
    }
    return 0;
}