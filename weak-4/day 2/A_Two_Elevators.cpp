#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
      long long int a,b,c;
        cin>> a>> b>>c;
        if(a==1){
            cout <<1 <<"\n";
        }
        else if(b<c){
           long long int x= c-b;
          long long int y= c-1;
           long long int z = x+y;

            int d = a-1;
            if(d<z){
                cout <<1 <<"\n";
            }
            else if(d>z){
                cout <<2<<"\n";
            }
            else {
                cout << 3 <<"\n";
            }
        }

        else{
          long long int x = b-1;
            
          long long int d= a-1;
            if(x<d){
                cout << 2 <<"\n";
            }
            else if(x>d){
                cout << 1 <<"\n";
            }
            else{
                cout <<3 <<"\n";
            }

        }
    }
    return 0;
}