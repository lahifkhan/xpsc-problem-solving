#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t;
    cin>> t;
    while(t--){
        int n;
        ll s;
        cin>> n>> s;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>> a[i];
        }
        vector<int> h(n);
        for(int i=0; i<n; i++){
            cin>> h[i];
        }
        ll sum =0;
        int l=0;
        int r=0;
        int len =0;

        while(r<n){
            sum += a[r];

            if(l!=r && h[r-1] % h[r] !=0){
                while(l!=r){
                    sum -=a[l];
                    l++;
                }
            }

            while(sum>s){
                sum -=a[l];
                l++;
            }
            len = max(len,r-l+1);
            r++;
        }
        cout << len<<"\n";
    }
    return 0;
}