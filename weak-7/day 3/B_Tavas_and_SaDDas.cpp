#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    int l = n.size();
    int in= 0;

   
    for (int i = 1; i < l; i++) {
        in += (1 << i); 
    }

    
    for (int i = 0; i < l; i++) {
        if (n[i] == '7') {
            in += (1 << ( i )); 
        }
    }

    
    cout << in + 1 << endl;

    return 0;
}
