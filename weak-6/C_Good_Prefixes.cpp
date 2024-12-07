#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<long long int> v(n);
        for(int i=0; i<n; i++){
            cin>> v[i];
        }
        long long int sum=0;
        long long int cnt=0;
       long long int mx = 0;
        for(int i=0; i<n; i++){
            sum = sum+v[i];
            mx = max(v[i],mx);
            long long int x = sum-mx;
            if(x == mx){
                cnt++;
            }
        }

        cout << cnt <<"\n";
    }
    return 0;
}