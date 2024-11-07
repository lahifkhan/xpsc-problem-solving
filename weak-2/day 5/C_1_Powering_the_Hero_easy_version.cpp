#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        priority_queue<int> pq;
        long long int ans =0;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            if(x!=0){
                pq.push(x);
            }
            else{
                if(!pq.empty()){
                    int y =pq.top();
                    pq.pop();
                    ans = ans+y;

                }
            }

        }
        cout << ans <<"\n";
    }
    return 0;
}