#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
   while(t--){
      long long int n,k,q;               
      cin>>n>>k>>q;
 
      vector<long long int> a(n);
      for(int i=0;i<n;i++){
         cin>>a[i];
      }
 
      long long int ans=0;
 
      long long int cons=0;
      for(int i=0;i<n;i++){
         if(a[i]<=q){
            cons++;
            if(i==n-1 or a[i+1]>q){
               if(cons>=k){
                  long long int x=cons-k+1LL;
                  long long int add=(x*(x+1LL))/2LL;
                  ans+=add;
               }
               cons=0;
            }
         }
      }
 
      cout<<ans<<endl;
   }
   return 0;
}