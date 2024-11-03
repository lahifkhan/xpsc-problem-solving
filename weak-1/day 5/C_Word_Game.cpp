#include<bits/stdc++.h>
using namespace std;
int main(){

ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >>t;
   while (t--){
    int n;
    cin >> n;
    
    map<string,int> mp;
    vector<string> v1;
    vector<string> v2;
    vector<string> v3;

    for(int i=1; i<=3; i++){
        for(int j=1; j<=n; j++){
            string s; 
            cin >> s;
            mp[s] ++;

            if(i==1){
                v1.push_back(s);
            }
            else if(i==2){
                v2.push_back(s);
            }
            else{
                v3.push_back(s);
            }

        }
    }

    int person1=0, person2=0, person3=0;

    for(auto st: v1){
        if(mp[st]==1){
            person1 +=3;
        }
        else if(mp[st] ==2){
            person1 +=1;
        }

    }
    for(auto st: v2){
        if(mp[st]==1){
            person2 +=3;
        }
        else if(mp[st] ==2){
            person2 +=1;
        }

    }
    for(auto st: v3){
        if(mp[st]==1){
            person3 +=3;
        }
        else if(mp[st] ==2){
            person3 +=1;
        }

    }
 cout<<person1 <<" " << person2 <<" " <<person3 <<"\n";


   }

    

   
    return 0;
}