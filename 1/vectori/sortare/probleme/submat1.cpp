//https://www.pbinfo.ro/probleme/2412/submat1
#include <bits/stdc++.h>

using namespace std;

ifstream in("submat1.in");
ofstream out("submat1.out");

int main() {
    int n, m, cnt[1000] = {0}, ans;
    in >> n >> m;
    for (int i = 0; i < n; i++) {
        int x;
        for (int j = 0; j < m; j++) {
            int x;
            in >> x;
            if (!x)
                cnt[j]++;

        }
    }
    ans = 0;
    for (int i = 0; i < m; i++)
        ans = max(ans, (i + 1) * cnt[i]);
    out << ans << '\n';
    in.close(), out.close();
    return 0;
}