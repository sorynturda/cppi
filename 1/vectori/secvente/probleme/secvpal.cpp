//https://www.pbinfo.ro/probleme/310/secvpal
#include <bits/stdc++.h>

using namespace std;

ifstream in("secvpal.in");
ofstream out("secvpal.out");

int main() {
    int n;
    in >> n;
    vector<int>a(n + 1);
    for (int i = 1; i <= n; i++)
        in >> a[i];
    int p = 1, u = 0;
    for (int mij = 1; mij <= n; mij++) {
        int i = mij, j = mij;
        while (i > 0 && j <= n && a[i] == a[j])
            i--, j++;
        if (j - i - 1 > u - p + 1)
            u = j - 1, p = i + 1;
        i = mij, j = mij + 1;
        while (i > 0 && j <= n && a[i] == a[j])
            i--, j++;
        if (j - i - 1 > u - p + 1)
            u = j - 1, p = i + 1;
    }
    out << p << ' ' << u;
    out << '\n';
    in.close(), out.close();
    return 0;
}