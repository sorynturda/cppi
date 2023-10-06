//https://www.pbinfo.ro/probleme/2858/pv
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<short int>a(n);
    for (auto &it : a)
        cin >> it;
    vector<short int> ans(4, 0);
    for (int i = n - 1; i >= 0; i--)
        cout << a[i] << ' ';
    puts("");
    for (int i = 0; i < n; i++) {
        if (!(a[i] % 2))
            ans[0] += a[i];
        if ((i + 1) % 2 == 0)
            ans[1] += a[i];
        if (a[i] % 10 == 0)
            ans[2]++;
        if (a[i] % 3 == 0 and i % 2 == 0)
            ans[3] += a[i];
    }
    for (auto it : ans)
        cout << it << '\n';
    return 0;
}