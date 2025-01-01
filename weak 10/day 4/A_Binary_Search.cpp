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
       
    int l=0, r=n-1; 
    int ans =-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(k==v[mid]){
            
            ans = mid;
            break;
        }
        else if(k>v[mid]){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    if(ans !=-1){
        cout <<"YES" <<"\n";
    }
    else{
        cout <<"NO" <<"\n";
    }

        
    }
   
    return 0;
}