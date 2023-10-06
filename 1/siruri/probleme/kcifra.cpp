//https://www.pbinfo.ro/probleme/1347/kcifra
#include <bits/stdc++.h>

using namespace std;

ifstream in("kcifra.in");
ofstream out("kcifra.out");

int cif(int n) {
    int c = 0;
    while (n) {
        c++;
        n /= 10;
    }
    return c;
}

int main() {
    int k;
    in >> k;
    int n = 1, x = 1;
    while (x + cif(n * 10 + n % 10) <= k) {
        x += cif(n * 10 + n % 10);
        n++;
    }
    n = n * 10 + n % 10;
    // out << n << ' ' << x << '\n';
    int end = x + cif(n) - 1, c = 0;
    while (end - c != k) {
        n /= 10;
        c++;
    }
    out << n % 10 << '\n';
    return 0;
}