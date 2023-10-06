//https://www.pbinfo.ro/probleme/158/inserare
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, p, a[25];
    cin >> n >> x >> p;
    p--;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = n; i >= p; i--)
        a[i + 1] = a[i];
    a[p] = x;
    n++;
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << '\n';
    return 0;
}