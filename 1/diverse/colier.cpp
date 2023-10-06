#include <bits/stdc++.h>

using namespace std;

ifstream f("colier.in");
ofstream g("colier.out");

int cifmin(int x) {
    int y = 10;
    while (x) {
        y = min(y, x % 10);
        x /= 10;
    }
    return y;
}

int cifmax(int x) {
    int y = 0;
    while (x) {
        y = max(y, x % 10);
        x /= 10;
    }
    return y;
}

bool verif(int x, int a, int b) {
    while (x) {
        if (x % 10 == a)
            return false;
        if (x % 10 == b)
            return true;
        x /= 10;
    }
    return false;
}

int tip(int x) {
    if (x / 10 > x % 10)
        return 1;
    return 2;
}
void c1() {
    int n, ans = 0;
    f >> n;
    for (int i = 0; i < n; i++) {
        int x;
        f >> x;
        int a = cifmin(x), b = cifmax(x);
        if (verif(x, a, b))
            x = a * 10 + b;
        else
            x = b * 10 + a;
        if (x / 10 < x % 10)
            ans++;
    }
    g << ans << '\n';
}

void c2() {
    int n, x, m1, ta, tc, nrsir = 0;
    f >> n;
    f >> x;
    int a = cifmin(x), b = cifmax(x);
    if (verif(x, a, b))
        x = a * 10 + b;
    else
        x = b * 10 + a;
    m1 = tip(x);
    ta = tip(x);
    for (int i = 1; i <= n; i++) {
        int y;
        f >> y;
        int a = cifmin(y), b = cifmax(y);
        if (verif(y, a, b))
            y = a * 10 + b;
        else
            y = b * 10 + a;
        tc = tip(y);
        if (tc != ta)
            nrsir++;
        ta=tc;
    }
    if (tc == m1 and nrsir != 0)
        g << nrsir << '\n';
    else
        g << nrsir + 1 << '\n';
}

int main() {
    int t;
    f >> t;
    if (t == 1)
        c1();
    else
        c2();
    return 0;
}