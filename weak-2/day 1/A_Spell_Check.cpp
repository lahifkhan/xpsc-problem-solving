#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    string s1= "Timru";
    while(t--){
        int n;
        cin >>n;
        string s2;
        cin >> s2;
        if(n>5 || n<5){
            cout <<"NO" <<"\n";
            continue;
        }
        else{
            sort(s2.begin(), s2.end());
            bool ans = true;
            for(int i=0; i<n; i++){
                if(s1[i] !=s2[i]){
                    ans =false;
                    break;
                }
            }
            if(ans){
                cout <<"YES" <<"\n";
            }
            else{
                cout <<"NO" <<"\n";
            }

        }

    }
    return 0;
}