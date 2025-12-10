#include <bits/stdc++.h>

using namespace std;

const long long INF = -1e9;
const int maxN = 100001;

int n, m;
int A[maxN], maxVal[4 * maxN];

void build(int id, int left, int right) {
    if (left == right) {
        maxVal[id] = A[left];
        return;
    }
    int mid = (left + right) / 2;
    int leftChild = 2 * id, rightChild = 2 * id + 1;
    build(leftChild, left, mid);
    build(rightChild, mid + 1, right);
    maxVal[id] = max(maxVal[leftChild], maxVal[rightChild]);
}

void update(int id, int left, int right, int i, int val) {
    if (left > i || right < i) return;
    if (left == right) {
        maxVal[id] = val;
        return;
    }
    int mid = (left + right) / 2;
    int leftChild = 2 * id, rightChild = 2 * id + 1;
    if (i <= mid)
        update(leftChild, left, mid, i, val);
    else update(rightChild, mid + 1, right, i , val);
    maxVal[id] = max(maxVal[leftChild], maxVal[rightChild]);
}

int getMax(int id, int left, int right, int u, int v) {
    if (left > v || right < u) return INF;
    if (left >= u && right <= v) {
        return maxVal[id];
    }
    int mid = (left + right) / 2;
    int maxLeft = getMax(2 * id, left, mid, u, v);
    int maxRight = getMax(2 * id + 1, mid + 1, right, u, v);
    return max(maxLeft, maxRight);
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
    }
    build(1, 1, n);
    cin >> m;
    string type;
    int x, y;
    while (m--) {
        cin >> type >> x >> y;
        if (type == "update")
            update(1, 1, n, x, y);
        else if (type == "get-max")
            cout << getMax(1, 1, n, x, y) << "\n";
    }
    return 0;
}
