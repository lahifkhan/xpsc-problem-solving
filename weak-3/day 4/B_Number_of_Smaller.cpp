#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    cin >> n>> m;
    vector<int> v(n);
    vector<int> v2(m);
    for(int i=0; i<n; i++){
        cin>> v[i];
    }
    for(int i=0; i<m; i++){
        cin>> v2[i];
    }
    int count =0;
    int l=0;
    int r= 0;
    vector<int> ans;
    while(1){
        if(r==m){
            break;
        }
       else if(l<n && v[l]<v2[r]){
            count++;
            l++;
        }
        else{
            ans.push_back(count);
            r++;
        }
        
        
    }
    for(int i=0; i<m; i++){
        cout << ans[i] << " " ;
    }
    return 0;
}