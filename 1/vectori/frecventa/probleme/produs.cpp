//https://www.pbinfo.ro/probleme/1010/produs
using namespace std;
#include <bits/stdc++.h>

int a[10001], b[10001];

int main() {
    int n, p, m;
    cin >> n >> p;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x]++;
    }
    int ans = 0;
    for (int i = 1; i <= 9999; i++)
        a[i] = a[i - 1] + a[i];
    ans *= a[0];
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        if (x == 0)
            ans += m;
        else {
            int pp = p;
            pp /= x;
            if (p % x == 0)
                pp--;
            if (pp <= 9999)
                ans += a[pp];
            else
                ans += n;
        }
    }

    cout << ans << '\n';
    return 0;
}