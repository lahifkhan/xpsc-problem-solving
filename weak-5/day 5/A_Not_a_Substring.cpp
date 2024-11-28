#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        string s;
        cin>> s;
        stack<char> st;
        if(s == "()"){
            cout <<"NO" <<"\n";
            continue;
        }
       
        
      

        vector<char> v;
        bool find=false;

        for(int i=0; i<s.size()-1; i++){
            
            if(s[i]== ')' && s[i+1]== ')' || s[i] == '(' && s[i+1]=='('){
                find= true;
                break;
            } 
        }

        if(find == false){
            for(int i=0; i<s.size(); i++){
                v.push_back('(');
            }
            for(int i=0; i<s.size(); i++){
                v.push_back(')');
            }
        }

        else{
            for(auto c: s){
            if(c== '('){
                v.push_back('(');
                v.push_back(')');
            }
            else{
                v.push_back('(');
                v.push_back(')');
            }
        }

        }
       

        
        cout <<"YES" <<"\n";

        for(auto c :v){
            cout << c ;
        }
        cout <<"\n";



        
    }
    return 0;
}