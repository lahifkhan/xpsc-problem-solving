#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string ans = "";

        int p = 0;
        int x = 0;
        int l = 0, r = n - 1;
        while (l < r) {
            if (s[l] == s[r]) {
                p += 2;
            }
            
            else {
                x++;
            }
            l++, r--;
        }

        for (int i = 0; i <= n; i++) {
            if (i < x) {
                ans.push_back('0');
                continue;
            }
            int total = i;
            total -= x;

            

            if (total<p) {
                total = total % 2;
            } 
            else {
                total = total - p;
            }
            if(total>=1){
                total = total - (n % 2);

            }

           

            if (total == 0) {
                ans.push_back('1');
            }
            
             else {
                ans.push_back('0');
            }
        }

        cout << ans << endl;
    }
    return 0;
}
