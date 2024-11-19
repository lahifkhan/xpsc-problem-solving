#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>> n;
        int x = (n*(n-1))/2;

        vector<int> v(x);
        for(int i=0; i<x; i++){
            cin >> v[i];

        }
        sort(v.begin(),v.end());

        vector<int> ans;
        int i=n-2;
        int j=1;
        for(int k=1; k<n; k++){
            ans.push_back(v[i]);
            j++;
            i = i+(n-j);

        }
        ans.push_back(v[v.size()-1]);

        for(auto a: ans){
            cout << a<<" ";
        }
        cout <<"\n";
    }
    return 0;
}