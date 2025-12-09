#include <bits/stdc++.h>

#define maxN 30001

int N;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if(!(cin >> N)) return 0;
    priority_queue <long long, vector<long long>, greater<long long>> pq;
    long long weight;
    for (int i = 0; i < N; ++i) {
        cin >> weight;
        pq.push(weight);
    }

    long long total = 0;

    while (pq.size() > 1)
    {
        long long first = pq.top();
        pq.pop();

        long long second = pq.top();
        pq.pop();

        long long sum = first + second;
        total += sum;
        pq.push(sum);
    }

    double res = 0.05 * total;

    cout << (long long)res << endl;
    
    return 0;
}