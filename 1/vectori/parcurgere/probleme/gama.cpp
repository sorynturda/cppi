//https://www.pbinfo.ro/probleme/3358/gama
#include <bits/stdc++.h>

using namespace std;

ifstream f("gama.in");
ofstream g("gama.out");

int main() {
    int n, k;
    f >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        f >> a[i];
    int mn = 1e9, pmn = 0;
    for (int i = 0; i < n; i++) {
        mn = n + 1;
        for (int j = i; j < n && j - i <= k; j++)
            if (a[j] < mn)
                mn = a[j], pmn = j;
        k -= (pmn - i);
        for (int j = pmn - 1; j >= i; j--)
            swap(a[j], a[j + 1]);
    }
    for (int i = 0; i < n; i++)
        g << a[i] << ' ';
    g << '\n';
    return 0;
}