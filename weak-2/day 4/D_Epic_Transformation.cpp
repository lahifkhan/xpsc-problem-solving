#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    
    while(t--){
        map<int,int> mp;
        int n;
        cin >> n;
        for(int i=1; i<=n; i++){
            int x;
            cin >> x;
            mp[x]++;
        }
        priority_queue<int>pq;
        for(auto p: mp){
            pq.push(p.second);
        }
        while(!pq.empty()){
            if(pq.size()<2){
                break;
            }
            int x= pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            x--;
            y--;
            if(x>=1){
                pq.push(x);
            }
            if(y>=1){
                pq.push(y);
            }
        }
        int ans= 0;
        while(!pq.empty()){
            ans +=pq.top();
            pq.pop();
        }
        cout << ans<<"\n";

    }
    return 0;
}