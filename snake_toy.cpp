#include "bits/stdc++.h"
using namespace std;

int n, k, l[10000];

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> l[i];
    }
    sort(l + 1, l + n + 1, greater<int>());
    int result = 0;
    for (int i = 1; i <= k; i++) {
        result += l[i];
    }
    cout << result << endl;
}