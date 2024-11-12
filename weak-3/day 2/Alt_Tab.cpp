#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    deque<string> dq;
    map<string,int> mp;
    while(n--){
        string s;
        cin >> s;
        mp[s]++;
        dq.push_front(s);
    }
    while( !dq.empty()){
        string s2 = dq.front();
        dq.pop_front();
        if(mp[s2] !=0 ){
         cout << s2[s2.size()-2] << s2[s2.size()-1] ;
         mp[s2]=0;
        }
        else{
            continue;
        }

        
    }
    return 0;
}