//https://www.pbinfo.ro/probleme/4266/mitm
using namespace std;
#include <bits/stdc++.h>

int main() {
    int n, a[40], s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int ans = 0;
    for (int i = n-1; i >=0; i--)
        if (ans + a[i] <= s)
            ans += a[i];
    cout << ans << '\n';
    return 0;
}