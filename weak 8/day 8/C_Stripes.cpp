#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        char grid[8][8];

      
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> grid[i][j];
            }
        }

        char result = 'B'; 

        
        for (int i = 0; i < 8; i++) {
            bool isRedRow = true;
            for (int j = 0; j < 8; j++) {
                if (grid[i][j] != 'R') {
                    isRedRow = false;
                    break;
                }
            }
            if (isRedRow) {
                result = 'R';
                break;
            }
        }

        cout << result << "\n";
    }
    return 0;
}
