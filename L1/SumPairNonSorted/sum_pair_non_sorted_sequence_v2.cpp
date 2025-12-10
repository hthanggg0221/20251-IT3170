#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, Q;
    int res = 0;
    cin >> n >> Q;
    unordered_set<int> us;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int x : a) {
        if (us.count(Q - x))
            res++;
        us.insert(x);
    }
    cout << res << endl;
    return 0;
}