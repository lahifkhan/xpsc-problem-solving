#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<int> v(n);
        int mn=INT_MAX;
        int ind=0;
        for(int i=0; i<n; i++){
            cin>> v[i];
        }

        for(int i=0; i<n; i++){
            int x = 0;
            if(i+1<n){
                x = max(x,abs(v[i+1]-v[i]));
            }
            if(i-1>=0){
                x = max(x,abs(v[i]-v[i-1]));
            }
            mn= min(x,mn);
        }
        cout << mn<<"\n";
        
    }
    return 0;
}