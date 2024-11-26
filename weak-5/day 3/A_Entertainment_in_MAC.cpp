#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        string s;
        cin>> s;
        string s2 = s;
        reverse(s2.begin(),s2.end());
        int i;
        for( i=0; i<s.size(); i++){
            if(s[i] !=s2[i]){
                break;

            }
        }

        if(s2[i]>s[i]){
            cout << s<<"\n";
        }
        else if(s2[i]<s[i]){
            cout << s2 <<s<<"\n";
        }
        else{
            cout << s<<"\n";
        }
    }
    return 0;
}