#include <bits/stdc++.h>
using namespace std;

int main() {
   

   int n, m;
   cin >> n >> m;
   vector<int> v(n), v2(m);
   for (int i = 0;i < n;i++) {
      cin >> v[i];
   }
   for (int i = 0;i < m;i++) {
      cin >> v2[i];
   }

   int l = 0, r = 0;
   long long int ans = 0;
   while (l < n && r < m) {
      int curr = v[l], count1 = 0, count2 = 0;
      while (l < n && v[l] == curr) {
         count1++, l++;
      }
      while (r<m && curr>v2[r]) {
         r++;
      }
      while (r < m && v2[r] == curr) {
         count2++, r++;
      }
      ans += (1LL * count1 * count2);
   }

   cout << ans << '\n';

   return 0;
}