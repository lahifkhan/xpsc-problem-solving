#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool primecheck(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;

}
int main(){
    int n;
    cin>> n;

    if(primecheck(n)){
        cout <<1;
    }
    else if(n%2==0){
        cout << 2 ;
    }
    else{
        if(primecheck(n-2)){
            cout <<2 ;
        }
        else{
            cout << 3 ;
        }
    }
    
    
    return 0;
}