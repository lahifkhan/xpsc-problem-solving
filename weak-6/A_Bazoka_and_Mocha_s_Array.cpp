#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<int> v(n);
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>> v[i];
            a[i] =v[i];
        }

        sort(a.begin(),a.end());
        if(a==v){
            cout <<"Yes" <<"\n";
            continue;
        }


        deque<int> d;
        int i;
        for(i=0; i<n-1; i++){
            if(v[i]<=v[i+1]){
                d.push_back(v[i]);
            }
            else{
                break;
            }
        }

        for(int j=n-1; j>=i+1; j--){
            d.push_front(v[j]);
        }

        int k=0;
        bool ans =true;
        for(auto val : d){
            if(val !=a[k]){
                ans =false;
                break;
            }
            k++;
        }

        if(ans){
            cout << "Yes" <<"\n";
        }
        else{
            cout <<"No" <<"\n";
        }

        

    }
    return 0;
}