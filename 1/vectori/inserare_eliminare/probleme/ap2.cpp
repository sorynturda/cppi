//https://www.pbinfo.ro/probleme/1366/aceeasi-paritate-2
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a[1000];
    cin >> n;
    for (int i = 0; i < n; i++)cin >> a[i];

    bool ok = true;
    while (ok) {
        for (int i = 0; i < n; i++)cout << a[i] << ' ';
        cout << '\n';
        ok = false;
        for (int i = 1; i < n; i++)
            if (a[i - 1] != a[i] && abs(a[i]) % 2 == abs(a[i - 1]) % 2) {
                int ma = a[i - 1] + a[i];
                ma /= 2;
                for (int j = n - 1; j >= i; j--)
                    a[j + 1] = a[j];
                n++;
                a[i] = ma;
                i++;
                ok = true;
            }
    }
    return 0;
}