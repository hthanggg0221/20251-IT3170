#include <bits/stdc++.h>
using namespace std;

string Sum(string a, string b) {
    while (a.length() < b.length())
    {
        a = "0" + a;
    }
    while (b.length() < a.length())
    {
        b = "0" + b;
    }
    string kq;
    int tong, nho = 0;
    int sokitu = a.length();
    for (int i = sokitu - 1; i >= 0; i--) {
        tong = (a[i] - '0') + (b[i] - '0') + nho;
        nho = tong / 10;
        kq = char(tong % 10 + '0') + kq;
    }
    if (nho == 1)
        kq = "1" + kq;
    return kq;
}

int main() {
    string a, b;
    cin >> a >> b;
    cout << Sum(a, b);
    return 0;
}