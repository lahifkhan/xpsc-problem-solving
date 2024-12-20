#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<int> v(n);
        int cnt1=0,cnt0=0;
       
        for(int i=0; i<n; i++){
            cin>> v[i];
            if(v[i]==1){
                cnt1++;
            }
            else if(v[i]==0){
                cnt0++;
            }
       }
       long long int result=0;
       result = cnt1*pow(2,cnt0);
       cout << result<<"\n";
    
    }
    return 0;
}