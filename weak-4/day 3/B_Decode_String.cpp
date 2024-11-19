#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin>> s;
        deque<int> dq;
        for(auto c: s){
            dq.push_back(c-'0');

        }
        // for(auto c: dq){
        //     cout << c<<" ";
        // }

        deque<char> dq2;

        while(!dq.empty()){
            int x= dq.back();
            dq.pop_back();
            if( x== 0){
                int z = dq.back();
                dq.pop_back();
                int y = dq.back();
                dq.pop_back();
                int q = y*10+z;

                dq2.push_front(char(q+96));


            }
            else {
                
                dq2.push_front(char(x+96));
            }
        }
        for(auto c: dq2){
            cout << c;
        }
        cout <<"\n";
    }
    return 0;
}