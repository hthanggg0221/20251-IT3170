#include <bits/stdc++.h>

#define maxN 100001

using namespace std;

int n;
int A[maxN];
long long S[maxN];
int Q;

int main() {
    int l, r;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> A[i];
    S[0] = 0;
    for (int i = 1; i <= n; i++)
        S[i] = S[i - 1] + A[i];
    cin >> Q;
    for (int q = 0; q < Q; q++) {
        cin >> l >> r;
        cout << S[r] - S[l - 1] << endl;
    }
    return 0;
}