#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
     int t;
    cin>>t;
    while(t--) 
    {
      int n;
      cin>>n;
      int ar[n+5][n];
      for(int i = 1; i<=n; i++)
      {
          for(int j=1; j<n; j++)
          {
             cin>>ar[i][j];
          }
      }
      map < int , int>mp;
      map< int , int> m;
      for(int i=1; i<=n; i++){
         mp[ar[i][n-1]] = i;
         m[ar[i][n-1]]++;
      }
      int index =0, val;
      for(auto u:m) {
        if(u.second==1) index = u.first;
        else val = u.first;
      }
     
       for(int i=1; i<n; i++)
       {
          cout<<ar[mp[index]][i]<<" ";
       }
       cout<<val<<endl;
    }
    
}