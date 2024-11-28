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
        if(v.size()==2){
            cout<< v[1]-v[0]<<"\n";
            continue;

        }

       long long int x= v[v.size()-1];
        v.pop_back();
        int l=0, r= v.size()-1;
        while(l<r){
            v[r] = v[r]-v[l];
            l++;
        }

        cout << x-v[r] <<"\n";
        
           }
    return 0;
}