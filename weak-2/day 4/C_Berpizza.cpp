#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    set<pair<int,int>>s;
    multiset<pair<int,int>>ml;
    vector<int> ans;
    int customer=1;
    while(t--){
        int t;
        cin >> t;
        if(t==1){
            int m;
            cin >>m;
            s.insert({customer,m});
            ml.insert({m,-customer});
            customer++;

        }
        else if(t==2){
            int p= s.begin()->first;
            int m= s.begin()->second;
            ans.push_back(p);
            s.erase(s.begin());
            ml.erase({m,-p});

        }
        else{
            int p=ml.rbegin()->second;
            int m= ml.rbegin()->first;
            ans.push_back(-p);
            ml.erase(--ml.end());
            s.erase({-p,m});

        }



    }
    for(auto v: ans){
        cout <<v <<" " ;
    }
    return 0;
}