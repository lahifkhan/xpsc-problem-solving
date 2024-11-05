#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >>n;
    multiset<int > ml;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        ml.insert(x);
    }
    int count =0;
   
   for(int k=1; !ml.empty(); k++){
          auto it = ml.lower_bound(k);
          if(it == ml.end()){
            break;
          }
          else{
            count++;
          }
          ml.erase(it);
   }
   cout << count;
    
}