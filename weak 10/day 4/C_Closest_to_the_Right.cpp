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
        if(k>v[n-1]){
            cout << n+1 <<"\n";
            continue;
        }
    int l=0, r=n-1; 
    int ans =-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(k<=v[mid]){
            r=mid-1;
            ans = mid;
        }
        else{
            l=mid+1;
        }
    }
    cout <<ans+1 <<"\n";

        
    }
   
    return 0;
}