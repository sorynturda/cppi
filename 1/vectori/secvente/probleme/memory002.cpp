//https://www.pbinfo.ro/probleme/1446/memory002
#include <bits/stdc++.h>

using namespace std;

ifstream in("memory002.in");
ofstream out("memory002.out");
using ull = unsigned long long; 
int main() {
    int n, x,  mx = 0, mn = 2e9;
    ull s = 0, smx = 0, smn = 0;
    in >> n;
    for (int i = 1; i <= n; i++) {
        in >> x;
        s += x;
        if (mx < x)
            smx = s, mx = x;
        if (mn > x)
            smn = s, mn = x;

    }
    if (smn > smx)
        out << smn - smx + mx;
    else
        out << smx - smn + mn;
    out << '\n';
    in.close(), out.close();
    return 0;
}