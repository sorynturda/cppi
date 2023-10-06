//https://www.pbinfo.ro/probleme/4386/inserare3
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a[2000], mn = 1e9;
    cin >> n;
    for (int i = 0; i < n; i++) {cin >> a[i]; mn = min(mn, a[i]);}
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (mn == a[i])
            cnt++;
    int on = n;
    n += cnt;
    for (int i = n - 1, j = on - 1; j >= 0; j--, i--) {
        a[i] = a[j];
        if (a[i] == mn) {
            a[i - 1] = a[j];
            i--;
        }
    }
    for (int i = 0; i < n; i++)cout << a[i] << ' ';
    cout << '\n';
    return 0;
}