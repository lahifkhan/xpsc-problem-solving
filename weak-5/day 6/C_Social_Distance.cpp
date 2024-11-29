#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
 
int main()
{
 ll t;
 cin>>t;
 while(t--)
 {
   ll n,i,k,sz,j;
   string s;
   vector<ll> v;
   cin>>n>>k;
   cin>>s;
 
   for(i=0;i<n;i++)
   {
      if(s[i]=='1') v.pb(i+1);
   }
   ll cnt=0;
   if(v.size()==0)
   {
      for(i=1;i<=n;i+=(k+1))
       cnt++;
   }
 
   else{
     for(i=v[v.size()-1]+(k+1);i<=n;i+=(k+1))
     {
      cnt++;
     }
 
     for(i=1;i<=(v[0]-(k+1));i+=(k+1))
     {
      cnt++;
     }
 
     ll ft,sd,dif;
     for(i=0;i<v.size()-1;i++)
     {
      ft=v[i];
      sd=v[i+1];
      for(j=ft+(k+1);j<=sd-(k+1);j+=(k+1))
      {
         cnt++;
      }
     }
   }
   cout<<cnt<<endl;
}
 return 0;
}