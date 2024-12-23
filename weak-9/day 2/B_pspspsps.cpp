#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        vector<int> p(n, INT_MAX);
        vector<int> s_arr(n, INT_MAX);

        for (int i = 0; i < n; ++i) {
            if (s[i] == 'p') {
                p[i] = i + 1;
            }
            if (s[i] == 's') {
                s_arr[i] = n - i;
            }
        }

        for (int i = 1; i < n; ++i) {
            s_arr[i] = min(s_arr[i], s_arr[i - 1]);
        }

        for (int i = n - 2; i >= 0; --i) {
            p[i] = min(p[i], p[i + 1]);
        }

        vector<int> temp(n);
        for (int i = 0; i < n; ++i) {
            temp[i] = min(s_arr[i], p[i]);
        }

        vector<int> stemp = temp;
        sort(stemp.begin(), stemp.end());

        bool ans = true;
        for (int i = 0; i < n; ++i) {
            if (stemp[i] < i + 1) {
                ans = false;
                break;
            }
        }

        if (ans) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
