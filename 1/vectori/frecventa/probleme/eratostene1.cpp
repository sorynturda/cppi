//https://www.pbinfo.ro/probleme/3312/eratostene1
using namespace std;
#include <bits/stdc++.h>
ifstream in("eratostene1.in");
ofstream out("eratostene1.out");

const int BITS = 1, NMAX = 1000001;


int main() {
    bitset<BITS> a[NMAX / 2];
    a[0].set(0);
    a[1].set(0);

    for (int i = 3; i * i < NMAX; i += 2)
        if (a[(i - 1) / 2].test(0) == 0)
            for (int j = 2 * i + 1; j < NMAX; j += 2)
                    a[(j - 1) / 2].set(0);
    int ans = 0, n = 0, x;
    for (int i = 1; i <= 100; i += 2) {
        if (a[(i - 1) / 2].test(0) == 0)
            cout << i << ' ';
    }
    in >> n;
    while (n--) {
        in >> x;
        if (x == 1)
            continue;
        if (x == 2)
            ans++;
        if (x % 2 == 1 && a[(x - 1) / 2].test(0) == 0)
            ans++;
    }
    out << ans << '\n';
    in.close(), out.close();
    return 0;
}