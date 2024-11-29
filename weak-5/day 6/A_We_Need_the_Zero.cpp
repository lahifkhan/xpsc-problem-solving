#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<int> v(n);
        int total=0;
       
        for(int i=0; i<n; i++){
            cin>> v[i];
            total = total ^v[i];
          
        }

        for(int i=0; i<n; i++){
            v[i] = v[i] ^total;
        }
        int total2 = 0;
        for(int i=0; i<n; i++){
            
            total2 = total2 ^v[i];
          
        }

        if(total2 == 0){
            cout << total <<"\n";
        }
        else{
            cout << -1 <<"\n";
        }


    }
    return 0;
}