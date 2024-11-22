#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,u;
    cin>> n>> u;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int l=0;
    int r=0;
   long long int count =0;
    int uni=0;
    map<int,int> mp;

    while(r<n){
        if(mp[a[r]]==0){
            uni++;
        }
        mp[a[r]]++;

        while(uni>u){
            mp[a[l]]--;
            if(mp[a[l]]==0){
                uni--;
            }
            l++;
        }
        count += r-l+1;
        r++;
    }
    cout << count;
    return 0;
}