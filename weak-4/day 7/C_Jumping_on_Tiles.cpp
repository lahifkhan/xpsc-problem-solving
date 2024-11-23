#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int n = s.size();

        
        char mn = min(s[0], s[n - 1]);
        char mx = max(s[0], s[n - 1]);

       
        vector<char> filter;
        vector<int> ind; 
        for (int i = 0; i < n; i++) {
            if (s[i] >= mn && s[i] <= mx) {
                filter.push_back(s[i]);
                ind.push_back(i + 1); 
            }
        }

        int x = filter.size();

       
        vector<pair<char, int>> h;
        if (x > 2) {
            for (int i = 1; i < x - 1; i++) {
                h.push_back({filter[i], ind[i]});
            }
        }

        
        if (s[0] > s[n - 1]) {
            sort(h.begin(), h.end(), greater<pair<char, int>>()); 
        } else {
            sort(h.begin(), h.end()); 
        }

       
        vector<pair<char, int>> f; 
        f.push_back({s[0], 1}); 
        for (auto &p : h) {
            f.push_back(p); 
        }
        f.push_back({s[n - 1], n}); 

        
        long long m = 0;
        vector<int> seq;
        seq.push_back(1); 

        for (int i = 1; i < f.size(); i++) {
            m += abs(f[i].first - f[i - 1].first); 
            seq.push_back(f[i].second); 
        }


        cout << m << " " << seq.size() << endl;
        for (int idx : seq) {
            cout << idx << " ";
        }
        cout << endl;
    }

    return 0;
}
