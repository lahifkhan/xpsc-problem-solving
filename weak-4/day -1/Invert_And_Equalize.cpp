#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t ;
    while(t--){
        int n;
        cin>> n;
        string s;
        cin>>s;
        if(n==1){
            cout << 0 <<"\n";
            continue;
        }
        int l=0;
        bool one=false;
        int count =0;
        while(l<n){
            if( s[l]=='1'){
                l++;
                if(one == false){
                    count++;
                }
                one=true;
            }
            else if(s[l]=='0'){
                one=false;
                l++;
            }

        }
        int l2=0;
        bool two=false;
        int count2 =0;
        while(l2<n){
            if( s[l2]=='0'){
                l2++;
                if(two == false){
                    count2++;
                }
                two=true;
            }
            else if(s[l2]=='1'){
                two=false;
                l2++;
            }

        }

        cout << min(count2,count) <<"\n";
    }
    return 0;
}