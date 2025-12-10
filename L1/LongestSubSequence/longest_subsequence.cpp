#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, Q;
    cin >> n >> Q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum = 0, i = 0, res = -1;
    for (int j = 0; j < n; j++) {
        sum += a[j];
        while (sum > Q) {
            sum -= a[i];
            i++;
        }
        res = max(res, j - i + 1);
    }
    cout << res << endl;
    return 0;
}