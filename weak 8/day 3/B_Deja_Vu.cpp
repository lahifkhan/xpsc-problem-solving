#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    vector<long long int> powe(31);
    for(int i=0; i<=30; i++){
        powe[i] = (1<<i);
    }
    
    while(t--){
        int n,q;
        cin >> n>> q;
        vector<long long int> a(n);
        for(int i=0; i<n; i++){
            cin>> a[i];
        }
    
        vector<long long int> x(q);
        for(int j=0; j<q; j++){
            cin>>x[j];
            

        }
        set<long long int> st;

        for(int j=0; j<q; j++){
            if(st.count(x[j])) continue;
            long long int d = powe[x[j]];
             st.insert(x[j]);

            for(int i=0; i<n; i++){
                if(a[i]%d==0){
                    a[i] += powe[x[j]-1];
                }
            }
        }

        for(int i=0; i<n; i++){
            cout << a[i] <<" ";
        }
        cout << endl;
    }
    return 0;
}