#include<bits/stdc++.h>
using namespace std;
int main(){

   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   map<string,string> mp,mp2;
   int n;
   cin >>n;
   while(n--){
    string s1, s2;
    cin >> s1 >> s2;
    if(mp.find(s1) != mp.end()){
        string s = mp[s1];
        mp2[s] = s2;
        mp.erase(s1);
        mp[s2]=s; 

    }
    else{
        mp2[s1] = s2;
        mp[s2] = s1;
    }
   }
  
   cout<< mp.size() <<"\n";
   for(auto m : mp2){
    cout<< m.first <<" " << m.second <<"\n";
   }
    return 0;
}