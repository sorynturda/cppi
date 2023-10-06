//https://www.pbinfo.ro/probleme/1453/stergere1
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int p = n - 1; p >= 0; p--) {
        if (!(a[p] % 2)) {
            for (int i = p; i < n; i++)
                a[i] = a[i + 1];
            n--;
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << '\n';
    return 0;
}