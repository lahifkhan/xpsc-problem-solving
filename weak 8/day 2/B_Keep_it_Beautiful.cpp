#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<int> ans(n);
        ans[0] = 1;
        bool f = false; 
        int x = v[0];         

        for (int i = 1; i < n; i++) {
            if (f) {

                if (v[i] >= x && v[i] <= v[0]) {
                    ans[i] = 1;
                    x = v[i];
                } else {
                    ans[i] = 0;
                }
            } else {
             
                if (v[i] >= x) {
                    ans[i] = 1;
                    x = v[i];
                } else if (v[i] <= v[0]) {
                   
                    f = true;
                    ans[i] = 1;
                    x = v[i];
                } else {
                    ans[i] = 0;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}
