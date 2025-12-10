#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, Q;
    int res = 0;
    cin >> n >> Q;
    vector<int> a(n);
    for (int k = 0; k < n; k++) {
        cin >> a[k];
    }
    int i = 0, j = n - 1;
    while (i < j) {
        if (a[i] + a[j] == Q) {
            res++;
            i++;
            j--;
        } else if (a[i] + a[j] > Q) {
            j--;
        } else {
            i++;
        }
    }
    cout << res << endl;
    return 0;
}