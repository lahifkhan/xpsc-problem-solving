#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<long long int> v(n);
        bool allodd= true, alleven=true;
        int even=0, odd=0;
      long long  int mxev = INT_MIN;
      long long  int mxod = INT_MIN;

        for(int i=0; i<n; i++){
            cin>> v[i];
            if(v[i]%2==0){
                allodd =false;
                even++;
                mxev = max(mxev,v[i]);
            }
            else{
                alleven =false;
                odd++;
                mxod= max(mxod,v[i]);
            }
        }

        if(allodd || alleven){
            cout <<"0" <<"\n";
            continue;
        }

        

        sort(v.begin(),v.end());
        for(int i=0; i<n; i++){
            if(v[i] %2==0){
                if(mxod>v[i]){
                    mxod+=v[i];
                }
               
            }
        }

        if(mxod<mxev){
            cout << even+1<<"\n";
        }
        else{
            cout << even<<"\n";
        }
    }
    return 0;
}