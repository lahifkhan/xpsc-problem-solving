#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<int, int> mp; 
    
    ll ans = 0;     
    int l = 0;         

    for (int r = 0; r < n; r++) {
        mp[arr[r]]++; 

       
        while (mp.size() > k) {
            mp[arr[l]]--;
            if (mp[arr[l]] == 0) {
                mp.erase(arr[l]); 
            }
            l++;
        }

        ans += (r - l + 1);
    }

    cout << ans << endl;
    return 0;
}

