#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
   
    int t;    
      cin>>t;;
    while(t--){
        int n;
        cin>>n;
        ll c;                  
        cin>>c;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            v[i]= v[i]+(i+1);
        }
 
        sort(v.begin(),v.end());
        int ans=0;
        ll sum=0;
        for(int i=0;i<n;i++){
            if(sum+v[i]>c)break;
            sum+=v[i];
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}