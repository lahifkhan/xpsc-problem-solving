#include<bits/stdc++.h>
using namespace std;
int main(){

    int x;
    cin >> x;
    int n= x;
    vector<int>v;
    while(n!=0){
        int a= n%10;
        v.push_back(a);
        n=n/10;
    }
    if(v.size()==4){
        cout<<x;
        return 0;
    }
    else{
        for(int i=v.size(); i<4; i++){
            v.push_back(0);
        }
    }
    reverse(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }
    return 0;
}