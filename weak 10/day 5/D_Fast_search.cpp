#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;

        
        int left = 0, right = n - 1, x = n;
        while (left <= right) {
            int mid =  (right + left) / 2;
            if (v[mid] >= l) {
                x = mid;  
                right = mid - 1;  
            } else {
                left = mid + 1;  
            }
        }

       
        left = 0, right = n - 1;
        int y = -1;
        while (left <= right) {
            int mid =  (right + left) / 2;
            if (v[mid] <= r) {
                y = mid;  
                left = mid + 1;  
            } else {
                right = mid - 1;  
            }
        }

      
        if (x > y) {
            cout << 0 << " ";
        } else {
            cout << (y - x + 1) << " ";
        }
    }
    return 0;
}
