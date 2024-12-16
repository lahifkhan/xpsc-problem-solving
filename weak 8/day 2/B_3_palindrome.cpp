#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>> n;
    int cnta=0,cntb=2;
    vector<char> v(n);
    for(int i=0; i<n; i++){
        if(cnta<2){
            v[i]='a';
            cnta++;
            if(cnta==2){
                cntb=0;
            }

        }
       else  if(cntb<2){
            v[i]='b';
            cntb++;
            if(cntb==2){
                cnta=0;
            }
        }

    }
    for(int i=0; i<n; i++){
        cout << v[i];
    }

    return 0;
}