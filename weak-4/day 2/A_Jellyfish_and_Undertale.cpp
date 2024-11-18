#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int a,b,n;
        cin>> a>> b>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>> v[i];
        }
        int sum =0;

        if( b>1){
            sum = b-1;
            for(int i=0; i<n; i++){
                int x= (v[i]+1);
                int y = min(x,a);
                sum = sum+(y-1);
            }
            cout <<sum+1 <<"\n";
        }
        else{
            for(int i=0; i<n; i++){
                int x= (v[i]+1);
                int y = min(x,a);
                sum = sum+(y-1);
            }
            cout <<sum+1 <<"\n";
        }
    }
    return 0;
}