#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;

    while(t--){
       bool ans= false;
        string s;
        cin >>s;
        int n= s.size();
        for(int i=0; i<n-1; i++){
            cout << s[i];
            if(s[i] == s[i+1] && ans == false){
                
                if(s[i]=='z'){
                    cout << 'a';
                }
                else{
                    cout << char(s[i]+1);
                }
                ans = true;
            }
        }
        if(ans) {
            cout << s[n-1];
        }
        else{
            if(s[0]== 'z'){
                cout << 'a'<<s[0];
            }
            else{
                cout << char(s[0]+1) << s[0];
            }
        }
        cout <<"\n";

    }
    return 0;
}