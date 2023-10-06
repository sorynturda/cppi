//https://www.pbinfo.ro/probleme/605/crb
#include <bits/stdc++.h>

using namespace std;

ifstream in("crb.in");
ofstream out("crb.out");

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, a[1000], b[1000];
    in >> n;
    for (int i = 0; i < n; i++) {
        in >> a[i];
        b[i] = a[i];
    }
    bool ok = true;
    while (ok) {
        ok = false;
        for (int i = 0; i < n - 1; i++)
            if (b[i] < b[i + 1]) {
                ok = true;
                swap(b[i], b[i + 1]);
            }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == b[i])
            ans++;
    out << ans << '\n';
    in.close(), out.close();
    return 0;
}