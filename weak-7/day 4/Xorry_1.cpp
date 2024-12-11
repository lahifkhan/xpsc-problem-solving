#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int n;
        cin>>n;

        // int x = __lg(n);
        // int y=(1<< x);
        // int a = n^y;
        // int b= y;
        // cout << a << " " << b <<"\n";
       vector<pair<int,int>> p;
        int ans = INT_MAX;
        int v1=0,v2=0;
        for(int i=0; i<n; i++){
            int a =i;
            int b= i^n;
            if(b <= n){
               if(b>a){
                int d= b-a;
                if(ans>d){
                    v1=a;
                    v2 =b;
                    p.push_back({v1,v2});
                }
               }

            }

        }
        cout << p.size()<<"\n";
    }
    return 0;
}