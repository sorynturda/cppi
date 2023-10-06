//https://www.pbinfo.ro/probleme/1499/broscute
#include <bits/stdc++.h>

using namespace std;

ifstream in("broscute.in");
ofstream out("broscute.out");

int main() {
    int n, k, z, zf;
    in >> n >> k;
    int a[1005], b[1005];
    for (int i = 0; i <= n; i++) {
        in >> a[i];
        if (a[i] == 0)
            z = i;
    }
    for (int j = 0; j <= n; j++) {
        in >> b[j];
        if (!b[j])
            zf = j;
    }
    int sar = 0;
    bool ok = true;
    while (ok) {
        ok = false;
        int br, s, d;
        if (b[z] == a[z]) {
            for (int i = 0; i <= n; i++)
                if (a[i] != b[i]) {
                    s = i;
                    ok = true;
                    break;
                }
            br = a[s];
            d = z;
            swap(a[s], a[d]);
            z = s;
            // puts("caz 1");
        }
        else {
            // puts("caz 2");
            // cout << z << '\n';
            for (int i = 0; i <= n; i++)
                if (a[i] == b[z]) {
                    s = i;
                    br = b[z];
                    ok = true;
                    d = z;
                    break;
                }
            swap(a[s], a[d]);
            z = s;
        }
        if (!ok)
            break;
        sar++;
        if (k == 2)
            out << br << ' ' << s + 1 << ' ' << d + 1  << '\n';
    }
    if (sar == 0)
        out << "broscutele nu se joaca\n";
    else if (k == 1)
        out << sar << '\n';

    in.close(), out.close();
    return 0;
}