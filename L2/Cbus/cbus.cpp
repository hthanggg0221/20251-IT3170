#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;
const int MAXN = 23;

int n, k;
int C[MAXN][MAXN];
bool visited[MAXN];
int load;
int X[MAXN];
int f = 0;
int f_min = INF;
int cmin = INF;

bool check(int v) {
    if (visited[v] == true) return false;
    if (v > n) {
        if (visited[v-n] == false) return false;
    } else
        if (load + 1 > k) return false;
    return true;
}

void updateBest() {
    if (f + C[X[2*n]][0] < f_min)
        f_min = f + C[X[2*n]][0];
}

void Try(int m) {
    for (int v = 1; v <= 2*n; v++) {
        if (check(v)) {
            X[m] = v;

            f = f + C[X[m-1]][v];
            visited[v] = true;
            if (v <= n) load += 1; else load -= 1;

            if (m == 2*n) updateBest();
            else
                if (f + cmin*(2*n+1-m) < f_min)
                    Try(m + 1);
            
            if (v <= n) load -= 1; else load += 1;
            f = f - C[X[m-1]][v];
            visited[v] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    for (int i = 0; i <= 2*n; i++) {
        for (int j = 0; j <= 2*n; j++) {
            cin >> C[i][j];
            if (i != j && C[i][j] < cmin) cmin = C[i][j];
        }
    }

    X[0] = 0;
    load = 0;
    visited[0] = true;
    Try(1);
    cout << f_min << endl;

    return 0;
}