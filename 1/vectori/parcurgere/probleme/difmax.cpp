#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    int a[n], mx[n], mn[n], dif = -1e9 + 5;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    mx[0] = a[0], mn[n - 1] = a[n - 1];
    for (int i = 1; i < n; i++)
        mx[i] = max(mx[i - 1], a[i]);
    for (int i = n - 2; i >= 0; i--)
        mn[i] = min(mn[i + 1], a[i]);
    for (int i = 0; i < n - 1; i++)
        dif = max(dif, mx[i] - mn[i + 1]);
    // for (int i = 0; i < n; i++)
    //     cout << mx[i] << ' ';
    // cout << '\n';
    // for (int i = 0; i < n; i++)
    //     cout << mn[i] << ' ';
    printf("%d\n", dif);
    return 0;
}