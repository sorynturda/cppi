#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, a[100001], b[100001], c[200002], d[200002];
    cin >> n;
    for (int i = 0; i < n; i++)cin >> a[i];
    cin >> m;
    for (int i = 0; i < m; i++)cin >> b[i];
    int i = 0, j = 0, k = 0, l = 0;
    while (i < n && j < m) {
        if (a[i] == b[j]) {
                c[k++] = a[i], d[l++] = a[i], i++, j++;
        }
        else {
            if (a[i] > b[j]) {
                    c[k++] = b[j], j++;
            }
            else {
                    c[k++] = a[i], i++;

            }
        }
    }
    for (; i < n; i++)
            c[k++] = a[i];

    for (; j < m; j++)
            c[k++] = b[j];
    for (int it = 0; it < k; it++)
        cout << c[it] << ' ';
    cout << '\n';
    for (int it = 0; it < l; it++)
        cout << d[it] << ' ';
    cout << '\n';

    return 0;
}