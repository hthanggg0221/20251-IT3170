#include <bits/stdc++.h>
using namespace std;

string Sum(string a, string b) {
    if (a.length() < b.length()) swap(a, b);
    string kq = "";
    int n1 = a.length();
    int n2 = b.length();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int nho = 0;
    for (int i = 0; i < n2; i++) {
        int sum = ((a[i] - '0') + (b[i] - '0') + nho);
        kq.push_back(sum % 10 + '0');
        nho = sum / 10;
    }
    for (int i = n2; i < n1; i++) {
        int sum = ((a[i] - '0') + nho);
        kq.push_back(sum % 10 + '0');
        nho = sum / 10;
    }
    if (nho) kq.push_back(nho + '0');
    reverse(kq.begin(), kq.end());
    return kq;
}

int main() {
    string a, b;
    cin >> a >> b;
    cout << Sum(a, b);
    return 0;
}