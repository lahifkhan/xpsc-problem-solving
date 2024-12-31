#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>> n;
    multiset<int> tow;
    
    for(int i=0; i<n; i++){
        int x;
        cin>> x ;
        if(tow.upper_bound(x) == tow.end()){
            tow.insert(x);
        }
        else{
            auto it = tow.upper_bound(x);
            tow.erase(it);
            tow.insert(x);
        }
    }
    cout << tow.size();
    return 0;
}