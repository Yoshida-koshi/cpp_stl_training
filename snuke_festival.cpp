#include "bits/stdc++.h"
using namespace std;

int n;
long long a[10000000], b[10000000], c[10000000];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> c[i];
    }
    sort(a + 1, a + n + 1);
    sort(c + 1, c + n + 1);
    long long result = 0;
    for (int i = 1; i <= n; i++) {
        long long smallNum = lower_bound(a + 1, a + n + 1, b[i]) - (a + 1);
        long long largeNum = (c + n + 1) - upper_bound(c + 1, c + n + 1, b[i]);
        result += smallNum * largeNum;
    }
    cout << result << endl;
}