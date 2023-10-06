//https://www.pbinfo.ro/probleme/1608/sortare-divizori
#include <bits/stdc++.h>

using namespace std;

ifstream in("sortare_divizori.in");
ofstream out("sortare_divizori.out");

int fct(int n) {
    int ans = 1, d;
    for (d = 2; d * d <= n; d++) {
        int p = 0;
        while (n % d == 0) {
            p++;
            n /= d;
        }
        ans *= (p + 1);
    }
    if (n != 1)
        ans *= 2;
    return ans;
}

int main() {
    int n, a[1000], nrd[1000];
    in >> n;
    for (int i = 0; i < n; i++) {
        in >> a[i];
        nrd[i] = fct(a[i]);
    }
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (nrd[i] < nrd[j] || (nrd[i] == nrd[j] and a[i] > a[j]))
                swap(nrd[i], nrd[j]), swap(a[i], a[j]);
    for (int i = 0; i < n; i++)
        out << a[i] << ' ';
    out << '\n';
    in.close(), out.close();
    return 0;
}