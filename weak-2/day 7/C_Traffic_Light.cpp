#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        long long int n;
        char x;
        cin >> n >>x;
        string s;
        cin >> s;
        s += s;
        vector<int> v;
        for(int i=0; i<2*n; i++){
            if(s[i] =='g'){
                v.push_back(i);
            }
        }

        int ans=0;
        for(int i=0; i<n; i++){
            if(s[i]==x){
                auto it = lower_bound(v.begin(),v.end(),i);
                if(it != v.end()){
                    
                int index = *it;
                ans = max(ans,index-i);

                }
               
            }
        }
        cout <<ans <<"\n";
    }
    return 0;
}