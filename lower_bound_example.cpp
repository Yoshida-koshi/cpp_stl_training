#include "bits/stdc++.h"
using namespace std;

long long n, l, r, a[1000000];

int main() {
    cin >> n >> l >> r;
    for (long long i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    long long result = 0;
    for (long long i = 1; i <= n; i++) {
        long long rNum = lower_bound(a + 1, a + n + 1, r - a[i]) - a;
        long long lNum = lower_bound(a + 1, a + n + 1, l - a[i]) - a;
        result += rNum - lNum;
    }
    cout << result << endl;
}