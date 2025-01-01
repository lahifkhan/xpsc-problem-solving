#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>> n>> q;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>> v[i];
    }
    while(q--){
        int k;
        cin>> k;
        if(k<v[0]){
            cout << 0 <<"\n";
            continue;
        }
    int l=0, r=n-1; 
    int ans =-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(k>=v[mid]){
            l=mid+1;
            ans = mid;
        }
        else{
            r=mid-1;
        }
    }
    cout <<ans+1 <<"\n";

        
    }
   
    return 0;
}