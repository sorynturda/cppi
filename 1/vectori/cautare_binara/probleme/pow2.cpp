#include <bits/stdc++.h>

using namespace std;



int main() {
    int n;
    cin >> n;
    map <int, int> H;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        H[x]++;
    }
    int ans = 0;
    for (auto const [k, v] : H) {
        int p2 = 1;
        for (int i = 0; i < 31; i++) {
            if (H.count(p2-k)) {
                ans += (H[p2-k] * v);
                cout << k << ' ' << p2-k << '\n';
            }
            p2 = p2 << 1;
        }
        H.erase(k);
    }
    cout << ans << '\n';
    return 0;
}