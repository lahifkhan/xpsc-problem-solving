#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long s;
    cin >> n >> s;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l=0;
    int r=0;
    long long count =0;
    long long sum=0;
    while(r<n){

        sum +=a[r];
        while(sum>=s){
            count += (n-r);
            sum = sum-a[l];
            l++;
        }
        r++;

    }
    

   

    cout << count << endl;
    return 0;
}
