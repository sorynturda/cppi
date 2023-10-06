//https://www.infoarena.ro/problema/crescator3
#include <bits/stdc++.h>

using namespace std;

ifstream f("crescator3.in");
ofstream g("crescator3.out");

int sumcif(int x) {
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main() {
    int n, x1, x2, ans=1;
    f >> n;
    f >> x1;
    x2 = x1;
    for (int i = 0; i < n; i++) {
        f >> x1;
        while (x2 < x1)
            x2 = x2 + sumcif(x2);
        if (x1 == x2)
            ans ++;
    }
    g << ans << '\n';
    return 0;
}
