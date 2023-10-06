//https://www.pbinfo.ro/probleme/2414/2lap
#include <bits/stdc++.h>

using namespace std;

ifstream in("2lap.in");
ofstream out("2lap.out");

int main() {
    int n, m;
    in >> n >> m;
    int p[33] = {0};
    int x;
    while (in >> x) {
        int po2 = 0;
        if (x != 0)
            while ((x >> 1))
                po2++, x = x >> 1;
        p[po2]++;
    }
    x = 0;
    int p1, p2, cnt1, cnt2;
    for (int i = 0; i <= 30; i++)
        if (p[i]) {
            if (x < n) {
                p1 = i;
                cnt1 = x + p[i] - n;
            }
            if (x < m) {
                p2 = i;
                cnt2 = m - x - 1;
            }
            x += p[i];
        }
    out << (1 << p1) << ' ' << (1 << p2) << '\n';
    x = 0;
    if (p1 == p2)
        cnt1 = m - n - 1, cnt2 = 0;
    x += p1 * cnt1;
    x += p2 * cnt2;
    for (int i = p1 + 1; i <= p2 - 1; i++)
        x += p[i] * i;

    out << x << '\n';

    if (cnt1)
        out << (1 << p1) << ' ';

    for (int i = p1 + 1; i <= p2 - 1; i++)
        if (p[i])
            out << (1 << i) << ' ';
    if (cnt2)
        out << (1 << p2) << ' ';
    out << '\n';
    // cout << cnt1 << ' ' << cnt2 << '\n';
    in.close(), out.close();
    return 0;
}