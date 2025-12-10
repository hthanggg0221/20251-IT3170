#include <bits/stdc++.h>

#define maxN 1000001

using namespace std;

int a[maxN];

int main() {
    int n, Q;
    int res = 0;
    cin >> n >> Q;
    for (int k = 1; k <= n; k++) {
        cin >> a[k];
    }
    int i = 1, j = n;
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