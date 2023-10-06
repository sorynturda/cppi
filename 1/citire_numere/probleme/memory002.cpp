//https://cppi.sync.ro/materia/citirea_mai_multor_numere.html
#include <bits/stdc++.h>

using namespace std;

ifstream f("memory002.in");
ofstream g("memory002.out");

using ll = long long;

int main() {
    int n, mn = 1e9, mx = 0;
    ll sum = 0, smx = 0, smn = 0;
    f >> n;
    for (int i = 0; i < n; i++) {
        int x;
        f >> x;
        sum += x;
        if (x < mn)
            smn = sum, mn = x;
        else if (x > mx)
            smx = sum, mx = x;

    }
    g << abs(smx - smn) + (smn < smx ? mn : mx) << '\n';
    return 0;
}