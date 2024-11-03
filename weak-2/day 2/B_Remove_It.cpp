#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,x;
    cin >> n >>x;
    vector<int>v;
    for(int i=0; i<n; i++){
        int y;
        cin >> y;
        if(x==y){

        }
        else{
            v.push_back(y);
        }
    }
    for(int i=0; i<v.size(); i++){
        cout << v[i] <<" " ;
    }
    return 0;
}