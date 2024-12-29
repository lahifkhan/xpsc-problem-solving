#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

ll totalSum = 0;


ll findMin(ll A[], int r, ll currSum) {
  
    if (r == 0)
        return abs((totalSum - currSum) - currSum);

    
    return min(
        findMin(A, r - 1, currSum + A[r - 1]),
        findMin(A, r - 1, currSum)
    );
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    ll A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        totalSum += A[i];
    }
    cout << findMin(A, N, 0) << endl;
    return 0;
}
