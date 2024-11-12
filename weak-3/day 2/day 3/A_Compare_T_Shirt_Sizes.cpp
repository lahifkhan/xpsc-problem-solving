#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;

        if (s1[s1.size() - 1] == s2[s2.size() - 1]) {
            int count1 = 0;
            int count2 = 0;
            for (auto c : s1) {
                if (c == 'X') {
                    count1++;
                }
            }
            for (auto c : s2) {
                if (c == 'X') {
                    count2++;
                }
            }

            if (s1[s1.size() - 1] == 'S') {
                if (count1 > count2) {
                    cout << "<" << "\n";
                } else if (count1 == count2) {
                    cout << "=" << "\n";
                } else {
                    cout << ">" << "\n";
                }
            } else {
                if (count1 > count2) {
                    cout << ">" << "\n";
                } else if (count1 == count2) {
                    cout << "=" << "\n";
                } else {
                    cout << "<" << "\n";
                }
            }
        } else {
            if (s1[s1.size() - 1] == 'S') {
                cout << "<" << "\n";
            } else if (s1[s1.size() - 1] == 'M') {
                if (s2[s2.size() - 1] == 'S') cout << ">" << "\n";
                else cout << "<" << "\n";
            } else {
                cout << ">" << "\n";
            }
        }
    }
    return 0;
}
