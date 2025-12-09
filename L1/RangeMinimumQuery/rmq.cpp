#include <bits/stdc++.h>

#define maxN 1000001
#define LOGN 21

using namespace std;

int n, m;
int M[LOGN][maxN];
int lg[maxN];

void build() {
    lg[0] = 1;
    for (int i = 2; i < maxN; i++)
        lg[i] = lg[i/2] + 1;
    for (int j = 1; j < LOGN; j++) {
        for (int i = 0; i + (1 << j) <= n; i++) {
            M[j][i] = min(M[j - 1][i], M[j - 1][i + (1 << (j - 1))]);
        }
    }
}

int query(int left, int right) {
    int k = lg[right - left + 1];
    return min(M[k][left], M[k][right - (1 << k) + 1]);
}

int main()
{
    int l, r;
    long long res = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> M[0][i];
    build();
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> l >> r;
        res += query(l, r);
    }
    cout << res;
    return 0;   
}
