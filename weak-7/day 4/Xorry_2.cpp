#include <bits/stdc++.h>
using namespace std;

int main() {
    int t = 1;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

       
        int count = 0;
        int a = 1;
        while (a * 2 <= n) {
            a *= 2;
            count++;
        }

        int ans = 1;
        bool check = false;

       
        for (int i = count - 1; i >= 0; i--) {
            if ((n >> i) & 1) { 
                check = true;
            } else {
                if (check) {
                    ans = ans * 2;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
