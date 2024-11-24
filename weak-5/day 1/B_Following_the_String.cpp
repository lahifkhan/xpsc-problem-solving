#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s = "abcdefghijklmnopqrstuvwxyz";  
    while (t--) {
        int n;
        cin >> n;

        map<char, int> mp;
        for (auto c : s) {
            mp[c] = 0;
        }

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            
            
            for (char a = 'a'; a <= 'z'; a++) {
                if (mp[a] == v[i]) {
                    cout << a;
                    mp[a]++;
                    break;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
