#include<bits/stdc++.h>
using namespace std;
int main(){

  ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   set<pair<string,string>> st;
   while(t--){
    string s1,s2;
    cin>> s1 >> s2;
    st.insert({s1,s2});


   }
   cout<< st.size();
    return 0;
}