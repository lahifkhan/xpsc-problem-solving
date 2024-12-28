#include <iostream>
using namespace std;

#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll x, y, z;
        cin >> x >> y >> z;

        x++;
        z--;
        while (x != y) {
            if (x % y == 0) {
                while (x % y == 0)
                    x = x / y;
            }
            if (z == 0) {
                cout << x << endl;
                break; 
            }

            ll temp = y - x % y;
            if (temp <= z) {
                x = x + temp;
                z = z - temp;
            } else {
                cout << x + z << endl;
                break; 
            }
        }

        if (x == y) {
            cout << 1 + z % (y - 1) << endl;
        }
    }

    return 0;
}
