#include<bits/stdc++.h>
using namespace std;

void solve() {
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
       int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> res(33, 0);
    for (int j = 0; j < 32; j++) {
        for (int i = 0; i < n; i++) {
            if (a[i] & (1 << j)) {
                res[j]++;
            }
        }
    }

    vector<int> ans;
    for (int i = 1; i <= n; i++) {
        bool valid = true;
        for (int j = 0; j < 32; j++) {
            if (res[j] % i != 0) {
                valid = false;
                break;
            }
        }
        if (valid) {
            ans.push_back(i);
        }
    }

    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
    }
    return 0;
}
