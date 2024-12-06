#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
       long long int n;
        cin>> n;
        vector<long long int> v;
        for(int i=0; i<n; i++){
           long long int x;
            cin>> x;
            v.push_back(x);
        }

        reverse(v.begin(),v.end());
        while( !v.empty() && v.back() ==0){
            v.pop_back();
        }

        if(v.empty()){
            cout << 0 <<"\n";
            continue;
        }
         reverse(v.begin(),v.end());

        

        long long int ans =0;
        int y = v.size();

       for(int i=0; i<y-1; i++){
         if(v[i]==0){
            ans +=1;
         }
         else{
            ans += v[i];
         }
       }

       cout << ans<<"\n";
    }
    return 0;
}