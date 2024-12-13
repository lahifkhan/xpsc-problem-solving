#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int n;
        cin>>n;
        long long int ans =n;
        int l = __lg(n);
        cout << (1<<l)-1 <<"\n";
    }
    return 0;
}