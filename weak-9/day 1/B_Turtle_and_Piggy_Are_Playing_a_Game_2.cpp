#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
       vector<int> v(n);
       for(int i=0; i<n; i++){
        cin>> v[i];
       }
       int l=0, r= n-1;
       bool tr =true;
       sort(v.begin(),v.end());
       while(l<r && v.size()>1){
        if(tr){
            l++;
            
            tr=false;

        }
        else{
            r--;
            tr=true;
        }

       }
       cout << v[l] <<"\n";
    }
    return 0;
}