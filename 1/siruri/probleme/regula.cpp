//https://www.pbinfo.ro/probleme/3643/regula
#include <bits/stdc++.h>

using namespace std;

void c1(int n) {
    int x = 2, s = 2;
    if (n == 1 or n == 2) {
        cout << 1 << '\n';
        return;
    }
    while (s + x + x / 2 <= n) {
        s += (x + x / 2);
        x ++;
    cout << x << ' ' << s << '\n';
    }
}

void c2(int n) {
    return;
}
int main() {
    int c, v;
    cin >> c >> v;
    if (c - 1)
        c2(v);
    else
        c1(v);
    return 0;
}