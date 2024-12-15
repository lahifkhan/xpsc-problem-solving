#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
       int n;
       cin>> n;
       string s;
       cin>> s;
       
        stack<char> st;
        int cnt=0;
        
        for (char ch : s) {
            if (!st.empty() && st.top() != ch) {
                st.pop();
                cnt++;
            } 
            else {
                st.push(ch);
            }
        }

        if (cnt % 2 == 0)
            cout << "Ramos" << endl;
        else
            cout << "Zlatan" << endl;
    }
    return 0;
}
