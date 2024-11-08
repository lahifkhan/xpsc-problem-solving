#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        priority_queue<int> pq;
        for(int i=1; i<=n; i++){
            pq.push(i);
        }
        cout <<2 <<"\n";
        for(int i=1; i<=n-1; i++){
            int x= pq.top();
            pq.pop();
            int y= pq.top();
            pq.pop();
            cout << x <<" " <<y <<"\n";
            int z = x+y;
            if(z%2==0){
                pq.push(z/2);
            }
            else{
                pq.push((z/2)+1);
            }
        }
    }
    return 0;
}