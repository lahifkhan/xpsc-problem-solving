#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t ;
    while(t--){
        int n,k;
        cin>>n>>k;
        char s[n+5];
        for(int i=0; i<n; i++){
            cin >> s[i];
        }


        int l=0,r=0;
        int count =0;
        int ans= INT_MAX;
        while(r<n){
            if(s[r]=='W'){
                count++;
            }
            if(r-l+1==k){
                ans= min(ans,count);
                if(s[l]=='W'){
                    count--;
                }
                l++;
                r++;
            }
            else{
                r++;

            } 
        }
        cout<< ans<<"\n";
    }
    return 0;
}