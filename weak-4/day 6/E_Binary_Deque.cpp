#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int n,s;
        cin>> n >> s;
        vector<int> v(n);
        int total=0;
        for(int i=0; i<n; i++){
            cin>> v[i];
            total += v[i];
        }
        if(total<s){
            cout <<-1;
            continue;
        }

        int sum=0;
        int len = 0;

        int l=0,r=0;
        while(r<n){

            sum += v[r];
            if(sum> s){
                sum -=v[l];
                l++;
            }



            if(sum == s){
                len = max(len,r-l+1);

            }
            r++;


        }
        cout << n-len <<"\n";
    }
    return 0;
}