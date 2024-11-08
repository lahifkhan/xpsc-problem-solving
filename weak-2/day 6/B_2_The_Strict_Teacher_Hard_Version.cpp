#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        int n,m,q;
        cin >> n >> m >> q;
      
        vector<int> v;
        for(int i=0; i<m; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        while(q--){
            int y;
            cin >> y;
            auto it = upper_bound(v.begin(),v.end(),y);
            if(it == v.begin()){
                cout << v[0]-1<<"\n";
            }
            else if(it == v.end()){
                cout <<n-v[m-1]<<"\n";
            }
            else{
                int index = it-v.begin();
                cout << (v[index]-v[index-1])/2 <<"\n";
            }
        }
    }
    return 0;
}