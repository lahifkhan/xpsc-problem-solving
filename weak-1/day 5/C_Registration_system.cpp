#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
   cin.tie(nullptr);

    int t;
    cin >> t;
    map<string,int> mp;
    while(t--){
       
        string s;
        cin>> s;
         auto it = mp.find(s);
        if(it !=mp.end()){

            cout << it->first << it->second ;
            mp[s]++;
          
        }
        else{
            cout <<"OK";
            mp[s]++;
        }
        cout <<"\n";

    }
    return 0;
}