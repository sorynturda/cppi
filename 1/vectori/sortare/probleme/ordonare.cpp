//https://www.pbinfo.ro/probleme/509/ordonare
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a[1000];
    cin >> n;
    for (int i = 0; i < n; i++)cin >> a[i];
    // bool ok;
    // do {
    //     ok = false;
    //     for (int i = 0; i < n - 1; i++)
    //         if (a[i] > a[i + 1])
    //             swap(a[i], a[i + 1]), ok = true;
    // } while (ok);

    // for (int i = 0; i < n; i++) {
    //     int jMin = i;
    //     for (int j = i + 1; j < n; j++)
    //         if (a[j] < a[jMin])
    //             jMin = j;
    //     if (i != jMin)
    //         swap(a[i], a[jMin]);
    // }
    /// sortare prin selectie

    for (int i = 1; i < n; i ++) {
        int j = i - 1, x = a[i];
        while (j >= 0 and a[j] > x) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;
    }

    for (int i = 0; i < n; i++)cout << a[i] << ' ';
    cout << '\n';
    return 0;
}