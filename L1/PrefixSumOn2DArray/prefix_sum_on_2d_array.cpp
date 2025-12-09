#include <bits/stdc++.h>

#define maxN 1001

using namespace std;

int n, m;
int A[maxN][maxN];
long long S[maxN][maxN];
int Q;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int r1, c1, r2, c2;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> A[i][j];

    for (int i = 0; i <= n; i++) S[i][0] = 0;
    for (int i = 0; i <= m; i++) S[0][i] = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            S[i][j] = S[i - 1][j] + S[i][j - 1] - S[i - 1][j - 1] + A[i][j];
        
    cin >> Q;
    for (int q = 0; q < Q; q++) {
        cin >> r1 >> c1 >> r2 >> c2;
        cout << S[r2][c2] - S[r1 - 1][c2] - S[r2][c1 - 1] + S[r1 - 1][c1 - 1] << endl;
    }
    return 0;
}