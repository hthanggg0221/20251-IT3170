#include <bits/stdc++.h>

using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (!(cin >> n)) return 0;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    string cmd;
    while (cin >> cmd && cmd != "#") {
        int k;
        cin >> k;

        auto it = upper_bound(A.begin(), A.end(), k);
        if (it == A.end()) {
            cout << "-1\n";
        }
        else
            cout << *it << "\n";
    }
    return 0;
}