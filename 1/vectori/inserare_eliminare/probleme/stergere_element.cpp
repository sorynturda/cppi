//https://www.pbinfo.ro/probleme/1452/stergere-element
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, p, a[1501];
    cin >> n >> p;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = p; i < n; i++)
        a[i] = a[i + 1];
    n--;
    for (int i = 1; i <= n; i++)
        cout << a[i] << ' ';
    cout << '\n';
    return 0;
}