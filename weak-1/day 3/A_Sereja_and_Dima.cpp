#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
   
    int serja=0;
    int dima =0;
    int i=0;
    int j= n-1;
    bool t=true;
    while(i!=j){
        if(v[i]> v[j]){
            if(t){
                serja +=v[i];
            }
            else{
                dima += v[i];
            }
            i++;
        }
        else{
            if(t){
                serja +=v[j];
            }
            else{
                dima += v[j];
            }
            j--;
        }
        t = !t;
    }
    if(t){
        serja +=v[i];
    }
    else {
        dima += v[i];
    }
    cout<<serja <<" " << dima ;
    return 0;
}