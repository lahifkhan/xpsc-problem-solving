#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        vector<int >v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        for(int i=0; i<n; i++){
            int x; 
            cin >> x;
            for(int j=0; j<x; j++){
                char c;
                cin >> c;
                if(c=='D'){
                    if(v[i]==9){
                        v[i]=0;
                    }
                    else{
                        v[i]++;
                    }
                }
                else if(c=='U'){
                    if(v[i]==0){
                        v[i] =9;
                    }
                    else{
                        v[i]--;
                    }
                }
            }
        }
        for(auto z : v){
            cout <<z <<" ";
        }
        cout <<"\n";
    }
    return 0;
}