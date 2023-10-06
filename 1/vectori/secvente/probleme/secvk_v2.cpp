//https://www.pbinfo.ro/probleme/134/secvk
#include <bits/stdc++.h>

using namespace std;

ifstream in("secvk.in");
ofstream out("secvk.out");

int main() {
    int n, k;
    in >> n >> k;
    vector<int>a(n + 1), s(n + 1);
    for (int i = 1; i <= n; i++)
        in >> a[i];
    for (int i = 1; i <= n; i++)
        s[i] += (s[i - 1] + a[i]);
    int mx = 0, st;
    for (int i = 1; i <= n - k + 1; i++) {
        int suma = s[i + k - 1] - s[i-1];
        // cout << suma << '\n';
        if (suma > mx)
            st = i, mx = suma;
    }
    for (int i = st; i <= k + st - 1; i++)
        out << a[i] << ' ';
    out << '\n';
    in.close(), out.close();
    return 0;
}