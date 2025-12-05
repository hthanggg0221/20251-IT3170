#include <bits/stdc++.h>

using namespace std;

int main() {
    char s[102];
    int SUM[102] = {0}, i, j, length;
    while (gets(s)) {
        if (!strcmp(s, "0")) break;
        length = strlen(s);
        for (int i = 0, j = strlen(s) - 1; i < length; i++, j--) {
            SUM[i] += s[j] - '0';
        }
    }

    for (i = 0; i < 102; i++) {
        if (SUM[i] >= 10) {
            SUM[i + 1] += SUM[i] / 10;
            SUM[i] = SUM[i] % 10; 
        }
    }

    i = 101;
    while (SUM[i] == 0 && i >= 0)
        i--;
    if (i == -1) printf("0");
    else
        for (; i >= 0; i--)
            printf("%d", SUM[i]);
}