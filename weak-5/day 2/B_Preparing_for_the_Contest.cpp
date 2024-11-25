#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int n,k;
        cin>> n>> k;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            v[i]=i+1;
        }
        reverse(v.begin(),v.end());

        if(k==0){
            for(auto c: v){
                cout<< c<<" ";
            }
            cout <<"\n";
            continue;
        }

        vector<int> ans;
        int f =1;
        for(int i=n-1; i>=0; i--){
            if(f>k){
                break;
            }
            ans.push_back(v[i]);
            f++;

        }
        int x= n-k;
        for(int i=0; i<x; i++){
            ans.push_back(v[i]);
        }

        for(auto c: ans){
            cout << c<<" ";
        }
        cout <<"\n";

    }
    return 0;
}