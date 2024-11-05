#include<bits/stdc++.h>
using namespace std;
int main(){

    
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n>> k;
        string s;
        cin >> s;
        map<char,int> mp;
        for(auto c: s){
            mp[c]++;
        }
        int count =0;
        for(auto it=mp.begin(); it!=mp.end(); it++){

            if(it->second %2 !=0){
                count ++;
            }

        }
        if(count <=k){
            cout <<"YES"<<"\n";
        }
        else if(count>k){
            if(count - k == 1){
                cout <<"YES"<<"\n";
            }
            else{
                cout <<"NO" <<"\n";
            }
        }
    }
    return 0;
}