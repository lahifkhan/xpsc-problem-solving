#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    deque<string> dq;
    map<string,int> mp;
    while(t--){

        string s;
        cin >> s;
        dq.push_front(s);
        mp[s]++;
    }
    while(!dq.empty()){
       string s2 = dq.front();
       dq.pop_front();
       if(mp[s2]> 0){
        cout << s2 <<"\n";
        mp[s2]=0;
       }
    }
  
    return 0;
}