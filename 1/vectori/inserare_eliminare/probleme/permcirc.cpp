//https://www.pbinfo.ro/probleme/162/permcirc
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a[20];
    cin >> n;
    for (int i = 0; i < n; i++)cin >> a[i];
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++)
            cout << a[i] << ' ';
        cout << '\n';
        int primul = a[0];
        for (int i = 0; i < n - 1; i++)
            a[i] = a[i + 1];
        a[n - 1] = primul;
    }
    return 0;
}