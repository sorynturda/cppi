//https://www.pbinfo.ro/probleme/1365/aceeasi-paritate
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a[200];
    cin >> n;
    for (int i = 0; i < n; i++)cin >> a[i];

    for (int p = n - 1; p > 0; p--) {
        if (abs(a[p]) % 2 == abs(a[p - 1]) % 2) {
            for (int i = n - 1; i >= p; i--)
                a[i + 1] = a[i];
            n++;
            a[p] = (a[p - 1] + a[p + 1]) / 2;
        }
    }

    for (int i = 0; i < n; i++)cout << a[i] << ' ';
    cout << '\n';
    return 0;
}