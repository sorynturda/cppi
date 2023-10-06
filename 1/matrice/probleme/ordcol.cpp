//https://www.pbinfo.ro/probleme/769/ordcol
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[100][100], n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)for (int j = 0; j < m; j++)cin >> a[i][j];
    for (int i = 0; i < m; i++)
        for (int j = i + 1; j < m; j++)
            if (a[0][i] > a[0][j]) {
                for (int k = 0; k < n; k++) {int aux = a[k][i]; a[k][i] = a[k][j]; a[k][j] = aux;}
            }
    for (int i = 0; i < n; i++) {for (int j = 0; j < m; j++)cout << a[i][j] << ' '; cout << '\n';}
    return 0;
}
