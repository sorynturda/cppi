//https://www.infoarena.ro/problema/hartie
#include <bits/stdc++.h>

using namespace std;

ifstream f("hartie.in");
ofstream g("hartie.out");

using ull = unsigned long long;

int main() {
    int x1, x2, x3, x4, x5, x6;

    ull ans = 0;
    while (f >> x1 >> x2 >> x3 >> x4 >> x5 >> x6) {
        ans = 0;
        int r1 = 0, r2 = 0, r3 = 0, r4 = 0;
        ans += x6;
        if (x5 != 0) {
            ans += x5;
            r1 += (x5 * 11);
        }
        if (x4) {
            ans += x4;
            r2 += (5 * x4);
        }
        if (x3) {
            ans += (x3 / 4);
            if (x3 % 4)
                ans++;
            int rest = x3 % 4;
            switch (rest) {
            case 1: r2 += 5; r1 += 7;
                break;
            case 2: r2 += 3; r1 += 6;
                break;
            case 3: r2++; r1 += 5;
                break;
            case 0: break;
            }
        }
        if (r2 < x2 and x2) {
            x2 -= r2;
            ans += (x2 / 9);
            if (x2 % 9) {
                ans++;
                r1 += ((9 - x2 % 9) * 4);
            }
        }
        else {
            r1 += ((r2 - x2) * 4);
        }
        // cout << r1 << ' ' << r2 << ' ' << r3 << '\n';
        if (r1 < x1 and x1) {
            x1 -= r1;
            ans += x1 / 36;
            if (x1 % 36)
                ans++;
        }
        g << ans << '\n';
    }
    return 0;
}