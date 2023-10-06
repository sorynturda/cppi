//https://www.pbinfo.ro/probleme/2296/gcd
#include <bits/stdc++.h>

using namespace std;

ifstream in("gcd.in");
ofstream out("gcd.out");
const int NMAX = 1000001;
int a[NMAX], b[NMAX];

int main() {
    int n;
    in >> n;
    for (int i = 0; i < n; i++) {
        int x;
        in >> x;
        a[x]++;
    }
    for (int i = 0; i < n; i++) {
        int x;
        in >> x;
        b[x]++;
    }
    int ans = 0;
    for (int d = NMAX - 1; d >= 1 && !ans; d--)
        for (int i = 1; i < (NMAX - 1) / d && ans == 0; i++)
            if (a[i * d] && b[i * d])
                ans = d;
    out << ans << '\n';
    in.close(), out.close();
    return 0;
}