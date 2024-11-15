#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>> a[i];
        }

        int l=0;
        int r=0;
        int count =0;
        bool ans =false;
        while(l<n){

            if(a[l] >0){
                l++;
                ans =false;
            }
            else if(a[l]==0){
                l++;
            }
            else{
                a[l]= a[l]*(-1);
                if(ans ==false){
                    count++;
                }
                l++;
                ans =true;
                
                

            }

        }
        long long int sum=0;
        for(int i=0; i<n; i++){
             sum = sum+a[i];
        }
        cout << sum <<" " << count <<"\n";

         
            }
    return 0;
}