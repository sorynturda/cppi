//https://www.pbinfo.ro/probleme/159/inseraredupa
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a[50];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int p = n - 1; p >= 0; p--) {
        if (a[p] % 2 == 0) {
            for (int i = n - 1; i > p; i--)
                a[i + 1] = a[i];
            a[p + 1] = 2 * a[p];
            n++;
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << '\n';
    return 0;
}