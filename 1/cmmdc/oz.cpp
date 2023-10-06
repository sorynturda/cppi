//https://www.infoarena.ro/problema/oz
#include <bits/stdc++.h>

using namespace std;

ifstream in("oz.in");
ofstream out("oz.out");

int main() {
    ios_base::sync_with_stdio(false);
    in.tie(NULL);
    out.tie(NULL);

    int n, m;
    in >> n >> m;
    vector<int>v(n + 1, 1);
    vector<int>i(m + 1), j(m + 1), d(m + 1);
    for (int k = 1; k <= m; k++) {
        in >> i[k] >> j[k] >> d[k];
        v[i[k]] = v[i[k]] / __gcd(v[i[k]], d[k]) * d[k];
        v[j[k]] = v[j[k]] / __gcd(v[j[k]], d[k]) * d[k];
    }
    bool ok = true;
    for (int k = 1; k <= m; k++)
        if (__gcd(v[i[k]], v[j[k]]) != d[k])
            ok = false;
    if (ok) {
        for (int i = 1; i <= n; i++)
            out << v[i] << ' ';
        out << '\n';
    }
    else
        out << -1 << '\n';
    return 0;
}