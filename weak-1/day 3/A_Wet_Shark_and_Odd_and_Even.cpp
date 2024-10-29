#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    int a[n];
    long long int total=0;
    int mn = INT_MAX;
    for(int i=0; i<n; i++){
        cin >> a[i];
        total+=a[i];
        if(a[i] %2 !=0){
            mn= min(mn,a[i]);
        }

    }
    if(total %2 ==0){
        cout<<total;
       
    }
    else{
        cout<<total-mn;
    }

    return 0;
}