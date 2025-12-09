#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N, M;
    if (!(cin >> N >> M)) return;

    map <int, int> freq_diff;

    for (int i = 0; i < N; i++) {
        int val;
        cin >> val;
        freq_diff[val]++;
    }
    for (int i = 0; i < M; i++) {
        int val;
        cin >> val;
        freq_diff[val]--;
    }

    int res = 0;
    for (auto const& [val, count] : freq_diff) {
        res += abs(count);
    }

    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}