#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int>b(n-1);
        for(int i=0; i<n-1; i++){
            cin>> b[i];
        }
        vector<int> a(n,0);
        for(int i=0; i<n-1; i++){
            a[i] |=b[i];
            a[i+1] |=b[i]; 
        }

        bool ans =false;

        for(int i=0; i<n-1; i++){
            if(b[i] != (a[i]&a[i+1])){
                ans=true;
                break;
                
            }
        }

        if(ans){
            cout <<-1;
        }
        else{
            for(auto c : a){
                cout << c<<" " ;
            }
            
        }
        cout <<"\n";
    }
    return 0;
}