#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b;
    cin >> a >>b;
    int x = a+(a-1);
    int y = b+(b-1);
    int m = max(x,y);
    cout<< max(m,a+b);
    return 0;
}