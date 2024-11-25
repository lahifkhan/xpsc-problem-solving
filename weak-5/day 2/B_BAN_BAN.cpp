#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        string s="";
        for(int i=0; i<n; i++){
            s =s+"BAN";
        }

        int l=1;
        int r=s.size()-1;
        vector<pair<int,int> > ans;
        while(l<r){
            swap(s[l],s[r]);
            ans.push_back({l+1,r+1});
            l=+3;
            r-=3;
        }
        cout << ans.size() <<"\n";
        for(int i=0;i<ans.size(); i++){
            cout << ans[i].first <<" " << ans[i].second<<"\n";
        }
        
    }
    return 0;
}