//https://www.pbinfo.ro/probleme/3196/instabook
using namespace std;
#include <bits/stdc++.h>
ifstream in("instabook.in");
ofstream out("instabook.out");
const int N = 1000001;

int bun[N], slab[N], poza[N], loc[N];

int main() {
    int n, m;
    in >> n >> m;
    for (int i = 1; i <= n; i++)
        bun[i] = i, poza[i] = i, slab[i] = i, loc[i] = i;
    for (int i = 0; i < m; i++) {
        int x;
        in >> x;
        if (poza[x] != 1) {
            int lv = poza[x];
            int ln = lv - 1;
            int pv = loc[ln];
            loc[lv] = pv;
            loc[ln] = x;
            poza[pv] = lv;
            poza[x] = ln;
            bun[x] = min(bun[x], poza[x]);
            slab[x] = max(slab[x], poza[x]);
            bun[pv] = min(bun[pv], poza[pv]);
            slab[pv] = max(slab[pv], poza[pv]);

        }
        // for (int i = 1; i <= n; i++)
        //     cout << loc[i] << ' ';
        // cout << '\n';
    }
    for (int i = 1; i <= n; i++)
        out << bun[i] << ' ' << slab[i] << '\n';
    in.close(), out.close();
    return 0;
}