#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    double cntS1 = 0; 
    for (auto c : s1) {
        if (c == '+'){
             cntS1 += 1;

        }
        else if (c == '-') {
            cntS1 -= 1;
        }
    }

    int n = 0;        
    double cnts2 = 0; 
    for (auto c : s2) {
        if (c == '+') {
            cnts2 += 1;
        }
        else if (c == '-') 
        {
            cnts2 -= 1;
        }

        else if (c == '?'){
             n++;
        }
    }

    if (n == 0) {
    
        if (cntS1 == cnts2)
            cout << fixed << setprecision(12) << 1.0 << endl;
        else
            cout << fixed << setprecision(12) << 0.0 << endl;
    } else {
       
        int t = 1 << n; 
        int m = 0;      

        for (int mask = 0; mask < t; mask++) {
            int sum = 0;
            for (int k = 0; k < n; k++) {
                if ((mask >> k) & 1){
                    sum += 1; 

                }
                    
                else{
                     sum -= 1; 
                }
                   
            }
            if (sum + cnts2 == cntS1){
                m++;

            }
                
        }

        double ans = (double)m / t; 
        cout << fixed << setprecision(12) << ans << endl;
    }

    return 0;
}
