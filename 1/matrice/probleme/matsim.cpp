//https://www.pbinfo.ro/probleme/786/matsim
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)for (int j = 0; j < n; j++)cin >> a[j][i];
    for (int i = 0; i < n; i++) {for (int j = 0; j < n; j++)cout << a[i][j] << ' '; cout << '\n';}
    return 0;
}