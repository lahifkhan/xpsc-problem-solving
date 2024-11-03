#include<bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        string s;
        cin>>s;
        int firstb=-1; 
        int lastb = -1;
        for(int i=0; i<n; i++){
            if(s[i]=='B'){
                firstb= i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(s[i]=='B'){
                lastb= i;
                break;
            }
        }

        cout<< (lastb-firstb)+1;
        cout<<endl;

        
    }
    return 0;
}