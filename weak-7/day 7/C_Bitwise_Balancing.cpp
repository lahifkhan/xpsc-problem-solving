#include <iostream>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll b, c, d;
        cin >> b >> c >> d;
        ll a = 0;
        for (ll i = 0; i < 64; i++) {
            ll aa = (1LL << i);
            ll bb = 0, cc = 0, dd = 0;
            if (aa & b) {
                bb = aa;
            } 
            else {
                bb = 0;
            }
            if (aa & c) {
                cc = aa;
            }
             else {
                cc = 0;
            }
            if (aa & d) {
                dd = aa;
            } 
            else {
                dd = 0;
            }
            if ((aa | bb)-dd== (aa & cc)) {
                a += aa;
            }
        }

        if ((a|b) == (d + (a & c))) {
            cout << a << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
