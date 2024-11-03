#include<bits/stdc++.h>
using namespace std;
int main(){

  string s;
  cin >> s;
  bool a[26];
  for(int i=0; i<26; i++){
    a[i]=false;
  }

  for(char c :s ){
    a[c-97] = true;
  }

  bool find =false;
  for(int i=0; i<26; i++){
    if(a[i]== false){
        char ans = i+97;
        cout << ans;
        find =true;
        return 0;
    }
  }
  if(find == false){
    cout<<"None";
  }

    return 0;
}