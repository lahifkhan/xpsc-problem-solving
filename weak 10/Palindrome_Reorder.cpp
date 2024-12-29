#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto c : s) {
        mp[c]++;
    }

    int oddCnt = 0;
    char oddChar = '\0'; 
    for (auto p : mp) {
        if (p.second % 2 != 0) {
            oddCnt++;
            oddChar = p.first; 
        }
    }


    if ((s.size() % 2 == 0 && oddCnt > 0) || oddCnt > 1) {
        cout << "NO SOLUTION";
        return 0;
    }

    string ans = "";
   
    for (auto c : mp) {
        for (int i = 0; i < c.second / 2; i++) {
            ans += c.first;
        }
    }

   
    string reverseAns = ans;
    reverse(reverseAns.begin(), reverseAns.end());

   
    if (oddCnt == 1) {
        cout << ans << oddChar << reverseAns;
    } else {
        cout << ans << reverseAns;
    }

    return 0;
}
