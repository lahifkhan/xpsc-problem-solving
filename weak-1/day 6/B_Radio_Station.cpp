#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    cin >> n >> m;
    map<string, string > mp;
    for(int i=0; i<n; i++){
        string s1,s2;
        cin >> s1 >> s2;
        mp[s2] = s1;
    }
    for(int i=0; i<m; i++){
        string s1,s2;
        cin >> s1 >> s2;
        s2.pop_back();
        auto it= mp.find(s2);
        cout << s1 <<" " <<s2  <<"; #"<< it->second <<endl;
    }
    return 0;
}