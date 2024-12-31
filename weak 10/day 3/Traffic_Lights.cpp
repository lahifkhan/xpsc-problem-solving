#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x = 0;
    int n = 0;
    int light = 0;
    cin >> x >> n;

    set<int> T;
    multiset<int> D;

    T.insert(0);
    T.insert(x);
    D.insert(x);

    for (int i = 0; i < n; i++)
    {
        cin >> light;
        auto right = T.upper_bound(light);
        auto left = right;
        left--;

        D.erase(D.find(*right - *left));

        D.insert(*right - light);
        D.insert(light - *left);

        T.insert(light);

        cout << *D.rbegin() << " ";
    }

    return 0;
}
