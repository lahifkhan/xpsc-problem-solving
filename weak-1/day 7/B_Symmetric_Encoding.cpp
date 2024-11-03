#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        string s;
        cin >> s;
        set<char>r;
        for(auto c: s){
            r.insert(c);
        }
        map<char,char> mp;
        vector<char> v;
        for(auto it= r.begin(); it!=r.end(); it++){
            v.push_back(*it);
        }
        int i=0;
        int j= v.size()-1;

        while(i<=j){
            mp[v[i]] = v[j];
            mp[v[j]] = v[i];
            i++ ;
            j--;
        }

        for(int i=0; i<s.size(); i++){
            s[i] = mp[s[i]];
        }

        // for(auto it= mp.begin(); it!=mp.end(); it++){
        //     cout << it->first << "-->" << it->second <<endl;
        // }
        cout << s <<"\n";

        
    }
    return 0;
}