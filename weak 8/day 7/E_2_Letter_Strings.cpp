#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<string> v(n);
        map<char,ll> f_cnt;
        map<char , ll > s_cnt;
        map<string , ll > cnt;
        for(int i=0; i<n; i++){
            cin>> v[i];
            string s= v[i];
            cnt[s]++;
            f_cnt[s[0]]++;
            s_cnt[s[1]]++;

        }
        ll ans =0;
        ll d=0;
        for(int i=0; i<n; i++){
            string s= v[i];
            int x = max(d,f_cnt[s[0]]-cnt[s]);
            ans +=x;
            int y = max(d, s_cnt[s[1]] - cnt[s]);
            ans +=y;

            if(f_cnt[s[0]]>0) f_cnt[s[0]]--;
            if(s_cnt[s[1]]>0) s_cnt[s[1]]--;
            if(cnt[s]>0) cnt[s]--;
        }
        cout << ans <<"\n";

    }
    return 0;
}