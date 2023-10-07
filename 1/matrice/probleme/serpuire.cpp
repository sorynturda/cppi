//https://www.pbinfo.ro/probleme/794/serpuire
#include <bits/stdc++.h>

using namespace std;
int main() {
    int n, a[25][25];
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int k = 0; k < n - 1; k++)
        if (k % 2 == 0)
            for (int i = 0; i <= k; i++)
                cout << a[i][k - i] << ' ';
        else
            for (int i = k; i >= 0; i--)
                cout << a[i][k - i] << ' ';

    for (int k = n; k >= 0; k--)
        if (k % 2 == 0)
            for (int i = k; i >0; i--)
                cout << a[n - k + 1][i] << ' ';
        else
            for (int i = 0; i < k; i++)
                cout << a[n - i][i] << ' ';
    cout << '\n';
    return 0;
}
// 4
// 1  3  4 10
// 2  5  9 11
// 6  8 12 15
// 7 13 14 16