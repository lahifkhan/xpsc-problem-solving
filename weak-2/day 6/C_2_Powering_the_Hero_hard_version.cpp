#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
 
    while(t--){
        priority_queue<int>pq;
        int n;
        cin >> n;
        long long int ans=0;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            if(x==0){
                if(!pq.empty()){
                    ans = ans+pq.top();
                    pq.pop();
                }

            }
            else{
                pq.push(x);
            }
        }
        cout<<ans<<"\n";
        
    }
    return 0;
}