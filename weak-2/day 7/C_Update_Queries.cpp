#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n>>m;
        string str;
        cin >> str;
        set<int> st;
        for(int i=0; i<m; i++){
            int x; 
            cin >> x;
            st.insert(x);
        }
        string update;
        cin >> update;
        sort(update.begin(), update.end());
        int idx=0;
        for(auto ind : st){
            str[ind-1]= update[idx];
            idx++;

        }
        cout <<str<<"\n";
    }
    return 0;
}