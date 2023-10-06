//https://www.pbinfo.ro/probleme/3357/beta
#include <bits/stdc++.h>

using namespace std;

ifstream f("beta.in");
ofstream g("beta.out");

int main() {
    int n, poz, p = 1, cresc = true, elem = -1, end, start, total = 0;
    f >> n >> poz;
    while (total < poz and n / p != 0) {
        int cate = n / p;
        total += cate;
        start = n - cate + 1;
        end = n;
        p = p << 1;
        cresc = !cresc;
    }
    cresc = !cresc;
    total += (start - end);
    if (total < poz and n / p == 0) {
        g << -1 << '\n';
        return 0;
    }
    // cout << total << '\n';
    // cout << start << ' ' << end << '\n';
    while (total < poz) {
        if (cresc)
            start++;
        else
            end--;
        total++;
    }
    if (cresc)
        g << start << '\n';
    else
        g << end << '\n';
    return 0;
}