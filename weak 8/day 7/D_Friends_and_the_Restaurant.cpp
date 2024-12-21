#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<int> v(n,0);
        for(int i=0; i<n; i++){
            int x;cin>> x;
            v[i] -=x;
        }
         for(int i=0; i<n; i++){
            int x;cin>> x;
            v[i] +=x;
        }
        sort(v.begin(),v.end(),greater<int>());

        int l=0;
        int r= n-1;
        int ans =0;
        while(l<r){
            if(v[l]>-1 && v[r]>-1){
                ans++;
                l++;
                r--;
            }
           else if(v[l]<0 && v[r] <0){
                break;
            }
            else if(v[l]>-1){
                if(v[l]>=abs(v[r])){
                    ans++;
                    l++;
                    r--;

                }
                else{
                    r--;
                }
            }


        }
        cout << ans<<"\n";

    }
    return 0;
}