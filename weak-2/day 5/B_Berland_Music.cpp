#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int>s(n);
        vector<int> o;
        vector<int> z;
        map<int,int> mp;
        for(int i=0; i<n; i++){
            cin >> v[i];
            s[i] = v[i];
            mp[v[i]] = i;

        }
        string si;
        cin >> si;
        for(int i=0; i<n; i++){
            if(si[i]=='0'){
                z.push_back(v[i]);
            }
            else{
                o.push_back(v[i]);
            }
        }
        sort(s.begin(),s.end(),greater<int>());
        sort(z.begin(),z.end(),greater<int>());
        sort(o.begin(),o.end(),greater<int>());
        int i;
        for(i=0; i<o.size(); i++){
            int index = mp[o[i]];
            v[index] = s[i];
        }
        for(int j=0; j<z.size(); j++){
            int index = mp[z[j]];
            v[index]  = s[i];
            i++;
        }
        for(int i=0; i<n; i++){
            cout <<v[i] <<" " ;
        }
        cout <<"\n";

    }
    return 0;
}